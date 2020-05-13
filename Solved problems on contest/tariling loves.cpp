#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define MAX 40000
ll multiply(ll x, ll res[], ll res_size);
void factorial(ll n)
{
    ll res[MAX];
    char cc[MAX]
    res[0] = 1;
    ll res_size = 1;
    for (ll x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
    cout << "Factorial of given number is \n";
    for (ll i=res_size-1; i>=0; i--)
        cout << res[i];
    for (ll i=res_size-1; i>=0; i--)
        cc[i]=res[i];
    ll len = strlen(cc);
    ll i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    char res2[MAX];
    int index = 0;
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
    strev(res);
    return res;
}
}
ll multiply(ll x, ll res[], ll res_size)
{
    ll carry = 0;
    for (ll i=0; i<res_size; i++)
    {
        ll prod = res[i] * x + carry;


        res[i] = prod % 10;


        carry  = prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
int main()
{
    factorial(100);
    return 0;
}


