#include<bits/stdc++.h>

using namespace std;

int main(){
    string fail,num;
    while(1){
        cin>>fail>>num;
        if(fail.compare("0")==0 && num.compare("0")==0){
            break;
        }
        for(int i=0;i<num.size();i++){
            if(num[i]==fail[0]){
                int j=i;
                while(j<=num.size()){
                    num[j]=num[j+1];
                    j++;
                }
                i--;
            }
        }
        int arr[num.size()];
        for(int i=0;i<num.size()-1;i++){
            arr[i]=num[i]-48;
        }
        for(int i=0;i<num.size()-1;i++){
            if(arr[0]==0){
                while(i<num.size()-2){
                    if(arr[i]==0){
                        i++;
                        continue;
                    }
                }
            }
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}