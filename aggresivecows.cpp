#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> arr, int n, int m, int mid) {
    int cow = 1;
    int lp = arr[0];  // last placed position
    for (int i = 1; i < n; i++) {
        if (arr[i] - lp >= mid) {
            cow++;
            lp = arr[i];
        }
        if (cow == m) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    sort(arr.begin(), arr.end());  // Must sort stalls
    int n = arr.size();
    int m = 3;
    int st = *min_element(arr.begin(), arr.end());
    int end = *max_element(arr.begin(), arr.end());
    int ans = -1;
    
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (check(arr, n, m, mid)) {
            ans = mid;  // Update ans directly
            st = mid + 1;  // Try larger distance
        } else {
            end = mid - 1;
        }
    }
    cout << ans << endl;  // Outputs: 3
    return 0;
}
