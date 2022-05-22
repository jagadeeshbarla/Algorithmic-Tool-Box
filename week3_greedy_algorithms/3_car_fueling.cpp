#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int d,i,ans_co,m,n,curr_dis=0,curr_cap;
    vector<long long int> v;
    cin>>d;
    cin>>m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ans_co;
        v.push_back(ans_co);
    }
    i=0;
    ans_co=0;
    curr_cap=m;
    while(curr_dis<=d)
    {
        if(v[i]-curr_dis<=curr_cap && i<n)
        {
            curr_cap=curr_cap-(v[i]-curr_dis);
            curr_dis=v[i];
            i++;
            if(curr_dis+curr_cap>=d)
            {
                cout<<ans_co;
                return 0;
            }
            else if(curr_dis+m>=d)
            {
                cout<<ans_co+1;
                return 0;
            }
            else if(curr_cap<v[i]-curr_dis && i<n)
            {
                ans_co++;
                curr_cap=m;
            }
        }
        else
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<ans_co;
    return 0;
}
