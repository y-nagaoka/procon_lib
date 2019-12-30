// フェルマーの小定理
const long long MOD = 1e9 + 7;
long long modinv(long long a) {
  long long b = MOD - 2, r = 1;
  while (b) {
    if (b & 1) r = r * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return r;
}