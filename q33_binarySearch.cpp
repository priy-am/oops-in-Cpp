// WAP to search an item (binary) in an array.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        } 
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main(int argc, char const *argv[])
{
    int n, key;
    cout<<"Enter the size of the array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" element :- ";
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to search:- ";
    cin>>key;

    int result = binarySearch(arr, n, key);
    if(result == -1){
        cout<<"Not found!";
        return 0;
    }
    cout << "Item found at index: " << result << endl;
    return 0;
}
