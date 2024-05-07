#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string ch;
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>ch;
        string dup;
        int size=ch.size();
        for(int i=size-1;i>=0;i--){
            if(ch[i]<='z' && ch[i]>='a'){
                dup=dup+ch[i];
            }
        }
        cout<<dup<<endl;
    }
    return 0;
}