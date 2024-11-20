// WAP for deletion in linear array.
#include <iostream>
using namespace std;

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement(int arr[], int &n, int pos, int capacity){
    if (n >= capacity) {
        cout << "Array is full, cannot insert new element.\n";
        return;
    }

    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }
    for(int i = pos; i<n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}


int main(int argc, char const *argv[])
{
    int capacity = 100;
    int arr[capacity];
    int n;
    cout<<"Enter the size of the array:- ";
    cin>>n;
    cout<<"Enter the element:- ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i]; 
    }

    cout << "Original array: ";
    displayArray(arr, n);
     int position;
    cout << "Enter the position to insert the new element (0-indexed): ";
    cin >> position;
      deleteElement(arr, n, position, capacity);

    cout << "Array after deletion: ";
    displayArray(arr, n);


    return 0;
}

