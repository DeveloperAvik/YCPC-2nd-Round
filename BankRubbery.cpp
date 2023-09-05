#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> a(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    long long dp[N][2]; 

    dp[0][0] = 0;
    dp[0][1] = (a[0] == -1) ? 0 : a[0];

    for (int i = 1; i < N; i++)
    {
        if (a[i] == -1)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = 0; 
        }
        else
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = a[i] + ((i >= 2) ? max(dp[i - 2][0], dp[i - 2][1]) : 0);
        }
    }

    long long res = max(dp[N - 1][0], dp[N - 1][1]);
    cout << res << endl;

    return 0;
}
