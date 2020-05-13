#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll h,w,a,b;
    cin>>h>>w;
    char c[h+10][w+10];
    for(ll i=1; i<=h; i++)
    {
        for(ll j=1; j<=w; j++)
            {
                cin>>c[i][j];
            }
    }
    if(h<3 || w<3)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(ll i=2; i<h; i++)
    {
        for(ll j=2; j<w; j++)
        {
            if(c[i][j]=='*' && c[i+1][j]=='*' && c[i][j+1]=='*' && c[i-1][j]=='*' && c[i][j-1]=='*')
            {
                for(ll k=i+1; k<=h; k++)
                {
                    if(c[k][j]=='*')
                        c[k][j]='.';
                    else
                        break;
                }
                for(ll k=i-1; k>=1; k--)
                {
                    if(c[k][j]=='*')
                        c[k][j]='.';
                    else
                        break;
                }
                for(ll k=j+1; k<=w; k++)
                {
                    if(c[i][k]=='*')
                        c[i][k]='.';
                    else
                        break;
                }
                for(ll k=j-1; k>=1; k--)
                {
                    if(c[i][k]=='*')
                        c[i][k]='.';
                    else
                        break;
                }
                c[i][j]='.';
                for(ll x=1; x<=h; x++)
                {
                        for(ll y=1; y<=w; y++)
                        {
                            if(c[x][y]=='*')
                            {
                                //cout<<x<<"   "<<y<<endl;
                                cout<<"NO"<<endl;
                                return 0;
                            }
                        }
                }
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}

