#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int goal;
    cin>>goal;
    int c[goal+1]={0};
    c[0] = 1;
    for(int i=1;i<=goal;i++){
        for(int j=0;j<n;j++){
            if(i >=arr[j]){
                c[i] += c[i-arr[j]];
                cout<<c[i]<<" <- Value of c[i] at i and j->"<<i<<" "<<j<<"\n";
            }
        }
    }
    cout<<c[goal];
    for(int i =0;i<goal+1;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}