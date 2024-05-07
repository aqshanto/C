#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    while(!cin.eof()){
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            if((str[i]==' ' && str[i+1]==',') || (str[i]==' ' && str[i+1]=='.')){
                int j=i;
                while(j<str.size()){
                    str[j]=str[j+1];
                    j++;
                }
                i--;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}