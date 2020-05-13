#include<iostream>
using namespace std;
int main()
{
    long long int n,a,b,c=0,i,j,a1,b1,c1=0;
    cin>>n;
    for(i=0; ;i++)
    {
        a=n%10;
        n=n/10;
        if(a==4 || a==7)
        {
            c=c+1;
        }
        if(n==0)
        {
            for(j=0; ;j++)
            {
                a1=c%10;
                c=c/10;
                if(a1!=4 && a1!=7)
                {
                    c1=1;
                    break;
                }
                if(c==0)
                    break;
            }
            break;
        }
    }
    if(c1==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

