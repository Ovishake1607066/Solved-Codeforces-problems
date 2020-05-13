#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,b,c=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(i==1)
        {
            c+=1;
        }
        else
        {
            if(i%2==0 || i%3==0)
            {
                c=c+1;
            }
        }

    }
}
