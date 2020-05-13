#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n1;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n1,a,b,c,d,s=1,x=0,y;
    cin>>n1;
    vector<ll>p;
    vector<ll>n;
    vector<ll>z;
    loop
    {
        cin>>a;
        if(a==0)
            z.push_back(i+1);
        else if(a>0)
            p.push_back(i+1);
        else
            n.push_back(i+1);
    }
    if(n.size()==1 && !z.size())
        {
            cout<<2<<" "<<n[0]<<endl;
            n.pop_back();
        }
    while(1)
    {
        if(z.size()<=1)
            break;
        cout<<1<<" "<<z[z.size()-1]<<" "<<z[z.size()-2]<<endl;
        z.pop_back();
    }
    if(p.size()==0 && n.size()==0)
        return 0;
    if(n.size()%2==0 && n.size())
    {
        if(n.size())
            while(1)
            {
                if(n.size()<=1)
                    break;
                //cout<<n.size()<<endl;
                cout<<1<<" "<<n[n.size()-1]<<" "<<n[n.size()-2]<<endl;
                if(n.size()<=2)
                    x=n[n.size()-2];
                n.pop_back();
            }
        if(z.size())
        {
            cout<<1<<" "<<n[n.size()-1]<<" "<<z[z.size()-1]<<endl;
            z.pop_back();
            if(z.size())
                {
                    cout<<2<<" "<<z[z.size()-1]<<endl;
                    z.pop_back();
                }
        }
    }
    else if(n.size()%2!=0 && n.size())
    {
        while(1)
        {
            if(n.size()<=1)
                break;
            cout<<1<<" "<<n[n.size()-1]<<" "<<n[n.size()-2]<<endl;
            if(n.size()<=2)
                x=n[n.size()-2];
            n.pop_back();
        }
        if(z.size())
        {
            cout<<1<<" "<<n[n.size()-1]<<" "<<z[z.size()-1]<<endl;
            z.pop_back();
            if(z.size())
                {
                    cout<<2<<" "<<z[z.size()-1]<<endl;
                    z.pop_back();
                }
        }
    }
    if(z.size())
        cout<<2<<" "<<z[0]<<endl;
    while(1)
    {
        if(p.size()<=1)
            break;
        cout<<1<<" "<<p[p.size()-1]<<" "<<p[p.size()-2]<<endl;
        p.pop_back();
    }
    if(x!=0)
        cout<<1<<" "<<p[p.size()-1]<<" "<<x<<endl;

}
