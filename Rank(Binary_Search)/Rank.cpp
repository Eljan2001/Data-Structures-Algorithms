#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
    int n,N,x;
    vector<int> v;
    scanf("%d",&n);
    for (int i=0; i<n;i++)
    {
        scanf("%d",&N);
        v.push_back(N);
    }
    scanf("%d", &x);
    int ans=upper_bound(v.begin(),v.end(),x,greater<int>())-v.begin();
    cout<<ans+1;
    return 0;
}