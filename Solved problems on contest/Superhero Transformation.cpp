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
    ll a,b,c;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(ll i=0; i<s1.size(); i++)
    {
        if(s1[i]=='a'||s1[i]=='e'|| s1[i]=='i'||s1[i]=='o'|| s1[i]=='u')
        {
            if(s2[i]=='a'||s2[i]=='e'|| s2[i]=='i'||s2[i]=='o'|| s2[i]=='u')
                c=0;
            else
                c=1;
        }
        else
        {
            if(s2[i]=='a'||s2[i]=='e'|| s2[i]=='i'||s2[i]=='o'|| s2[i]=='u')
                c=1;
            else
                c=0;
        }
        if(c)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}

