#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long int n,m1=-1,m2=-1,mi1,mi2,total=0,t1,t2;
    vector<int>res;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        total += ar[i];


        if(m1<ar[i])
        {
            m1 = ar[i];
            mi1 = i;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(m2<ar[i] && i!=mi1)
        {
            m2 = ar[i];
            mi2 = i;
        }
    }

    for(int i=0;i<n;i++)
    {
        t1 = total - ar[i];

        if(t1%2==1)continue;
        t2 = t1/2;

        if(i!=mi1 && t2==ar[mi1])
        {
           res.push_back(i+1);
        }
        else if(i!=mi2 && t2==ar[mi2])
        {
            res.push_back(i+1);
        }
    }
    cout<<m1<<endl<<m2<<endl;
    cout<<res.size()<<endl;;

    if(res.size())
    {
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
    }


}
