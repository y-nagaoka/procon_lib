#include <bits/stdc++.h>
using namespace std;

// vectorのindexを返す
template <typename T>
int upperbound(vector<T> V, T key) {
  int N = V.size();
  int ok = N;
  int ng = -1;
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) >> 1;
    if (V[mid] >= key) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  return ok;
}

int main() {
  vector<int> v = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
  for (int i = 0; i < 7; ++i) {
    int k = upperbound(v, i);

    cout << i << ", " << k << endl;
  }

  return 0;
}