#include<iostream>
#include<map>
#include<vector>
using namespace std;
map<int,int>record;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;cin>>j;
        if(record.find(j)!=record.end()){
            record[j]++;
        }else{
            record.insert(pair<int,int>(j,1));
        }
    }
    int max=0;
    int res;
    for(auto it:record){
        if(it.second>max){
            max=it.second;
            res=it.first;
        }else{
            if(it.second==max){
                if(it.first<res){
                    res=it.first;
                }
            }
        }
    }
    cout<<res;  
}