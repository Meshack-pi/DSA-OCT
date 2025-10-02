/*
Rotating an array by K steps in place
Given an integer array arr of size n, and an 
integer k, rotate the array to the right by k steps. 
The rotation should be done in-place, without using extra arrays.
Input:
n = 7
arr = [1, 2, 3, 4, 5, 6, 7]
k = 3

Output:
[5, 6, 7, 1, 2, 3, 4]

Example 2 
Input:
n = 5
arr = [10, 20, 30, 40, 50]
k = 2

Output:
[40, 50, 10, 20, 30]

*/
#include <iostream>
using namespace std;
//function to reverse an array
void reverseArray(vector<int> &arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n,k; //size of array and number of rotations
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int> arr(n); //array of size n
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of rotations: ";
    cin>>k;
    k = k%n; //handle cases where k is greater than n
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    cout<<"Rotated array is: ";
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}