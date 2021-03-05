#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n,q;
    int x;
    int a[1000000];
    scanf("%lld %lld",&n,&q);
    for (int i=0;i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<q;i++)
    {
        scanf("%d",&x);
        if (binary_search(a,a+n,x))
        {
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    return 0;
}