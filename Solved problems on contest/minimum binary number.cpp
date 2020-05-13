#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,c,d;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s<<endl;
        return 0;
    }
    while(1)
    {
        a=0;
        b=0;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='1')
            {
                a=1;
                for(ll j=i;j<n-1;j++)
                    s[j]=s[j+1];
                    n--;

            }
            for(ll i=0;i<n;i++)
                cout<<s[i];
                cout<<endl;
        }
        for(ll i=1;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                a=1;
                char cc=s[i];
                s[i]=s[i+1];
                s[i+1]=cc;
            }
        }
        cout<<s<<"       "<<endl;

        if(a==0)
        {
            for(ll i=0;i<n;i++)
                cout<<s[i];
            cout<<endl;
            return 0;
        }
    }
}
