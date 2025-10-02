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
    if(n<2){
        cout<<"No second largest element\n";
        return;
    }
    int max=INT_MIN,second_max = INT_MIN;

    for(int i =0;i<n;i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];
        }else if(arr[i]>second_max && arr[i] !=max){
            second_max=arr[i];
        }
    }
    if(second_max==INT_MIN){
        cout<<"No second largest element\n";
    }else{
        cout<<"Largest element is: "<<max<<endl;
        cout<<"Second largest element is: "<<second_max<<endl;
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