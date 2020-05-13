#include<iostream>
using namespace std;
int main()
{
    long long int  n,a,b,c,d,s;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<-((n+1)/2);
    }
}
