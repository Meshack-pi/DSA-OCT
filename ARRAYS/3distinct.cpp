#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n; //size of the array
    cout << "Enter size of array: ";
    cin >> n; //input

    vector<int> arr(n); //array of size n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];//insert elements
    //store elements in a sorted and unique manner
    set<int> s(arr.begin(),arr.end());

    // auto it = s.begin(); //this points to the first element in the set s
    set<int>::iterator it = s.begin(); // more formal way to write it
    //set<int> is the type of container
    //::iterator is the iterator type that belongs ot set<int>
    //get the smallest value in the set
    int first = *it;
    ++it;
    int second = *it;
    ++it;
    int third = *it;
    cout<<"Third smallest integer is: "<<third<<endl;
    return 0;
}