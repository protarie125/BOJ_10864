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
vl ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> M;
  ans = vl(N + 1, 0);

  while (0 < (M--)) {
    ll a, b;
    cin >> a >> b;

    ans[a] += 1;
    ans[b] += 1;
  }

  for (auto i = 1; i <= N; ++i) {
    cout << ans[i] << '\n';
  }

  return 0;
}