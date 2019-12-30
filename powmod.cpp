
const long long MOD = 1e9 + 7;
long long pow_mod(long long a, long long b) {
  long long ans = 1;
  long long mul = a;
  for (; b; mul = (mul * mul) % MOD) {
    if ((b & 1) == 1) ans = (ans * mul) % MOD;
    b >>= 1;
  }
  return ans;
}