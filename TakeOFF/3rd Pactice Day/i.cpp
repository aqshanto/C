#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    string str;
    cin>>size>>str;
    int alpha[26]={0};
    for(int i=0;i<size;i++){
        alpha[str[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(alpha[i]>0){
            count++;
        }
    }
    for(int i=0;i<size;i++){
        
    }
    return 0;
}