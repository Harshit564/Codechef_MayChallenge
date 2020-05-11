#include<bits/stdc++.h>
using namespace std;

/*
Author: Harshit Singh(Codechef ID : masky1)
AC: Partial 15%
*/

int minSwaps(int arr[], int n)
{
	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}

	sort(arrPos, arrPos + n);
	vector<bool> vis(n, false);

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		if (vis[i] || arrPos[i].second == i)
			continue;
		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

			j = arrPos[j].second;
			cycle_size++;
		}
		if (cycle_size > 0)
		{
			ans += (cycle_size - 1);
		}
	}

	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];

	cout << minSwaps(arr, n)<<"\n";;
}
	return 0;
}
