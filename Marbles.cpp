#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;

    vector<long long> a(N);
    
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int t;
    cin >> t;

    vector<long long> res(N, 0);

    for (int i = 0; i < t; i++) {
        int a,b;
        long long x;
        cin >> a >> b >> x;

        res[a] += x;
        if (b + 1 < N) {
            res[b + 1] -= x;
        }
    }

    for (int i = 1; i < N; i++) {
        res[i] += res[i - 1];
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] + res[i] << " ";
    }

    cout << endl;

    return 0;
}

