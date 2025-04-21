#include <bits/stdc++.h>

#include <atcoder/dsu>
#include <cstdio>

#define rep0(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define all(v) v.begin(), v.end()

using namespace std;
using namespace atcoder;
using ll = long long;

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

int main()
{
  string S;
  cin >> S;
  for (int i = 0; i < S.length(); i++)
  {
    if (isupper(S[i]))
      cout << S[i];
  }
  cout << endl;
}