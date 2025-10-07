#include <iostream>
using namespace std;

int maxSum(vector<int> &arr,int k){
    int s = arr.size();
    int window_sum = 0,max_sum = 0;
    //first window sum
    for(int i =0;i<k;i++){
        window_sum+=arr[i];
    }
    max_sum = window_sum;
    //slide the window
    for(int i =k;i<s;i++){
        window_sum +=arr[i]-arr[i-k];
        max_sum = max(max_sum,window_sum);
    }
    return max_sum;
}

int main() {
    vector<int> arr = {3,9,8,19,73,74};
    int k = 3;
    int max_sum = maxSum(arr,k);
    cout<<"The maximum sum for sub array of "<<k<<" is "<<max_sum<<endl;
    return 0;
}