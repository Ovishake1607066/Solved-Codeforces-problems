#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,m,a=0,b,c,d=0,e;
    string s1,s2;
    b=0,c=0;
    cin>>n>>m;
    cin>>s1>>s2;
    for(ll i=0,j=0;i<m;i++)
    {
        if(s2[i]==s1[j])
            {
                j++;
                a++;
            }
        else if(s1[j]=='*')
            {
                c=i-1;
                d=1;
                break;
            }
        else
        {
            //cout<<s2[j]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(ll i=m-1,j=n-1;i>=0;i--)
    {
        if(s2[i]==s1[j])
            {
                j--;
                a++;
            }
        else if(s1[j]=='*')
            {
                d=1;
                b=i+1;
                break;
            }
        else
        {
            //cout<<s2[i]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(d==0)
    {
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return 0;
    }
    if(b<c)
    {
        //cout<<b<<c<<endl;;
        cout<<"NO"<<endl;
        return 0;
    }
    if(a!=n-1 || n-m>1)
    {
        //cout<<a<<endl;
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
}
