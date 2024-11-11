//  WAP to create an array of n elements and sort it in ascending order. 
#include <iostream>
using namespace std;

void swap(int* a, int *b ){
    int temp = *a;
     *a = *b;
    *b = temp;
}

void Sort(int arr[], int n){
    for(int i = 0; i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Sort(arr, n);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
