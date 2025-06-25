#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int k ;
    cin>>k;
    vector<int> arr(n-1);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int ind =0;
    int ind2 =0;
         
    for(int i =0;i<n;i++){
        if(arr[i]==k){
            ind = i;

            break;
        }
    }
    for(int i = k+1;i<n;i++){
        if(arr[i] ==k){
            ind2= i;
            break;
        }
    }
    
   cout<<ind<<" "<<ind2;

    

}
