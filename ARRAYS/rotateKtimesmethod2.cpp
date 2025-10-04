#include <iostream>
using namespace std;

int main() {
    int n,k;
    cout<<"Enter the size of the arr: ";
    cin>>n;
    cout<<"Enter the number of rotation: ";
    cin>>k;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k=k%n;
    vector<int> rotated(n); 
    //copy of last k elements to the front
    for(int i=0;i<k;i++){
        rotated[i]=arr[n-k+i];
    }
    //copy the first n-k elements after that
    for(int i =k;i<n;i++){
        rotated[i]= arr[i-k];
    }
    for(auto n:rotated){
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
//uses more space