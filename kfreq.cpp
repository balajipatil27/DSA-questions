#include <bits/stdc++.h>
using namespace std;

vector<int> funct(int arr[], int n,int k){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    vector<pair<int,int>> p;
    for(auto it : mpp){
        p.push_back({it.second,it.first});
    }

    vector<int> ans;
    sort(p.rbegin(),p.rend());

    for(int i=0;i<k;i++){
        ans.push_back(p[i].second);
    }
    return ans;

}

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     vector<int> result = funct(arr, n, k);
    for(int h=0;h<k;h++){
        cout<<result[h]<<" ";
    }
}