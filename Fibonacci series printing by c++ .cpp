#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  a=0,b=1,sum,n;
    cout<<"Enter the number you want to print the fibonacci series : "<<endl;
    cin>>n;
    int p=a,q=b;
    cout<<p<<" "<<q<<" ";
    for (int i = 2; i < n; ++i) {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}
