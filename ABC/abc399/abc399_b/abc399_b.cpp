#include <bits/stdc++.h>

#include <atcoder/dsu>
#include <cstdio>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep0(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i <= (n); i++)
#define all(v) v.begin(), v.end()

ll GCD(ll A, ll B) {
  while (true) {
    if (A >= B) A = A % B;
    else
      B = B % A;
    if (A == 0 || B == 0) break;
  }
  if (A == 0) return B;
  return A;
}

ll LCM(ll A, ll B) { return A / GCD(A, B) * B; }

ll nCr(ll N, ll R) {
  if (R > N) return 0;
  if (R > N - R) R = N - R;
  ll res = 1;
  rep1(i, R) {
    res *= N - R + i;
    res /= i;
  }
  return res;
}

int main() {
  ll N, r = 1;
  cin >> N;
  vector<ll> P(N);
  vector<ll> ans(N);
  for (auto &i : P) cin >> i;
  for (auto &i : ans) i = 0;
  while (1) {
    ll Max = 0;
    rep0(i, N) {
      if (ans[i]) continue;
      Max = max(Max, P[i]);
    }
    if (Max == 0) break;
    ll count = 0;
    rep0(i, N) {
      if (P[i] == Max) {
        ans[i] = r;
        count += 1;
      }
    }
    r += count;
  }
  rep0(i, N) cout << ans[i] << "\n";
}