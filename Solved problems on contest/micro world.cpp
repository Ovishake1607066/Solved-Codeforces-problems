#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<ll>s;
    ll n,k,b=0,c=0;
    cin>>n>>k;
    ll a,ss,ss2;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    ss=s.size();
    set<ll>::iterator it,it2,it3,it4;
    it2=s.end();
    --it2;
    //cout<<*it2<<endl;
    for(it=s.begin();it!=it2;it++)
    {
        //cout<<*it<<endl;
        it3=++it;

        //cout<<*it3<<endl;
        if(*it3<=(k+*--it))
        {
            b++;
        }
            //cout<<b<<endl;
    }
    if(ss==1)
        cout<<n<<endl;
    else
        cout<<ss-b<<endl;
}
