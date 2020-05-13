#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,i,j,a,b,c=0;
    cin>>n;
    int ara[n];
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=n;i++)
    {
        a=ara[i];
        b=ara[a];
        if(ara[b]==i)
        {
            cout<<"YES";
            c=1;
            break;
        }
    }
    if(c==0)
        cout<<"NO";
}
