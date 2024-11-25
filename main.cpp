#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N, M;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> M;
  A = vl(N);
  for (auto&& a : A) cin >> a;

  sort(A.begin(), A.end());

  ll p = 0;
  ll q = N - 1;
  ll ans = 0;
  while (p < q) {
    if (A[p] + A[q] >= M) {
      ++ans;
      ++p;
      --q;
    } else {
      ++p;
    }
  }

  cout << ans;

  return 0;
}