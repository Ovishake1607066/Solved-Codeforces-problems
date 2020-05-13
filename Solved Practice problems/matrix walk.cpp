#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a,b,c=0,d,e=0,x=1,y=1,ma=0,mi=100000000;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(e==1)
            continue;
        if(a==b)
            e=1;
        if(i==0)
        {
            b=a;
            x=b;
        }
        else
        {
            if(c==1 && abs(a-b)!=1)
            {
                if(abs(a-b)!=d)
                    e=1;
            }
            if(abs(a-b)==1)
                {
                    if(a<mi || a>ma)
                        y++;
                }

            else
            {
                if(c==0)
                    d=abs(a-b);
                if(a>ma || a<mi)
                    {
                        x++;
                        if(a-b>0)
                            y=x+(a-(y*x));
                        else
                            y=x+(b-(y*x));
                    }
                c=1;
            }
            b=a;
        }
        if(a>ma)
            ma=a;
        if(a<mi)
            mi=a;
    }
    if(e==1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<endl;
    }
}
