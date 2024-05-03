#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    string str1;
    str1[0]=str[3];
    str1[1]=str[4];
    str1[2]=str[5];
    str1[3]='\0';
    int ans=stoi(str1);
    cout<<ans<<endl;
    
}