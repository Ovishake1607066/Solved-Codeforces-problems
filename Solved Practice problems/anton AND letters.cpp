#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    getline(cin,s);
    ll a=0,b,c=1;
    char s1[2000];
    for(ll i=0,j=0;i<s.size();i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]<='z' && s[i]>='a'))
        {
            s1[j]=s[i];
            j++;
            a=j;
        }
    }
    if(a==0)
        c=0;
    s1[a]='\0';
    sort(s1,s1+a);
    char ch=s1[0];
    for(ll i=1;i<a;i++)
    {
        if(s1[i]==ch)
            continue;
        else
            c++;
        ch=s1[i];
    }
    cout<<c<<endl;
}
