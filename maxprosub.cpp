#include<bits/stdc++.h>
using namespace std;

int maxpro(int arr[], int n){
    int maxprod=INT_MIN;
    for(int i=0;i<n;i++){
        int curr_pro=arr[i];
        maxprod=max(maxprod,curr_pro);
        for(int j=i+1;j<n;j++){
            curr_pro=arr[j]*curr_pro;
            maxprod=max(maxprod,curr_pro);
        }
    }
    return maxprod;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        cout<<maxpro(arr,n)<<endl;
      }
    return 0;

}