#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,q;
    cin>>n>>m>>q;
    string s1,s2;
    cin>>s1>>s2;
    ll a,b,c=0,c1=0,d,l;
    for(ll i=0;i<q;i++)
    {
        cin>>a>>b;
        c1=0;
        if(b-a+1<m || m>n)
        {
            cout<<0<<endl;
            //cout<<"hhh"<<endl;
            continue;
        }
        for(ll j=a-1,k=0;j<b;j++)
        {
            //cout<<s2[k]<<endl;
            c=0;
            if(s1[j]==s2[k])
            {
                c++;
                l=j+1;
                //cout<<"jjj"<<endl;
                for(j++,k++;j<b;j++)
                {
                    if(s1[j]==s2[k])
                        {
                            //cout<<s2[k]<<c<<endl;
                            c++;
                            k++;
                        }
                    else
                       {
                           k=0;
                           break;
                       }
                    if(c==m)
                    {
                        c1++;
                        k=0;
                        l=j+1;
                        break;
                    }
                }
                j=l;
            }
        }
        cout<<c1<<endl;
    }
}
