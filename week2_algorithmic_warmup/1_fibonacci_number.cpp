#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a=0,b=1,n;
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<n;
        return 0;
    }
    n--;
    while(n--)
    {
        ll c=a;
        a=b;
        b=a+c;
    }
    cout<<b;
    return 0;
}
