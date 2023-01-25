#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int findans(int i,int j,vector<int>&v){
    int min=INT_MAX;
    for(int k=j;k<j+i;k++){
        if(v[k]<min){
            min=v[k];
        }
    }
    return min*i;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    int ans=0;
    if(n==1){
        cout<<v[0];
        return 0;
    }
    for(int i=1;i<=n;i++){
        int k;cin>>k;
        v.push_back(k);
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            int temp=findans(i,j,v);
            if(temp>ans){
                ans=temp;
            }
        }
    }
    cout<<ans;
}