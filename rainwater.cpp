#include <bits/stdc++.h>
using namespace std;

int fun(int arr[], int n){
    int res=0;
    int l =0;
    int r = n-1;

    int lmax= arr[l];
    int rmax = arr[r];

    while(l<r){
        if(lmax<rmax){
            l++;
            lmax = max(lmax, arr[l]);
            res+= lmax- arr[l];
        }
        else{
            r--;
            rmax = max(rmax, arr[r]);
            res+=rmax- arr[r];
                }
    }
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<fun(arr,n);
}