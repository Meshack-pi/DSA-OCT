#include <iostream>
using namespace std;

double maximumAverage(vector<int> arr, int k, int n) {
    int window_sum = 0, maximumSum = 0;
    // find the sum of the first window
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    maximumSum = window_sum;
    // slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        maximumSum = max(window_sum, maximumSum);
    }
    // Ensure double division
    double maxAverage = static_cast<double>(maximumSum) / k;
    //use of static_cast
    return maxAverage;
}

int main() {
    int n; //size of the array
    cout<<"What is the size of the array: ";
    cin>>n;
    vector<int> arr(n); //array of length n
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k; //size of the sub array
    //our task is to find the maximum average of any contiguous subarrya of size k
    cout<<"Enter the size of the subarray: ";
    cin>>k;
    cout<<"The maximum sum of the subaray of size "<<k<<" is: "<<maximumAverage(arr,k,n)<<endl;
    return 0;
}