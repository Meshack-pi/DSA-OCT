#include <iostream>
using namespace std;

int main() {
    int n;//size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //build the prefix array
    vector<int> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]= prefix[i-1]+ arr[i];
    }
    int L,R,q; //pair integrers
    cout<<"How many queries: ";
    cin>>q;
    int rangeSum = 0;
    while(q>0){
        cout<<"Enter value of L and R :";
        cin>>L>>R;
        if(L==0){
            rangeSum = prefix[R];
        }else{
            rangeSum= prefix[R]-prefix[L-1];
        }
        cout<<"Sum of values from "<<L<<"to "<<R<<"is"<<rangeSum<<endl;
        q--;
    }
    return 0;
}