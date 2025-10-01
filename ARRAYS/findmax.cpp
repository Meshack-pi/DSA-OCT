/*
Statement:
Write a program that takes an integer array of size n and finds:

The maximum element

The minimum element

Example Input:

n = 6
arr = [12, 3, 45, 7, 19, 8]


Expected Output:

Maximum = 45
Minimum = 3
*/
#include <iostream>

using namespace std;
int main(){
    //Update the array to take user input
    cout<<"How many numbers are you comparing?: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter " << n<<" values to the array"<<endl;
    for(int i =0;i<n;i++){
        cout<<"Enter the value to the array: ";
        cin>>arr[i];
    }
    int maximum = arr[0];
    int minimum = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    cout<<"The largest number is: "<<maximum<<endl;
    cout<<"The minimum number is: "<<minimum<<endl;
    return 0;
}
