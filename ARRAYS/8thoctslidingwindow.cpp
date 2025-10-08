#include <iostream>
using namespace std;
int sliding(vector<int> &arr,int &k){
    int s = arr.size();
    int maxsum=0,window_sum=0;
    //calculate the sum of the first window
    for(int i=0;i<k;i++){
        window_sum +=arr[i]; 
    }
    maxsum = window_sum;
    //then slide the window add next element and remove the next element
    for(int i =k;i<s;i++){
        window_sum +=arr[i]-arr[i-k];
        maxsum = max(maxsum,window_sum);
    }
    return maxsum;
}

int main() {
    vector<int> arr = {3,8,21,38,82,81};
    int k =3;
    cout<<"Largest sum with length "<<k<<" is "<<sliding(arr,k)<<endl;
    return 0;
}