#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int comp(int a,int b)
{
    return a<b;
}
int comp1(long long a,long long b)
{
    return a<b;
}
int main()
{
    long long a,b;
    vector<int> v;
    vector<long long> t;
    for (int x=0; x<=100;x++)
    {
        for (int y=0; y<=100;y++)
        {
            if (pow(2,x)*pow(3,y)<pow(10,9))
            {
                v.push_back(pow(2,x)*pow(3,y));
            }
            else if (pow(2,x)*pow(3,y)>=pow(10,9) && pow(2,x)*pow(3,y)<=pow(10,18))
            {
                t.push_back(pow(2,x)*pow(3,y));
            }
        }
    }
    sort(v.begin(),v.end(),comp);
    
    sort(t.begin(),t.end(),comp1);
    
    while (cin>>a>>b)
    {
        if (a>=pow(10,9) && b>=pow(10,9))
        {
            cout<<upper_bound(t.begin(),t.end(),b) - upper_bound(t.begin(),t.end(),a-1)<<endl; 
        }
        else if (a<=pow(10,9) && b<=pow(10,9))
        {
            cout<<upper_bound(v.begin(),v.end(),b) - upper_bound(v.begin(),v.end(),a-1)<<endl; 
    
        }
        else if (a<=pow(10,9) && b>=pow(10,9))
        {
            long long counter1=upper_bound(t.begin(),t.end(),b) - upper_bound(t.begin(),t.end(),pow(10,9));
            int counter2=upper_bound(v.begin(),v.end(),pow(10,9))-upper_bound(v.begin(),v.end(),a-1);
            cout<<abs(counter1+counter2)<<endl;
        }
    }       
}