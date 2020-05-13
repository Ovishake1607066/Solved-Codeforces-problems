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
pair<ll,ll>p1;
pair<ll,ll>p2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,a=-100000,b=-100000,c=0,d=0,e=0,f=0,x,y,f1,f2,f3,f4;
        p1.first=1000000;
        p1.second=-1000000;
        p2.first=1000000;
        p2.second=-1000000;
        cin>>n;
        while(n--)
        {
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(f1==0)
            {
                if(x>=p1.first || x==a)
                    {
                        //p1.first=x;
                        //a=x;
                    }
                else
                     p1.first=x;


            }
            if(f2==0)
            {
                if(y<=p2.second || y==b)
                   {
                       //p2.second=y;
                      // b=y;
                   }
                    else
                        p2.second=y;

            }
            if(f3==0)
            {

                if(x<=p1.second || x==a)
                {
                    //p1.second=x;
                    //a=x;
                }
                else
                    p1.second=x;

            }
            if(f4==0)
            {

                if(y>=p1.first || y==b)
                {
                    //p2.first=y;
                    //b=y;
                }
                else
                    p2.first=y;

            }
            cout<<p1.first<<" "<<p1.second<<endl;
        cout<<p2.first<<" "<<p2.second<<endl;
            if(p1.first>p1.second)
                c=1;
            if(p2.first>p2.second)
                c=1;
                cout<<c<<endl;
        }
        cout<<p1.first<<" "<<p1.second<<endl;
        cout<<p2.first<<" "<<p2.second<<endl;
        if(c==1)
            cout<<0<<endl;
        else
        {
            cout<<1<<" "<<p1.first<<" "<<p2.first<<endl;
        }
    }
}

