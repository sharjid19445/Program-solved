#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the elements of array : "<<endl;
    cin>>n;
    int arr[n], l, i;
    cout<<"Enter Array Elements: \n";
    for(i=0; i<n; i++)
        cin>>arr[i];
    l = arr[0];
    for(i=1; i<n; i++)
    {
        if(l<arr[i])
            l = arr[i];
    }
    cout<<"The Largest Number is = "<<l<<endl;
}
