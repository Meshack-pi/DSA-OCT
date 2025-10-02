/*
Write a C++ program that takes an integer array of size n and finds the second largest element.

You should not sort the array.

If the array has less than 2 distinct elements, output "No second largest element".

Example Input 1:

n = 6
arr = [12, 45, 7, 19, 8, 45]


Expected Output 1:

Second largest = 19


(Here the largest is 45, but the next distinct smaller one is 19.)

Example Input 2:

n = 4
arr = [7, 7, 7, 7]


Expected Output 2:

No second largest element
*/
#include <iostream>
using namespace std;
void second_largest(vector<int> &arr,int n){
    int max=arr[0];
    int max_position;
    int second_max = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            max_position = i;
        }
    }
    for(int i =1;i<n;i++){
        if(arr[i]!=max && arr[i]>second_max){
            second_max = arr[i];
        }
    }
    if(arr[max_position]==second_max){
        cout<<"No second largest element"<<endl;
    }else{
        cout<<"Largest number is: "<<max<<" second largest is: "<<second_max<<endl;   
    }
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" values"<<endl; //must enter n values
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    second_largest(arr,n);
    return 0;
}