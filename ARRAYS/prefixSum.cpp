#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Step 1: Build prefix sum array
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Step 2: Query sums
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--) {
        int L, R;
        cout << "Enter L and R (0-based): ";
        cin >> L >> R;
        int sum = prefix[R] - (L > 0 ? prefix[L - 1] : 0);
        cout << "Sum from " << L << " to " << R << " = " << sum << endl;
    }

    return 0;
}
