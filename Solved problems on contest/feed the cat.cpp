#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int hh,mm,h,d,c,n,a,b,p,q,r;
    cin>>hh>>mm>>h>>d>>c>>n;
    float cst,cs1,cs2,cs3,cs4;
    if(hh>=20 && hh<=23)
    {
        if(h%n==0)
            cs1=h/n;
        else
            cs1=(h/n)+1;
        cs2=cs1*c*.8;
        printf("%.4f\n",cs2);

    }
    else
    {
        if(h%n==0)
            cs1=h/n;
        else
            cs1=(h/n)+1;
        cs2=cs1*c;
        b=60-mm;
        a=20-hh-1;
        p=(60*a)+b;
        h=h+p*d;
        if(h%n==0)
            cs3=h/n;
        else
            cs3=(h/n)+1;
        cs4=cs3*c*.8;
        if(cs2<=cs4)
            printf("%.4f\n",cs2);
        else
            printf("%.4f\n",cs4);
    }
}
