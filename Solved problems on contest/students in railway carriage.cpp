#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,c=0,d=0,e=0,m;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            e=2;
            d=0;
            if(a>=b)
                m=0;
            else
                m=1;
            while(s[i]=='.')
                {
                    if(m==0)
                    {
                        if(e%2==0)
                            {
                                if(a>0)
                                {
                                    a--;
                                    c++;
                                }
                            }
                        else
                        {
                            if(b>0)
                            {
                                b--;
                                c++;
                            }
                        }
                    }
                    else
                    {
                        if(e%2==0)
                            {
                                if(b>0)
                                {
                                    b--;
                                    c++;
                                }
                            }
                        else
                        {
                            if(a>0)
                            {
                                a--;
                                c++;
                            }
                        }
                    }
                    e++;
                    i++;
                }
        }
    }
    cout<<c<<endl;
}
