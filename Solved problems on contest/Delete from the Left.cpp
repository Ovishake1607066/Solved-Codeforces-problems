
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s1,s2;
    ll l1,l2,a,b,c=0,d=0;
    cin>>s1>>s2;
    l1=s1.size();
    l2=s2.size();
    a=l1-1;
    b=l2-1;
    while(a>=0 && b>=0 && s1[a]==s2[b])
    {
        c+=2;
        a--;
        b--;
    }
    d=l1+l2-c;
    cout<<d<<endl;
}
