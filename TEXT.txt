/*
 solved by : Bashir Ahmed Sharjid
 28/8/2022
 */
#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REP2(i,a,b) for (int i = a; i <= b; i+=2)

using namespace std;

int main(){
    int row,col;
    cout<<"Enter the row and coloumn of array : "<<endl;
    cin>>row>>col;
    int arr[row][col],t[row][col];

    REP(i,1,row){
        REP(j,1,col){
            cin>>arr[i][j];
        }
    }
    REP(i,1,row) {
        REP(j,1,col) {
            t[i][j] = arr[i][j];
            arr[i][j] = arr[j][i];
            cout<<arr[i][j]<<" ";
            arr[i][j] = t[i][j];
        }
        cout<<endl;
    }
}
