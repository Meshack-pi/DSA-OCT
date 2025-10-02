#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,sum=0; //size of the array/number of elements and sum
    cout<<"Enter the number of elemnents you want: ";
    cin>>n;
    //must handle edge cases correctly
    if(n<=0){
        cout<<"You must enter a value greater than 0!"<<endl;
        return 0;
    }
    vector<int> arr(n);
    cout<<"Enter "<<n<<" values:"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"The sum of all elements in array arr is: "<<sum<<endl;
    return 0;
}