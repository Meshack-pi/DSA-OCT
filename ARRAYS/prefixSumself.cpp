#include <iostream>
using namespace std;
//own implementation
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<int> prefix(n);
    //the prefix sum aray
    prefix[0]=arr[0];
    for(int i =1;i<n;i++){
        prefix[i]= prefix[i-1]+arr[i];
    }
    //output the prefix sum array
    for(auto i:prefix){
        cout<<i<<" ";
    }
    //range calculation
    int L,R; //left and right ranges
    cout<<"Enter left and right ranges: ";
    cin>>L>>R;
    int rangeSum;
    if(L==0){
        rangeSum = prefix[R];
    }else{
        rangeSum = prefix[R]-prefix[L-1];
    }
    cout<<" The range sum is :"<<rangeSum<<endl;
    return 0;
}