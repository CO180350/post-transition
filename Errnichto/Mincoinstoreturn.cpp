#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int min(int a,int b){
    return (a>b)?b:a;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int change;
    cin>>change;
    int c[change+1];
    for(int i =1 ;i<change+1;i++){
        c[i] = 1000;
    }
    c[0] = 0;
    for(int i =0;i<=change;i++){
        for(int j=0;j<n;j++){
            if(i >= arr[j])
                c[i] = min(c[i],c[i-arr[j]]+1);
        }
    }
    cout<<c[change];
    // for(int i =0;i<change+1;i++){
    //     cout<<c[i]<<" ";
    // }
    return 0;
}