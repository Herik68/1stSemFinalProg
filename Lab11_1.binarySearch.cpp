#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void bubblesort(int [], int);
int binarySearch(int [], int, int, int[], int&);

int main() {
    const int asize = 50;
    int a[asize] = {};
    int collect[asize] = {}; //In this lab, we will collect results in an array as we want to show all index if the number is found multiple times
    int freq = 0;    // To record how many time the number is found in the array      
    int key;
    srand(time(0));

    // Generate Random Num
    for (int i = 0; i < asize; i++) {
        a[i] = rand() % 99;
    }

    // Print Original Unsorted Num
    cout << "Original Unsorted Numbers: " << endl;
    for (int i = 1; i <= asize; i++) {
        cout << setw(3) << a[i - 1] << " ";
        if (i % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    // Sort the numbers and print
    bubblesort(a, asize);
    cout << "Sorted Numbers: " << endl;
    for (int i = 1; i <= asize; i++) {
        cout << setw(3) << a[i - 1] << " ";
        if (i % 10 == 0) {
            cout << endl;
        }
    }

    // Search
    cout << "\nEnter a number to be searched: ";
    cin >> key;
    binarySearch(a, asize, key, collect, freq);

    if (freq > 0) {
        bubblesort(collect,freq);
        cout << key << " is found at sorted index: ";
        for (int i = 0; i < freq; i++) {
            cout << collect[i] << " ";
        }
        cout << endl;
    } else {
        cout << key << " is not found." << endl;
    }

    return 0;
}

//////////// Functions 

//Sort
void bubblesort(int x[], int xsize) {
    int swap, hold;
    do {
        swap = 0;
        for (int j = 0; j < xsize - 1; j++) {
            if (x[j] > x[j + 1]) {
                hold = x[j];
                x[j] = x[j + 1];
                x[j + 1] = hold;
                swap = 1;
            }
        }
    } while (swap == 1);
}

//Search
int binarySearch(int x[], int xsize, int key, int collect[], int& freq) {
    int middle, low = 0, high = xsize - 1;

    while (low <= high) {
        middle = (low + high) / 2;
        
        if (x[middle] == key) {
            // add freq for printing result
            collect[freq++] = middle;
            
            // left num
            int left = middle - 1;
            while (x[left] == key) {
                collect[freq++] = left;
                left--;
            }
            
            // right num
            int right = middle + 1;
            while ( x[right] == key) {
                collect[freq++] = right;
                right++;
            }
            return middle; 
        }
        else if (x[middle] > key) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1;
}

