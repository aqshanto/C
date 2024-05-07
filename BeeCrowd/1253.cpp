#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin>>test;
    string str;
    int num;
    for(int i=0;i<test;i++){
        cin>>str>>num;
        for(int i=0;i<str.size();i++){
            char ch;
            if(((int)str[i]-num)<65){
                ch='z'-(num-(str[i]-'a'+1));
            }else{
                ch=str[i]-num;
            }
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}