#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b=0,c=0,d=0,e=0;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        if(s[0]=='1')
                                {
                        cout<<"YES"<<endl;
                        return 0;
                    }
        else
                                {
                        cout<<"NO"<<endl;
                        return 0;
                    }
    }
    else if(n==2)
    {
        if(s[0]=='1' && s[1]=='1')
                                {
                        cout<<"NO"<<endl;
                        return 0;
                    }
        else if(s[0]=='0' && s[1]=='0')
                               {
                        cout<<"NO"<<endl;
                        return 0;
                    }
        else
                                {
                        cout<<"YES"<<endl;
                        return 0;
                    }
    }
    else
    {
        for(ll i=0; i<s.size(); i++)
        {
            //cout<<s[i]<<endl;
            if(s[i]=='1' && b==0)
            {
                b=1;
                c=0;
                if(i>1)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else if(b==1)
            {
                if(s[i]=='0')
                {
                    d++;
                    //cout<<d<<endl;
                    if(c!=0)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    if(d>2)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    if(s[i+1]=='1')
                        c=1;
                }
                else
                {
                    if(c!=1)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    d=0;
                    c=0;
                }
            }
        }
    }
    if(b==0 || d==2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
