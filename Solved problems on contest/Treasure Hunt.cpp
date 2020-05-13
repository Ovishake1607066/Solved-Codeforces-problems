#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,l1,l2,l3,b,c1=0,c2=0,c3=0,d,c4=0,c5=0,c6=0;
    cin>>n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    l1=s1.size();
    if(n>=l1)
    {
        cout<<"Draw"<<endl;
        return 0;
    }
    ll a1[1000]={0},a2[1000]={0},a3[1000]={1000};
    for(ll i=0;i<l1;i++)
    {
        a1[int(s1[i])]++;
        a2[int(s2[i])]++;
        a3[int(s3[i])]++;
    }
    for(ll i=65;i<123;i++)
    {
        if(a1[i]>c1)
            c1=a1[i];
        if(a2[i]>c2)
            c2=a2[i];
        if(a3[i]>c3)
            c3=a3[i];
    }
    //cout<<c1<<c2<<c3<<endl;
    for(ll i=0;i<n;i++)
    {
        if(c1==l1)
            {
                c1--;
                c4=1;
            }
        else
            c1++;
        if(c2==l1)
            {
                c2--;
                c5=1;
            }
        else
            c2++;
        if(c3==l1)
            {
                c3--;
                c6=1;
            }
        else
            c3++;

    }
    if(c4 && n>1)
        c1=l1;
    if(c5 && n>1)
        c2=l1;
    if(c6 && n>1)
        c3=l1;
     //cout<<c1<<c2<<c3<<endl;
    if(c1==c2 && c2==c3)
            {
                cout<<"Draw"<<endl;
                return 0;
            }
    if(c1>c2 && c1>c3)
            {
                cout<<"Kuro"<<endl;
                 return 0;
            }
    else if(c2>c1 && c2>c3)
            {
                cout<<"Shiro"<<endl;
                 return 0;
            }
    else if(c3>c1 && c3>c2)
            {
                cout<<"Katie"<<endl;
                 return 0;
            }
    else
            {
                cout<<"Draw"<<endl;
                 return 0;
            }
}
