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
  // format維持用コメント
  ll N, K;
  ll ans = 1, limit = 1;
  cin >> N >> K;
  vector<ll> A(N);
  rep0(i, K) { limit *= 10; }
  limit -= 1;
  for (auto &i : A) cin >> i;
  rep0(i, N) {
    if (ans > limit/A[i]) ans = 1;
    else
      ans *= A[i];
  }
  cout << ans << endl;
  return 0;
}