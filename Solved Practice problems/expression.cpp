#include<iostream>
using namespace std;
int main()
{
    int a,b,c,s;
    cin>>a>>b>>c;
    s=a*b*c;
    if((a+b)*c>s)
        s=(a+b)*c;
    if(((a*b)+c)>s)
        s=(a*b)+c;
    if((a*(b+c))>s)
        s=a*(b+c);
    if((a*(b*c))>s)
        s=a*(b+c);
    if((a+b+c)>s)
        s=a+b+c;
    cout<<s;
}
