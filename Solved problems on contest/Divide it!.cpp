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
    ll q,n,a;
    cin>>q;
    while(q--)
    {
        cin>>n;
        ll c=0,x=1;
        while(1)
        {
            if(n==1)
                break;
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n=(2*n)/3;
            else if(n%5==0)
                n=(4*n)/5;
            else
            {
                cout<<-1<<endl;
                x=0;
                break;
            }
            c++;
        }
        if(x)
            cout<<c<<endl;
    }
}

