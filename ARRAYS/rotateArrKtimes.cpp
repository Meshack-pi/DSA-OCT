#include <iostream>
using namespace std;
void reverseArray(vector<int> &arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n,k;//size of the array and number of rotations
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the number of rotations: ";
    cin>>k;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k=k%n; //handling cases where k is greater than n
    //start by reversing whole array
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    for(auto num:arr){
        cout<<num<<",";
    }
    cout<<endl;


    return 0;
}