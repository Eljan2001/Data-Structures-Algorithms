#include <bits/stdc++.h> 
using namespace std; 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
  
    return gcd(b % a, a); 
} 
int divTermCount(int a, int b, int lcm, int num) 
{ 
    return num / a + num / b - num / lcm; 
} 
int findNthTerm(int a, int b, int n) 
{ 
    int low = 1, high = INT_MAX, mid; 
    int lcm = (a * b) / gcd(a, b); 
    while (low < high) { 
        mid = low + (high - low) / 2; 
        if (divTermCount(a, b, lcm, mid) < n) 
            low = mid + 1;
        else
            high = mid; 
    } 
  
    return low; 
} 
int main() 
{ 
    int a,b,n;
    cin>>a>>b>>n;
    cout << findNthTerm(a, b, n) << endl; 
    return 0; 
}