#include <iostream>
using namespace std;
void insertion_sort_increasing(int array[], int length) {
    for (int i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j+1] = array[j];
            j = j -1;
        }
        array[j+1] = key;
    }
}

void insertion_sort_decreasing(int array[], int length){
    for(int i = 1; i<length;i++){
        int key = array[i];
        int j = i - 1;
        while(j>=0 and array[j]<key){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

int main() {
    int array[] = {12, 11, 13, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);
    
    insertion_sort_increasing(array, length);
    
    cout << "Sorted array in increasing order: \n";
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
    
    insertion_sort_decreasing(array, length);
    cout << "Sorted array in decreasing order: \n";
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}
