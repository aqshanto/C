// // Fibonacci number print 

// #include<bits/stdc++.h>

// using namespace std;

// int fib(int n){
//     if(n==0){
//         return 0;
//     }else if(n==1){
//         return 1;
//     }else{
//         return fib(n-1)+fib(n-2);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//     return 0;
// }


//Fibonacci Series Print

#include<bits/stdc++.h>

using namespace std;

int fib(int n){
    int ans=0;
    if(n==0){
        ans = 0;
    }else if(n==1){
        ans = 1;
    }else{
        ans= fib(n-1)+fib(n-2);
        return ans;
    }
}


int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}