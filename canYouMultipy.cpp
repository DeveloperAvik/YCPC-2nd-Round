#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int res = (a % 100) * (b % 100) % 100;
        cout << res << endl;
    }
    return 0;
}