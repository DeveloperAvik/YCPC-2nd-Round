#include <bits/stdc++.h>

using namespace std;

bool isPossible(int floor[], int n, int dis, int c) {
    int count = 1;
    int prev = floor[0];

    for (int i = 1; i < n; i++) {
        if (floor[i] - prev >= dis) {
            count++;
            prev = floor[i];
        }
    }

    return count >= c;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, c;
        scanf("%d", &n);

        int floor[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &floor[i]);
        }

        scanf("%d", &c);

        sort(floor, floor + n);

        int left = 0;
        int right = floor[n - 1] - floor[0];
        int res = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isPossible(floor, n, mid, c)) {
                res = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        printf("%d\n", res);
    }

    
//     Power Of C
    
    return 0;
}
