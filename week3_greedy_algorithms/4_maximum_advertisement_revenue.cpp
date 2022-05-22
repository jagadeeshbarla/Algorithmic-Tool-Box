#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,i;
    vector<long long int> v1,v2;
    long long int ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ans;
        v1.push_back(ans);
    }
    for(i=0;i<n;i++)
    {
        cin>>ans;
        v2.push_back(ans);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ans=0;
    for(i=0;i<n;i++)
        ans+=v1[i]*v2[i];
    cout<<ans;
}
