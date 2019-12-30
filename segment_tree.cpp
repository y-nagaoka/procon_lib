
int dat[30 * MX + 5];
int n;
void init(int n_) {
  n = 1;
  while (n < n_ + 1) {
    n *= 2;
  }
  for (int i = 0; i < 2 * n - 1; ++i) dat[i] = INF;
}
void update(int k, int a) {
  k += n - 1;
  dat[k] = a;

  while (k > 0) {
    k = (k - 1) / 2;
    dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
  }
}

// [a,b)の最小値を求める
int query(int a, int b, int k, int l, int r) {
  if (r <= a || b <= l) return INF;

  if (a <= l && r <= b)
    return dat[k];
  else {
    int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
    int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
    return min(vl, vr);
  }
}