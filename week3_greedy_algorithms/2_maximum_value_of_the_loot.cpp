#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int value,weight;
};
bool myfun(struct node a,struct node b)
{
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}
int main()
{
    long long int n,i,value,weight,max_cap;
    double ans=0;
    cin>>n>>max_cap;
    vector<struct node> v;
    for(i=0;i<n;i++)
    {
        cin>>value;
        cin>>weight;
        v.push_back({value,weight});
    }
    sort(v.begin(),v.end(),myfun);
    for(i=0;i<n;i++)
    {
        if(v[i].weight<=max_cap)
        {
            max_cap-=v[i].weight;
            ans+=v[i].value;
        }
        else
        {
            ans=ans+(((double)max_cap/(double)v[i].weight)*v[i].value);
            break;
        }
    }
    cout.precision(10);
    cout<<ans;
    return 0;
}
