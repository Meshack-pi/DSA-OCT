#include <iostream>
using namespace std;

void checkPalindrome(vector<int> &arr,int n){
    int left = 0;
    int right = n-1;
    //check all value
    while(left<right){
        if(arr[left]!=arr[right]){
            cout<<"Not a palindrome";
            return;
        }
        left++;
        right--;
    }
    cout<<"A palindrome\n";

}

int main() {
    //recalling finding a palindrome
    vector<int> arr = {1,2,3,2,1};
    int n = arr.size();
    checkPalindrome(arr,n);
    return 0;
}