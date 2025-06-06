#include <bits/stdc++.h>
using namespace std;

int funct(int heights[], int n){
    int maxarea =0;
        int l =0;
        int r = n-1;
        while(l<r){
            int minh =min(heights[l], heights[r]);
            int area =minh*(r-l);

            maxarea = max(maxarea,area);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
    return maxarea;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int heights[n];
        for(int i=0;i<n;i++){
            cin>>heights[i];
        }
        cout<< funct(heights,n)<<endl;
    }
    
}