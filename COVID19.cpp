#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
#define loop(x, n) for(long long x = 0; x < n; x++)
#define _input(arr, NN) loop(ii, NN)cin>>arr[ii];

using namespace std;

/*
Author: Harshit Singh(Codechef ID : masky1)
AC: Passed
*/

int main()
{
    int t;
    cin >> t;
    ios_base :: sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    while(t--)
    {
        int N;
        cin >> N;
        vector<int> levels;
        int count = 1;
        int arr[N];

        _input(arr, N);

        for(int n = 1; n < N; n++)
        {
            if(arr[n] - arr[n-1] <= 2)
                {
                    ++count;
            }
            else
                {
                    levels.push_back(count);
                    count = 1;
            }
        }

        levels.push_back(count);
        cout << *min_element(levels.begin(), levels.end()) << " " << *max_element(levels.begin(), levels.end()) << endl;
    }
    return 0;
}
