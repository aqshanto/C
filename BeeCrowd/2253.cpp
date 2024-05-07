#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(!cin.eof()){
        getline(cin,s);
        int length=s.size();
        if(length<=32 && length>=6){
            int up=0,low=0,num=0,check=0;
            for(int i=0;i<length;i++){
                if(s[i]>='a' && s[i]<='z'){
                    low++;
                }else if(s[i]>='A' && s[i]<='Z'){
                    up++;
                }else if(s[i]>='0' && s[i]<='9'){
                    num++;
                }else{
                    cout<<"Senha invalida."<<endl;
                    check=1;
                    break;
                }
            }
            if(check==0){
                if(low>0 && up>0 && num>0){
                    cout<<"Senha valida."<<endl;
                }else{
                    cout<<"Senha invalida."<<endl;                
                }
            }
        }else{
            cout<<"Senha invalida."<<endl;
        }
    }
    return 0;
}