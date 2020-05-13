#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0,k=1;i<n;i++,k++)
    {
        for(j=0;j<n;j++)
        {
            if(k==a[j])
            {
                cout<<j+1<<" ";
                break;
            }
        }
    }
}
