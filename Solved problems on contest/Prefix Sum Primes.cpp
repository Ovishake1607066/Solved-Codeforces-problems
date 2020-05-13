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
    ll n,c1=0,c2=0,b,d,e,f,s=0;
    cin>>n;
    loop
    {
        cin>>b;
        if(b%2==0)
            c2++;
        else
            c1++;
    }
    if(c2)
    {
        cout<<2<<" ";
        s+=2;
        c2--;
    }
    else
    {
        if(c1)
            {
                cout<<1<<" ";
                c1--;
                s+=1;
            }
        else
             return 0;
        if(c1)
            {
                cout<<1<<" ";
                c1--;
                s+=1;
            }
        else
            return 0;
    }
    while(c1!=0 || c2!=0)
    {
        //cout<<s<<"   "<<c1<<c2<<endl;
        if(s%2==0)
        {
            if(c1)
            {
                cout<<1<<" ";
                c1--;
                s+=1;
            }
            else if(c2)
            {
                s+=2;
                cout<<2<<" ";
                c2--;
            }
        }
        else
        {
            if(c2)
            {
                cout<<2<<" ";
                c2--;
                s+=2;
            }
            else if(c1)
            {
                cout<<1<<" ";
                c1--;
                s+=1;
            }
        }
    }
}

