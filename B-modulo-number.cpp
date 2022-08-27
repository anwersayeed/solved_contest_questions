#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n; cin>>n;
    
    long long int m = n % 998244353;
    
    if(m >= 0)
        cout<<m<<endl;
    else{
        long long int t = n - m;
        
        m = 1*t - 998244353;
        
        cout<<-1*(m + -1*n)<<endl;
    }
}
