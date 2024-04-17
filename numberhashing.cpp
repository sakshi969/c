#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_map<int, int> hash;

    for (int i = 0; i < n; ++i) {
        hash[arr[i]] += 1;
    }

    int number;
    cin >> number;
    cout << hash[number] << endl;

    return 0;
}