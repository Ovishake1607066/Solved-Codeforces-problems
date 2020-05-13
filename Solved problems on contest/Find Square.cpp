#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    ll n,m,a=0,b=0;
    char c;
    cin>>n>>m;
    char cc[n][m];
    loop
    {
        loop2
        {
            cin>>c;
            cc[i][j]=c;
            if(c=='B')
                a++;
        }
    }
    a=(a/2)+1;
    loop
    {
        loop2
        {
            if(cc[i][j]=='B')
            b++;
            if(a==b)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }

        }
    }
}
