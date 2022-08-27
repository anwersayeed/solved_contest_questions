#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    
    int n = s.length();
    
    n = (n+1)/2;
    
    n--;
    
    cout<<s[n]<<endl;
}
