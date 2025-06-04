#include <bits/stdc++.h>
using namespace std;

int candy(int n,int c){
    int ans=0;
    for(int i=1;i<=n;i++){
        if(n/i<c){
            ans=i-1;
            break;
        }
    }
    int sol = n-(3*ans);
    return sol;
}

int main()
    {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int c;
            cin>>c;
            cout<<candy(n,c)<<endl;
    }
    return 0;
}