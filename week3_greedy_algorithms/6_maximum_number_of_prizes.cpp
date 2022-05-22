#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i=1;
    cin>>n;
    if(n==1 || n==2)
        cout<<1<<"\n"<<n;
    else
    {
        unordered_map<int,int> dict;
        while(n-i>=0)
        {
            if(dict.find(n-i)==dict.end())
            {
                dict.insert(make_pair(i,0));
                n=n-i;
            }
            i++;
        }
        vector<int> v;
        for(auto it=dict.begin();it!=dict.end();it++)
            v.push_back(it->first);
        sort(v.begin(),v.end());
        i=v.size()-1;
        v[i]=v[i]+n;
        cout<<i+1<<"\n";
        for(n=0;n<=i;n++)
            cout<<v[n]<<" ";
    }
    return 0;
}
