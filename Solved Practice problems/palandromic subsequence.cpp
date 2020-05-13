#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[10000],ch;
    int i,j,l,k,co=0;
    cin>>c;
    l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]!=c[l-i])
            {
                co=1;
                break;
            }
    }
    if(co==0)
        cout<<c;
    else



}
