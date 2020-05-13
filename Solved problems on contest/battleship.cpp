#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
    ll n,k,b=0,c1,d,row=0,cl=0,e=0,x=0,y=0,p,q,m,n2;
    cin>>n>>k;
    char c[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            cin>>c[i][j];
    }
    for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(c[i][j]=='.')
                {
                    p=i;
                    q=j;
                    e=0;
                    d=0;
                    b=0;
                    m=0;
                    n2=0;
                    while(c[p][q]=='.' && q<n)
                    {
                        e++;
                        q++;
                        if(e>=k)
                        {
                            b++;
                            e--;
                            break;
                        }
                    }
                    //cout<<e<<endl;
                    q=j;
                    //cout<<p<<q<<endl;
                    while(c[p][q]=='.' && q>=0)
                    {
                        m++;
                        q--;
                        if(m>=k)
                        {
                            b++;
                            m--;
                            break;
                        }
                    }
                    //cout<<b<<endl;
                    q=j;
                    while(c[p][q]=='.' && p<n)
                    {
                        d++;
                        p++;
                        if(d>=k)
                        {
                            b++;
                            d--;
                            break;
                        }
                    }
                    p=i;
                    while(c[p][q]=='.' && p>=0)
                    {
                        n2++;
                        p--;
                        if(n2>=k)
                        {
                            b++;
                            n2--;
                            break;
                        }
                    }
                    p=i;
                    //cout<<b<<endl;
                    ll v=m+e-1;
                    ll w=v-(((k-2)*2)+1);
                    if(w<0)
                        w=k-2;
                    b=b+k-2-w;
                    ll qq=n2+d-1;
                    ll ww=qq-(((k-2)*2)+1);
                    if(ww<0)
                        ww=k-2;
                    b=b+k-2-ww;
                    //cout<<n2<<d<<endl;
                    //cout<<v<<w<<qq<<ww<<endl;
                    if(b>=row)
                    {
                        row=b;
                        x=i;
                        y=j;
                    }
                    //cout<<b<<" "<<i+1<<" "<<j+1<<endl;
                }
            }
        }
        cout<<x+1<<" "<<y+1<<endl;
}
