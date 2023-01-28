#include <iostream>
#include<vector>
using namespace std;

int main() {
    //input
    int n,m;
    cin>>n>>m;
    vector<int>ai(n+1);
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        ai[i]=temp;
    }
    //cal ci
    vector<int>ci;
    ci.push_back(1);
    for(int i=1;i<=n-1;i++){
        ci.push_back(ci[i-1]*ai[i]);
    }
    //cal bi
    vector<int>bi;
    bi.push_back(0);//Õ¼Î»·û
    for(int i=1;i<=n;i++){
        if(i==n){
            int temp=m;
            for(int j=1;j<n;j++){
                temp=temp-ci[j-1]*bi[j];
            }
            bi.push_back(temp/ci[n-1]);
            break;
        }
        unsigned long long int temp = m%(ci[i]);
        for(int j=1;j<i;j++){
            temp=temp-(ci[j-1]*bi[j]);
        }
        bi.push_back(temp/ci[i-1]);
    }
    for(int i=1;i<=n;i++){
        cout<<bi[i];
        if(i!=n){cout<<" ";}
    }
}
