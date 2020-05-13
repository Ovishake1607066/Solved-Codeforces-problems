#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll a=0,b=0,c=0,x=0;
    for(ll i=0; i<s.size(); i++)
    {
        //cout<<s[i]<<b<<endl;
        if(s[i]=='n' && x==0)
        {
            a=1;
            continue;
        }
        if(a==1)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            {
                b=1;
                a=0;
                x=1;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                b=0;
                a=1;
                x=0;
            }

            continue;
        }
        if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')&& i==0)
        {
            a=1;
            x=0;
            continue;
        }
        if(b==0 || (s[0]!='a' && s[0]!='e' && s[0]!='i' && s[0]!='o' && s[0]!='u' && i==0))
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            {
                b=1;
                x=1;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else
        {
            //cout<<s[i]<<endl;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                a=1;
                x=0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        //cout<<s[i]<<endl;
    }
    if(s[s.size()-1]=='a' || s[s.size()-1]=='e' || s[s.size()-1]=='i' || s[s.size()-1]=='u' ||s[s.size()-1]=='o' || s[s.size()-1]=='n')
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
        cout<<"NO"<<endl;
}
