#include <iostream>
using namespace std;
int longestSubarray(vector<int> &arr,int n, int S){
    int currentSum = 0;
    int max_length = 0;
    int start = 0;

    for(int end = 0; end < n; end++){
        currentSum += arr[end];
        // Shrink window while sum exceeds S
        while(currentSum > S && start <= end){
            currentSum -= arr[start];
            start++;
        }
        max_length = max(max_length, end - start + 1);
    }

    return max_length;
}

int main() {
    int n; //size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    int S; // largest sum of the sub array
    cout<<"Enter the target sum of subarray: ";
    cin>>S;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The longest contiguous subarray with sum less than "<<S<<" is: "<<longestSubarray(arr,n,S)<<endl;
    return 0;
}