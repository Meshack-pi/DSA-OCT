#include <iostream>
using namespace std;
void second_smallest(vector<int> &arr,int &n){
    int smallest = INT_MAX,second_smallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i]<second_smallest && arr[i]!=smallest){
            second_smallest = arr[i];
        }
    }
    if(second_smallest==INT_MAX){
        cout<<"No second smallest number \n";
    }else{
        cout<<"Smallest element in the array is: "<<second_smallest<<endl;
    }
    cout<<"Smallest element is: "<<smallest<<endl;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" values"<<endl; //must enter n values
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    second_smallest(arr,n);
    return 0;
}