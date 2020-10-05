#include<iostream>
#include<bits/stdc++.h>

/*
In this we are not going to take 2221 and 1222 as diffrent we will be taking it as the same and we will doing this in this
Took 3 hours for me to do this one.

*/

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int goal;
    cin>>goal;
    int c[n+1][goal+1]= {0};
    for(int i=0;i<n+1;i++){
        for(int j=0;j<=goal;j++){
            if(i == 0)
                c[i][j] = 0;
            else if(j==0)
                c[i][j] = 1;
            else if(arr[i-1] <= j)
                c[i][j] = c[i-1][j]+c[i][j-arr[i-1]];
            else
                c[i][j] = c[i-1][j];
            cout<<" "<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<c[n][goal];

    return 0;
}