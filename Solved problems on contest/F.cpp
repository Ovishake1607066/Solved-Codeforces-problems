#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d ",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();


int main()
{

    string st;
    while(cin>>st)
    {
        vector<pair<ll,ll> > vp;
        ll i=0;
        ll x=0,y=1;
        stack<char> stk;
        stk.push('+');
        char s='+';
        while(i<st.size())
        {

            if(st[i]=='+' || st[i]=='-')
            {
                s=st[i];
                i++;
                continue;
            }
            if(st[i]==')')
            {
                stk.pop();
                i++;
                continue;
            }
            if(st[i]=='(')
            {
                stk.push(s);
                if(st[i+1]<='9' && st[i+1]>='0')
                {
                    s='+';
                }
                i++;
                continue;
            }
            //cout<<st[i]<<endl;
            ll a=0,b=0;


            while(st[i]>='0' && st[i]<='9')
            {
                a=a*10+(st[i]-'0');
                i++;
            }
            i++;
            while(st[i]>='0' && st[i]<='9')
            {
                b=b*10+(st[i]-'0');
                i++;
            }
            cout<<s<<" "<<a<<" "<<b<<endl;
            ll t=y*b;
            if(s==stk.top())
                x=x*b+a*(y);
            else
                x=x*b-a*y;
            y=t;
            cout<<x<<" "<<y<<endl;
        }
        ll g=__gcd(x,y);
        x/=g;
        y/=g;
        if(x*y<0)
        {
            x=-abs(x);
            y=abs(y);
        }
        if(x==0)
            cout<<"0/1\n";
        else cout<<x<<"/"<<y<<endl;
    }

}
