#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int min(int a,int b){
    return (a>b)?b:a;
}
/*
This was a problem from the video lectures of errnichto
Learning about the dynamic programming.
*/
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    int c[row][col]={0};
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
            
            if(i ==0 && j==0){
                c[i][j] = arr[i][j];
            }
            else if(i==0){
                c[i][j] = arr[i][j]+c[i][j-1];
            }
            else if(j ==0){
                c[i][j] = arr[i][j]+c[i-1][j];
            }
        }
    }
    for(int i =1;i<row;i++){
        for(int j =1;j<col;j++){
            c[i][j] = arr[i][j]+min(c[i-1][j],c[i][j-1]);
        }
    }
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}