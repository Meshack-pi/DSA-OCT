/*
Statement:
Write a C++ program that takes an integer array of size n and finds the second smallest element.

You should not sort the array.

If the array has less than 2 distinct elements, output "No second smallest element".

Example Input 1:
n = 6
arr = [12, 3, 45, 7, 19, 8]

Expected Output 1:
Second smallest = 7
*/
#include <iostream>
using namespace std;
void secondSmallest(vector<int> &arr,int &n){
    int smallest = INT_MAX,second_smallest = INT_MAX;
    if(n<2){
        cout<<"No second smallest element";
        return;
    }
    for(int i =0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }else if(arr[i] !=smallest &&arr[i]<second_smallest){
            second_smallest = arr[i];
        }
    }
    if(second_smallest==INT_MIN){
        cout<<"No second smallest element\n";
    }else{
        cout<<"Smallest element is: "<<smallest<<endl;
        cout<<"Second smallest element is: "<<second_smallest<<endl;
    }
}

int main() {
    int n; //size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter: "<<n<<" elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    secondSmallest(arr,n);
    return 0;
}