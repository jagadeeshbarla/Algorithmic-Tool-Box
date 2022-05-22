#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int n, m;
	cin >> n >> m;
	if (n <= 1) 
	    cout<< n;
	else
	{
    	long long a = 0,b=1,temp=0;
    	vector<long> arr;
    	arr.push_back(0);
    	arr.push_back(1);
    	while (true)
    	{
    		temp = a;
    		a = b;
    		b = (temp + b) % m;
    		if (a==0 and b == 1) 
    			break;
    		else
    			arr.push_back(b);
    	}
    	a= n % (arr.size()-1);
    	cout<<arr[a];
	}
	return 0;
}
