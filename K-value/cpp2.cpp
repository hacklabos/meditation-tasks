/*
    @author Tvrtko Brekalo, https://www.facebook.com/tvrtko.brekalo
    @version 1.0 7/21/17
*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 11;
const int INF = (1LL << 31) - 1;

int n, m, k;
int arr[MAXN];
bool vis[MAXN];
set<int> cur, hold;

void load() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; ++i)
        scanf("%d", arr + i);
}

void add(int x) {
    hold.insert(x);
    cur.insert(x);

    if (cur.size() > k)
        cur.erase(*cur.rbegin());
}

void remove(int x) {
    hold.erase(x);
    if (cur.count(x))
        cur.insert(*hold.upper_bound(*cur.rbegin()));
    cur.erase(x);
}

//FOR DEBUG
void de() {
    for (auto it: hold)
        cout << it << ' ';
    cout << " ... ";
    for (auto it: cur)
        cout << it << ' ';
    cout << endl;
}

void solve() {
    for (int i = 0; i < m; ++i)
        add(arr[i]);

    // de();

    int p = m;
    int ans = *cur.rbegin();
    for (int i = 0; i < n - 1; ++i) {
        add(arr[p]), remove(arr[(p - m + n) % n]);
        ans = min(ans, *cur.rbegin());
        // de();

        p = (p + 1) % n;
    }

    printf("%d\n", ans);
}

int main() {

    load();
    solve();

    return 0;
}
