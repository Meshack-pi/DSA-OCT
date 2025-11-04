#include <iostream>
using namespace std;

int main() {
    int n;//size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: "<<endl; //only zeros and ones
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}