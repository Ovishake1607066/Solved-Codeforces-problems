#include<bits/stdc++.h>
#define ll long long
using namespace std;
class c
{
public:
    ll c1,c2;
};
bool ValueCmp(c const & a, c const & b)
{
    return a.c1 < b.c1;
}
bool V(c const & a, c const & b)
{
    return a.c2 < b.c2;
}
int main()
{
    ll n,k,b,d,e,s=0;
    cin>>n>>k;
    c cc[n];
    ll a[n],a1[n];
    for(ll i=0; i<n; i++)
    {
        cin>>b;
        a[i]=b;
        cc[i].c1=b;
    }
    for(ll i=0; i<n; i++)
    {
        cin>>b;
        cc[i].c2=b;
    }
    sort(cc,cc+n,ValueCmp);
    for(ll i=0; i<n; i++)
    {
        ll low=0,high=n-1;
        s=0;
        //cout<<i<<"            aa "<<endl;
           while(low<=high)
        {
            ll middle = (low+high)/2;
            if(cc[middle].c1 == a[i])
                {
                    //cout<<cc[middle].c1<<endl;
                    if(middle)
                    sort(cc,cc+middle,V);
                    //cout<<endl;
                    for(ll j=0;j<=k && middle>=0;j++)
                    {
                        s=s+cc[middle].c2;
                        //cout<<cc[middle].c2<<endl;
                        middle--;
                    }
                    cout<<s<<" ";
                    //cout<<endl;
                    sort(cc,cc+n,ValueCmp);
                    break;
                }
            else if (cc[middle].c1 > a[i])
                high = middle - 1;
            else
                low = middle + 1;
        }
    }
}
