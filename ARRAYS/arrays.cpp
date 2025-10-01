#include <iostream>
using namespace std;
int main(){
    vector<int> integer_array;
    //populate the array with values using a for loop
    for(int i=0;i<5;i++){
        int x;
        cout<<"Enter the values for the array: ";
        cin>>x;
        integer_array.push_back(x);
    }
    cout<<"Data is now filled!\n";
    return 0;
}