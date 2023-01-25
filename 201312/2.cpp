#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>v;
    long int n=0;
    for(int i=0;i<=12;i++){
        if(s[i]!='-'){
            v.push_back(s[i]-'0');
        }
    }
    for(int i=0;i<=8;i++){
        n+=v[i]*(i+1);
    }
    n=n%11;
    if(n==10){
        if(s[12]=='X'){
            cout<<"Right"<<endl;
            return 0;
        }else{
            s[12]='X';
            cout<<s<<endl;
            return 0;
        }
    }
    else{
        if(n==v[9]){
        cout<<"Right"<<endl;
    }else{
        char c=n+'0';
        cout<<v[0]<<"-"<<v[1]<<v[2]<<v[3]<<"-"<<v[4]<<v[5]<<v[6]<<v[7]<<v[8]<<"-"<<c<<endl;
    }
    }
    return 0;
}