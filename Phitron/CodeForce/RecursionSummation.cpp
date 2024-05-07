#include<bits/stdc++.h>

using namespace std;

long long int sum(int arr[], int n,long long int total,int i){
    if(i==n-1){
        return arr[i];
    }
    total+=arr[i+1];
    return total;
}

int main(){
    int test;
    cin>>test;
    int arr[test];
    for(int i=0;i<test;i++){
        cin>>arr[i];
    }
    long long int ans=sum(arr,test,0,0);
    cout<<ans<<endl;
    return 0;
}