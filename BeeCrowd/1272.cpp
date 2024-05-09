// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int test;
//     cin>>test;
//     cin.ignore();
//     string str;
//     for(int i=0;i<test;i++){
//         getline(cin,str);
//         string s1="0";
//         for(int i=0;i<str.size()-1;i++){
//             if(str[i]=='.' && str[i+1]<='z' && str[i+1]>='a'){
//                 s1=s1+str[i+1];
//             }
//         }
//         cout<<s1<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    cin.ignore();
    for(int t = 0; t < test; t++){
        string str;
        getline(cin, str);
        bool newWord = true;

        for(char c : str){
            if(isalpha(c)){
                if(newWord){
                    cout << c;
                    newWord = false;
                }
            } else {
                newWord = true;
            }
        }
        cout << endl;
    }
    return 0;
}