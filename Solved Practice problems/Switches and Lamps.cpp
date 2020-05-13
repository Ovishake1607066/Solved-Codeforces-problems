#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    ll a2[m]={0},b=0,c=0,d,e,j;
    for(ll i=0; i<n; i++)
        for(ll j=0; j<m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='1')
                a2[j]++;
            //cout<<i<<j<<endl;
        }
    for(ll i=0; i<n; i++)
    {
        b=0;
        e=0;
        for(j=0; j<m; j++)
        {
            if(a[i][j]=='1' && a2[j]>1)
                b=1;
            else if(a[i][j]=='0')
            {
                e++;
                continue;
            }
            else
                {
                    //cout<<i<<j<<endl;
                    b=0;
                    break;
                }
        }
        if(e==m)
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
        if(b==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
