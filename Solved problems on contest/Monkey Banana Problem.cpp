#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gl=1;
ll a[200][101];
ll dp[200][100];
ll call(ll i,ll j,ll n)
{
    if(i>=0 && i<2*n-1 && j>=0 && j<n)
    {
        if(i<n && j>i)
            return 0;
        if(i>=n && j>=2*n-1-i)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        ll ret=0;
        ret=max(ret,call(i+1,j,n)+a[i][j]);
        if(i<n-1)
            ret=max(ret,call(i+1,j+1,n)+a[i][j]);
        else
            ret=max(ret,call(i+1,j-1,n)+a[i][j]);
        return dp[i][j]=ret;
    }
    else
        return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //memset(a,0,sizeof(a));
        for(ll i=0;i<2*n-1;i++)
        {
            if(i<=n-1)
            {
                for(ll j=0;j<=i;j++)
                    cin>>a[i][j];
            }
            else
            {
                for(ll j=0;j<2*n-1-i;j++)
                    cin>>a[i][j];
            }
            //cout<<i<<endl;
        }
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<gl++<<": "<<call(0,0,n)<<endl;
    }
}
