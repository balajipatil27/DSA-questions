#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int a, int k){
    int count=0;
    for(int i=0;i<a;i++){
        int curr_sum=0;
        for(int j=i;j<a;j++){
            curr_sum+=arr[j];
            if(curr_sum==k){
                count+=1;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int k;
        cin>>k;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        cout<<func(arr,a,k)<<endl; 
    }
    return 0;
}