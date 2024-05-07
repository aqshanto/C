#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin>>test;
    cin.ignore();
    for(int j=0;j<test;j++){
        string s;
        getline(cin,s);
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')){
                s[i]=s[i]+3;
            }
        }
        for(int i=(s.size()/2);i<s.size();i++){
            s[i]=s[i]-1;
        }
        cout<<s<<endl;
    }
    return 0;
}