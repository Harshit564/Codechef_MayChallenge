#include<bits/stdc++.h>

using namespace std;

#define fri(x,n) for(i=x;i<n;i++)
#define frj(x,n) for(j=x;j<n;j++)
#define ll long long
#define boost ios::sync_with_stdio(NULL);cin.tie(0);
#define mod9 1000000007
#define endl "\n"
#define deb(x) cout <<#x<<" "<<x<<endl;
#define gcd(m,n) __gcd(m,n)
#define lcm(m,n) (m * n)/(__gcd(m,n))

/*
Author: Harshit Singh(Codechef ID : masky1)
AC: Passed
*/

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        long long count=0,i,n,q,c,j,tot = 0;
        int ccs = 0;
        cin>>n>>q;
        string s;
        cin>>s;
        long long qry[q];
        for(i=0;i<q;i++)
            cin>>qry[i];
        map<char,long long> mp;
        for(auto x:s)
        {
            ccs++;
            if(mp.count(x)==0)
                mp[x] = 1;

            else
                mp[x] += 1;
        }
        for(i=0;i<q;i++)
        {
            ll alts = i;
            for(auto it = mp.begin(); it != mp.end(); it++)
            {
                if(it->second>qry[i])
                {
                    count += it->second-qry[i];
                    alts++;
                }
            }
            //deb(alts);
            cout<<count<<endl;
            count = 0;
        }

    }
	return 0;
}
