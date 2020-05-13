#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,ax,ay,bx,by,cx,cy,d;
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;
    if(bx<ax && cx>ax)
        cout<<"NO"<<endl;
    else if(by<ay && cy>ay)
        cout<<"NO"<<endl;
    else if(by>ay && cy<ay)
        cout<<"NO"<<endl;
    else if(bx>ax && cx<ax)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
