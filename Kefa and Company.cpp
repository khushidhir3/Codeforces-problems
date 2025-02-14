#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> friends(n);
    for (int i = 0; i < n; ++i) {
        cin >> friends[i].first >> friends[i].second;
    }

    sort(friends.begin(), friends.end());

    long long maxff = 0;  
    long long current = 0;  
    int left = 0;

    for (int right = 0; right < n; ++right) {
        current += friends[right].second;

        while (friends[right].first - friends[left].first >= d) {
            current -= friends[left].second;
            left++;
        }

        maxff = max(maxff, current);
    }

    cout << maxff << endl;
    return 0;
}
