/*
Problem: Check if an Array is a Palindrome

Statement:
Write a C++ program that checks whether a given integer array is a palindrome.

An array is a palindrome if it reads the same from left to right and right to left.

Print "Palindrome" if it is, otherwise "Not a palindrome".

Example Input 1:
n = 5
arr = [1, 2, 3, 2, 1]

Expected Output 1:
Palindrome

Example Input 2:
n = 6
arr = [1, 2, 3, 3, 2, 1]

Expected Output 2:
Palindrome

Example Input 3:
n = 4
arr = [1, 2, 3, 4]

Expected Output 3:
Not a palindrome
*/
#include <iostream>
using namespace std;
void isaPalindrome(vector<int> &arr,int &n){
    int left = 0,right = n-1;
    while(left<=right){
        if(arr[right]!=arr[left]){
            cout<<"Not a palindrome\n";
            return;
        }
        right --;
        left++;
    }
    cout<<"Not a palindrome\n";
    
}
int main() {
    int n;//size of the array
    cout<<"Enter the value for n: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" values:"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    isaPalindrome(arr,n);
    return 0;
}