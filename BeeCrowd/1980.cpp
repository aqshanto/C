//Method 01

#include<bits/stdc++.h>

using namespace std;

long long int fact(int n);

int main(){
    string str;
    while(1){
        // cin>>str;
        // string s="0";
        // if(str.compare(s)==0){
        //     break;
        // }
        // int size=str.size();
        int size;
        cin>>size;
        cout<<fact(size)<<endl;
    }
    return 0;
}

long long int fact(int n){
    long long int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}


//Method 02

// #include<bits/stdc++.h>

// using namespace std;


// int main(){
//     string str;
//     while(1){
//         cin>>str;
//         string s="0";
//         if(str.compare(s)==0){
//             break;
//         }
//         int size=str.size();
//         // int size;
//         // cin>>size;
//         long long int ans=1;
//         for(int i=1;i<=size;i++){
//             ans*=i;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }