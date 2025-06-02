#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> arr;
    while(n>0){
        int digit = n%10;
        arr.push_back(digit);
        n=n/10;
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}