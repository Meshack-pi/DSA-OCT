//Solution for longest balanced subarray prefix sum
#include <iostream>
using namespace std;

int longestSubarrayLength(vector<int> arr,int n){
    //function takes the array and the size of the array
    int length = 0;
    vector<int> arr2(n);
    vector<int> prefixSum(n); //the prefix sum array
    //convert all the zeros to become negative ones
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    prefixSum[0]=arr2[0];
    for(int i =1;i<n;i++){
        prefixSum[i]= arr2[i]+prefixSum[i-1];
        for(int j=0;j<n;j++){

        }
    }
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum == 0) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}
int main() {
    int n;//size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: "<<endl; //only zeros and ones
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Length of the longest subarray is: "<<longestSubarrayLength(arr,n);

    return 0;
}