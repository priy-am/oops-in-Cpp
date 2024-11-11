// WAP  to search an item(linear) in an array. 
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i]== key){
            return i;
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

    int result = linearSearch(arr, n, key);
    if(result == -1){
        cout<<"Not found!";
        return 0;
    }
    cout << "Item found at index: " << result << endl;

    return 0;
}
