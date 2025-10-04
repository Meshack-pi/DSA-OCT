
#include <iostream>
using namespace std;
void checkPalindrome(vector<int> &arr,int &n){
    int left = 0;
    int right = n-1;
    while(left<=right){
        if(arr[left]!=arr[right]){
            cout<<"Not a palindrome\n";
            return;
        }
        right--;
        left++;
    }
    cout<<"Palindrome\n";
}
int main() {
    int n; //size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" values: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //end
    checkPalindrome(arr,n);
    return 0;
}