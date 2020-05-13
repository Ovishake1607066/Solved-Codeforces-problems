#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string  s[100];
    s[0]="purple";
    s[1]="green";
    s[2]="blue";
    s[3]="orange";
    s[4]="red";
    s[5]="yellow";
    string s2[100];
    s2[0]="Power";
    s2[1]="Time";
    s2[2]="Space";
    s2[3]="Soul";
    s2[4]="Reality";
    s2[5]="Mind";
    ll n,a,b,c;
    string s1[100];
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>s1[i];
    cout<<6-n<<endl;
    for(ll i=0;i<6;i++)
    {
        a=0;
        for(ll j=0;j<n;j++)
        {
            if(s[i]==s1[j])
            {
                a=1;
                break;
            }
        }
        if(a==0)
        {
            cout<<s2[i]<<endl;
        }
    }

}
