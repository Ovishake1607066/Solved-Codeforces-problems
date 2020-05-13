#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b[100000],c=0,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        c=c+a;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    d=b[n-1]+b[n-2];
    if(d>=c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

