#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,c;
    cin>>n;
    if(n==0)
    {
        cout<<n<<endl;
        return 0;
    }
    n=n+1;
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
        cout<<n<<endl;
}
