#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int smallestSubarray(vector<int> &arr,int S,int n){
    int start =0;
    int current_sum =0;
    int min_length = INT_MAX;
    //expand the window with end
    for(int end =0;end<n;end++){
        current_sum +=arr[end]; //including the new element

        //we shrink while condition is satisfied
        while(current_sum>=S){
            min_length = min(min_length,end-start+1);
            //shrink from the left
            current_sum -= arr[start];
            start++;
        }
    }
    return (min_length == INT_MAX)?0:min_length;
}

int main() {
    int S; //sum of the subarray
    cout<<"Enter the target sum of subarray: ";
    cin>>S;
    int n;//size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The minimum lenght of subarray with sum "<<S<<" is: "<<smallestSubarray(arr,S,n)<<endl;
    return 0;
}