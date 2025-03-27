#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;  // n = number of elements, k = number of queries

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    while (k--) {
        long long x;
        cin >> x;

        int answer = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        cout << answer << "\n";
    }
    return 0;
}