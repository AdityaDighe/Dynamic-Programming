#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fib(int n, vector<int> &v)
{
    if(n<=1)
    {
        return n;
    }

    if(v[n]!=-1)
    {
        return v[n];
    }

    v[n]=fib(n-1,v)+fib(n-2,v);
    return v[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);

    for(int i=0;i<=n;i++)
    {
        v[i]=-1;
    }

    cout<<fib(n,v)<<endl;

    return 0;
}