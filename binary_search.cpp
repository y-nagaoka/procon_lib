// 簡易版二分探索
auto isOK = [&](int mid, int key) {
  return mid > key;  // for now
};
auto binary_search = [&](int key) {
  int ng = -1;
  int ok = INF;
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) >> 1;
    (isOK(mid, key) ? ok : ng) = mid;
  }
  return ok;
};