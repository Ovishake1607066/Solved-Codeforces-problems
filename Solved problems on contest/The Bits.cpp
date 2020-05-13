#include<bits/stdc++.h>
#define ll long long
#define loop for( ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll a=0,b=0,c=0,d=0,e;
    loop
    {
        if(s1[i]=='0')
            a++;
        else
            b++;
        if(s1[i]=='0' && s2[i]=='0')
            c++;
        else if(s1[i]=='1'&& s2[i]=='0')
            d++;
    }
    e=b*c+d*a-c*d;
    cout<<e<<endl;
}
