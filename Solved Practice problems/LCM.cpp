#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll b,c=0,i;
    cin>>b;
    for( i=1; i*i<b; i++)
    {
        if(!(b%i))
        {
            c+=2;
        }
    }
    if(i*i==b)
        c++;
    cout<<c<<endl;
}
