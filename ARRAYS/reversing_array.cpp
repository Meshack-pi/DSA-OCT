// Statement:
// Write a program that takes an integer array of size n and reverses it in place (without using extra arrays).

// Example Input:

// n = 5
// arr = [10, 20, 30, 40, 50]


// Expected Output:

// Reversed array = [50, 40, 30, 20, 10]

#include <iostream>
#include <vector>
using namespace std;
int main(){
    //take n elements without using extra arrays
    int n;
    cout<<"What is the size of your array: ";
    cin>>n;
    if(n<=0){
        cout<<"The array size must be positive\n";
        return 0;
    }
    vector<int>arr(n); //initalize the array
    for(int i =0;i<n;i++){
        cout<<"Enter value: ";
        cin>>arr[i];
    }//enter values to the array
    int left =0,right =n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int num:arr){
        cout<<" "<<num;
    }
    cout<<endl;
    return 0;
}