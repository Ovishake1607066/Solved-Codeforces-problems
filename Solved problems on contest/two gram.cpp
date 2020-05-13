#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b=0,d;
    char c3,c4;
    string s1,s2;
    cin>>n;
    cin>>s1;
    if(n==2)
    {
        cout<<s1<<endl;
        return 0;
    }
    for(ll i=0;i<n-1;i++)
    {
        char c1=s1[i],c2=s1[i+1];
        a=1;
        for(ll j=i+1;j<n-1;j++)
        {
            if(s1[j]==c1 && s1[j+1]==c2)
                a++;
        }
        if(a>b)
        {
            c3=c1;
            c4=c2;
            b=a;
        }
        //cout<<c1<<c2<<a<<endl;
    }
    cout<<c3<<c4<<endl;
}
