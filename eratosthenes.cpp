/*
Sieve of Eratosthenes
*/
bool is_prime[1111111];
vector<int> P;
void Eratosthenes(const int N) {
  for (int i = 2; i <= N; i++) {
    is_prime[i] = true;  // initialize.
  }
  for (int i = 2; i <= N; i++) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= N; j += i) {
        is_prime[j] = false;
      }
      P.emplace_back(i);
    }
  }
}