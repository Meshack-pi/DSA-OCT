#include <iostream>
using namespace std;
void reverseArray(vector<int> &arr,int start,int end){
    while(start<end){
        swap(arr[end],arr[start]);
        start++;
        end--;
    }
}

int main() {
    int n,q; // size of array and number of rotation
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of rotation queris: ";
    cin>>q;
    vector<int> k(q); //rotate k times to the left k is an arry
    cout<<"Enter "<<q<<" elements: "<<endl;
    for(int i =0;i<q;i++){
        cin>>k[i];
    }
    for(int i=0;i<q;i++){
        k[i] = k[i]%n;

        if (k[i] == 0) {
            cout << "After rotating left by 0: ";
            for (auto num : arr) cout << num << " ";
            cout << endl;
            continue;
        }

        reverseArray(arr,0,k[i]-1);
        reverseArray(arr,k[i],n-1);
        reverseArray(arr,0,n-1);

        cout<<"After rotating left "<<k[i]<<" times"<<endl;
        for(auto i:arr) cout<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}