#include<bits/stdc++.h>

using namespace std;

int count_before_one(int n,int arr[]);

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<count_before_one(size,arr)<<endl;
    return 0;
}

int count_before_one(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i;
        }
    }
}