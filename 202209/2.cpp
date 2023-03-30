#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,base;
    vector<int>vi;
    cin>>n>>base;
    for(int i=1;i<=n;i++){
        int temp;cin>>temp;
        vi.push_back(temp);
    }
    sort(vi.begin(),vi.end());


}