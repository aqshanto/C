#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    string str;
    cin>>size;
    cin.ignore();
    for(int i=0;i<size;i++){
        getline(cin,str);
        int arr[26]={0};
        for(int i=0;i<str.size();i++){
            if(str[i]<='z' && str[i]>='a')
                arr[str[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                count++;
            }
        }
        if(count==26){
            cout<<"frase completa"<<endl;
        }else if(count>=13){
            cout<<"frase quase completa"<<endl;
        }else{
            cout<<"frase mal elaborada"<<endl;
        }
    }
    return 0;
}