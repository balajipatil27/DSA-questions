#include <bits/stdc++.h>
using namespace std;

int funct(int arr[], int n){
    int maxarea = 0;
    int l =0;
    int r = n-1;
    while(l<r){
        int hi = min(arr[l], arr[r]);
        int area = hi*(r-l);

        maxarea = max(maxarea, area);
        if(arr[l]<arr[r]){
            l++;
        }else{
            r--;
        }
    }
    return maxarea;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<funct(arr,n);
}