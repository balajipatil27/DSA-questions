#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(int arr[], int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second==2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        cout<<func(arr,n)<<endl;
        
    }
    return 0;
}