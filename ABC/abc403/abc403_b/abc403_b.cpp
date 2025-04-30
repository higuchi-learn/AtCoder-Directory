#include <bits/stdc++.h>

#include <atcoder/dsu>
#include <cstdio>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep0(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i <= (n); i++)
#define all(v) v.begin(), v.end()

int main() {
  string T, U;
  cin >> T >> U;
  string T2 = T;
  int Tsize = T.size();
  int Usize = U.size();
  int i = 0;
  while (true) {
    T2 = T;
    T2.replace(i, U.size(), U);
    for (int i = 0; i < T.size(); i++) {
      if (T[i] == '?') continue;
      if (T[i] != T2[i]) break;
      if (i == T.size()) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    i += 1;
    if (i+U.size()> T.size()) break;
  }
  cout << "No" << endl;
}