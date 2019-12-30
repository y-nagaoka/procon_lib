// 素因数分解

template <typename T>
map<T, int> factorize(T x) {
  map<T, int> res;
  for (int i = 2; i * i <= x; i++) {
    while (x % i == 0) {
      x /= i;
      res[i]++;
    }
  }
  if (x != 1) res[x]++;
  return res;
}
