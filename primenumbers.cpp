#include<bits/stdc++.h>
using namespace std;

int isprime(int n){
    vector<bool> isprime(n,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            for(int j=i*i;j<n;j+=i){
                isprime[j]=false;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(isprime[i]==true){
            count++;
        }
    }
    return count;

}

int main(){
    int n ;
    cin>>n;
    cout<<isprime(n)<<endl;
}