#include<iostream>
using namespace std;
int main(){
    int i, n;
    long long fact=1;
    cout<<"enter the number: ";
    cin>>n;
    for(i=1; i<=n; i=i+1)
    {
        fact=fact*i;
    }
    cout<<fact;
}