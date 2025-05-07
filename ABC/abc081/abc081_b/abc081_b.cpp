#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  // format維持用コメント
  // 変数の用意(初期化を忘れない！)
  ll N, ans = 0;
  // Nの入力
  cin >> N;
  // 大きさNの配列Aの用意
  vector<ll> A(N);
  // Aに値を入力
  for (int i = 0; i < N; i++) cin >> A[i];
  // 無限ループ
  while (true) {
    // A[0] ~ A[2]の各要素に対して操作を行う
    for (int i = 0; i < N; i++) {
      // もし当該要素が奇数なら、
      if (A[i] % 2 == 1) {
        // すぐに結果を返し、
        cout << ans << endl;
        // 実行を終了する
        return 0;
      }
      // 当該要素を÷2する
      A[i] = A[i] / 2;
      // A[2]（最後の要素）まで到達できたら、操作が行える回数が＋１
      if (i == 2) ans += 1;
    }
  }
}