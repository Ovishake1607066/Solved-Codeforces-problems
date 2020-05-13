#include<iostream>
using namespace std;
int main()
{
    int n,p,q,i,j,a=1,b;
    int ara[1000];
    cin>>n>>p;
    for(i=0;i<p;i++)
    {
        cin>>ara[i];
    }
    cin>>q;
    for(i=p;i<p+q;i++)
    {
        cin>>ara[i];
    }
    for(i=1; ;i++)
    {
        b=0;
        for(j=0;j<p+q;j++)
        {
            if(ara[j]==a)
            {
                a++;
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<"Oh, my keyboard!";
            break;
        }
        if(a==n+1)
        {
            cout<<"I become the guy.";
            break;
        }
    }
}
