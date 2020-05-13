#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,a,b,d,e;
    cin>>n>>k;
    char c[4][n],ch;
    for(ll i=0; i<4; i++)
        for(ll j=0; j<n; j++)
            c[i][j]='.';
    e=(4*n)-(n+n+2+2);
    if(k>e)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    a=ceil(n/2);
    d=1;
    if(k%2==0 && k)
    {
        c[1][a]='#';
        c[2][a]='#';
        d=2;
    }
    else if(k%2==1)
        c[1][a]='#';
    b=0;
    for(ll i=1,j=1,l=1; i<=k-d; i++)
    {
        if(a+j>=n-1)
        {
            if(b==0)
            {
                c[2][a+l]='#';
                b=1;
            }
            else
            {
                c[2][a-l]='#';
                l++;
                b=0;
            }
        }
        else
        {
            if(b==0)
            {
                c[1][a+j]='#';
                b=1;
            }
            else
            {
                c[1][a-j]='#';
                j++;
                b=0;
            }
        }

    }
    cout<<"YES"<<endl;
    for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<n;j++)
        cout<<c[i][j];
        cout<<endl;
    }

}
