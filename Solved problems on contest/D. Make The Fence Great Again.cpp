#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b[n+10],c=0,d,e,f;
        loop
        {
            cin>>a[i];
            cin>>b[i];
        }
        for(ll i=0; i<n-1; i++)
        {
            ll s1=0,s2=0,s3=0,q1=0,q2=0,q3=0,p1=0,p2=0,p3=0;
            if(a[i]==a[i+1])
            {
                if(i-1>=0)
                {
                    if(a[i-1]==a[i]+1)
                    {
                        s1+=(b[i]*2);

                        q1=1;
                    }
                    else
                    {
                        s1+=(b[i]);

                        q2=1;
                    }
                    if(i-2>=0)
                    {
                        if(a[i-2]+2==a[i-1])
                        {
                            s3=b[i-1];
                        }
                    }
                }
                else
                {
                    s1+=(b[i]);

                    q2=1;
                }
                if(i+2<n)
                {
                    if(a[i+1]+1==a[i+2])
                    {
                        if((b[i+1]*2)<=b[i+2])
                           {
                               s2+=(b[i+1]*2);
                               //cout<<"x"<<endl;
                               p1=1;
                           }
                        else
                            {
                                s2+=b[i+1];
                                s2+=b[i+2];
                                p2=1;
                            }
                    }
                    else
                    {
                        s2+=b[i+1];
                        p3=1;
                    }
                }
                else
                {
                    s2+=b[i+1];

                    p3=1;
                }
            }
            if(s1<s2)
            {
                if(s3)
                {
                     c-=b[i-1];
                     a[i-1]-=1;
                }
                if(q1)
                {
                    a[i]+=2;
                }
                else
                    a[i]+=1;
                c+=s1;
            }
            else
            {
                if(p1)
                {
                    a[i+1]+=2;
                }
                if(p2)
                {
                                a[i+1]+=1;
                                a[i+2]+=1;
                }
                if(p3)
                {
                    a[i+1]+=1;
                }
                c+=s2;
            }
            //cout<<s1<<"   "<<s2<<endl;
            //cout<<c<<endl;
        }
        cout<<c<<endl;
    }

}

