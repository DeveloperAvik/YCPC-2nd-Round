#include <bits/stdc++.h>
using namespace std;

class Disjoint
{
public:
    vector<int> par, size;

    Disjoint(int n)
    {
        par.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
        }
    }

    int find(int x)
    {
        if (x == par[x])
            return x;
        return par[x] = find(par[x]);
    }

    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x != y)
        {
            if (size[x] < size[y])
                swap(x, y);
            par[y] = x;
            size[x] += size[y];
            return true;
        }
        return false;
    }
};

int main()
{
    int n,m;
    cin >> n >> m;

    vector<pair<int, pair<int, int>>> e;
    for (int i = 0; i < m; i++)
    {
        int a,b,w;
        cin >> a>> b >> w;
        e.push_back({w, {a, b}});
    }

    sort(e.begin(), e.end());

    Disjoint dsu(n);
    int road = 0;
    long long cost = 0;

    for (int i = 0; i < m; i++)
    {
        int a = e[i].second.first;
        int b = e[i].second.second;
        int w = e[i].first;

        if (dsu.unite(a - 1, b - 1))
        {
            cost += w;
        }
        else
        {
            road++;
        }
    }

    int root = dsu.find(0);
    for (int i = 1; i < n; i++)
    {
        if (dsu.find(i) != root)
        {
            cout << "Not Possible" << endl;
            return 0;
        }
    }

    cout << road << " " << cost << endl;

    return 0;
}
