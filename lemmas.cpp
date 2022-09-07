#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

vector<ll> pt, dsu, cost, v;
ll ans, sz, n;
set<ll> s;

ll find(ll n) {
    if (dsu[n] == n) return n;
    return dsu[n] = find(dsu[n]);
}

void merge(ll a, ll b) {
    ll x = find(a), y = find(b);

    if (x == y) {
        pt[b] = dsu[b] = a;
        ll mn = cost[a], res = a, cur = pt[a];

        while (cur != a) {
            if (mn > cost[cur]) {
                mn = cost[cur];
                res = cur;
            }
            cur = pt[cur];
        }

        pt[y] = dsu[y] = res;
        pt[res] = dsu[res] = res;
        return;
    }

    pt[b] = dsu[b] = a;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;

    pt = dsu = cost = v = vector<ll>(n);

    for (ll i = 0; i < n; i++) pt[i] = dsu[i] = i;
    for (ll i = 0; i < n; i++) cin >> v[i];
    for (ll i = 0; i < n; i++) cin >> cost[i];
    for (ll i = 0; i < n; i++) merge(v[i] - 1, i);

    for (ll i = 0; i < n; i++) {
        ll e = find(pt[i]);
        s.insert(e);
        if (s.size() == sz) continue;
        sz++;

        ans += cost[e];
    }

    cout << ans << '\n';
}
