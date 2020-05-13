#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll d,c,t,a;
    cin>>t;
    while(t--)
    {
        cin>>d;
        a=(d*d)-(4*d);
        if(a<0)
        {
            cout<<"N"<<endl;
            continue;
        }
        printf("Y %0.9lf %0.9lf\n",(sqrt(a)+d)/2,d-((sqrt(a)+d)/2));
    }

}

