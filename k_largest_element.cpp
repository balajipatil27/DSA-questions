#include <bits/stdc++.h>
using namespace std;

int func(int arr[],int k, int size){
    sort(arr,arr+size);
    return arr[size-k];
}

int main(){
    int a;
    cin>>a;
    while(a--){
        int size;
        cin>>size;
        int k;
        cin>>k;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<func(arr,k,size)<<endl;

    }
    return 0;
}
