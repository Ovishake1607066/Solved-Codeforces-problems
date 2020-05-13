#include<iostream>
using namespace std;
int main()
{
    long long int n,k,i,j,a,b,c;
    cin>>n>>k;
    if(n%2==0)
        a=n/2;
    else
        a=(n/2)+1;
    if(k<=a)
    {
        for(i=1,j=1; ;i=i+2,j++)
        {
            if(k==j)
            {
                cout<<i;
                break;
            }
        }
    }
    else
    {
        for(i=2,j=a+1; ;i=i+2,j++)
        {
            if(k==j)
            {
                cout<<i;
                break;
            }
        }
    }
}
