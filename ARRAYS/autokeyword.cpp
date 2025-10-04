#include <iostream>
using namespace std;

int main() {
    vector<int> myarr={9,4,98,47,74,44,28};
    for(auto num: myarr){ 
        //Here the compiler already knows the num is of type int (from the vector integer)
        cout<<num<<" ";
    }
    return 0;
}