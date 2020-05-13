#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,s=0;
    cin>>a>>b;
    c=abs(a-b);
    d=c/2;
    e=c%2;
    for(i=1;i<=d;i++)
        s=s+i;
    s=s*2;
    if(e!=0)
        s=s+d+1;
    cout<<s;
}
