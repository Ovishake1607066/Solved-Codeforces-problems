#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,a,b,c,d;
    cin>>n>>m;
    char c1[n][m],c2,c3;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            cin>>c1[i][j];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            {
                if(c1[i][j]!='*')
                {
                    if(c1[i][j]=='.')
                        a=0;
                    else
                        a=c1[i][j]-48;
                    if(i+1<n)
                        if(c1[i+1][j]=='*')
                        a--;
                    if(i-1>=0)
                        if(c1[i-1][j]=='*')
                        a--;
                    if(j+1<m)
                        if(c1[i][j+1]=='*')
                        a--;
                    if(j-1>=0)
                        if(c1[i][j-1]=='*')
                        a--;
                    if(i+1<n && j+1 <m)
                        if(c1[i+1][j+1]=='*')
                        a--;
                    if(i+1<n && j-1 >=0)
                        if(c1[i+1][j-1]=='*')
                        a--;
                    if(i-1>=0 && j+1 <m)
                        if(c1[i-1][j+1]=='*')
                        a--;
                    if(i-1>=0 && j-1 >=0)
                        if(c1[i-1][j-1]=='*')
                        a--;
                        if(a!=0)
                        {
                            cout<<"NO"<<endl;
                            return 0;
                        }
                }
        }
    }
    cout<<"YES"<<endl;
}
