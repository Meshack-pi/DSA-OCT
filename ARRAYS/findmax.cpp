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
    int arr[]={12,3,45,7,19,8};
    int n=6;
    int maximum = arr[0];
    int minimum = arr[0];
    for(int i =1;i<5;i++){
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
