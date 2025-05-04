#include <bits/stdc++.h>

#include <atcoder/dsu>

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

int main() {}