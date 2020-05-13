#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,a,b,c;
        string s,s2;
        cin>>n;
        if(n>=3)
        {
            cin>>s;
            cout<<"YES"<<endl<<2<<endl;
            cout<<s[0];
            s.erase(0,1);
            cout<<" "<<s<<endl;
        }
        else
        {
            cin>>s;
            if((ll)s[0]<(ll)s[1])
            {
                cout<<"YES"<<endl<<2<<endl;
                cout<<s[0]<<" "<<s[1]<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }

}

