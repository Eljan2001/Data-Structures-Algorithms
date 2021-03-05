#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long n,N,q;
    long long x;
    long long a[1000000];
    scanf("%lld %lld",&n,&q);
    for (int i=0;i<n; i++)
    {
        scanf("%lld", &N);
        a[i]=N;
    }
    for (int i=0; i<q;i++)
    {
        scanf("%lld",&x);
        int ans=upper_bound(a,a+n,x)-lower_bound(a,a+n,x);
        cout<<ans<<endl;
    }
    return 0;
}