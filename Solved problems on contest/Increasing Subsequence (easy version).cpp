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
deque<ll>v1;
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,a,b,c=0,d,e=0;
    cin>>n;
    string s="";
    loop
    {
        cin>>a;
        v1.push_back(a);
    }
    while(!(v1.empty()))
    {
        //cout<<v1[0]<<"     "<<v1[v1.size()-1]<<endl;
        ll aa=v1.front();
        ll bb= v1.back();
        if(aa<=bb)
        {
            //cout<<v1[0]<<endl;
            if(aa>=e)
            {
                s+='L';
                e=aa;
                v1.pop_front();
            }
            else if(bb>=e)
            {
                s+='R';
                e=bb;
                v1.pop_back();
            }
            else
                break;

            c++;
        }
        else
        {
            if(bb>=e)
            {
                s+='R';
                e=bb;
                v1.pop_back();
            }
            else if(aa>=e)
            {
                s+='L';
                e=aa;
                v1.pop_front();
            }
            else
                break;
            c++;
        }
    }
    cout<<s.size()<<endl;
    cout<<s<<endl;
}

