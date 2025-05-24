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
  ll X, Y, xcnt = 0, ycnt = 0, xycnt = 0;
  bool xflag = false, yflag = false;
  cin >> X >> Y;
  double ans;
  rep1(i, 6) {
    rep1(j, 6) {
      xflag = false;
      yflag = false;
      if (i + j >= X) {
        xcnt += 1;
        xflag = true;
      }
      if (abs(i - j) > Y) {
        ycnt++;
        yflag = true;
      }
      if (xflag && yflag) xycnt += 1;
    }
  }
  ans = (double)(xcnt + ycnt - xycnt) / 36;
  cout << fixed << setprecision(30) << ans << endl;
  return 0;
}