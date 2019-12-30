
string runlength(string S) {
  int state = 0;
  int n = S.size();
  int cnt = 0;
  S += "|";
  string ans = "";
  rep(i, 0, n - 1) {
    if (state == 0) {
      cnt = 1;
      ans += S[i];
      if (S[i] == S[i + 1]) {
        state = 1;
        cnt++;
      } else {
        state = 0;
        ans += to_string(cnt);
      }
    } else if (state == 1) {
      if (S[i] == S[i + 1]) {
        cnt++;
      } else {
        state = 0;
        ans += to_string(cnt);
      }
    }
  };
  return ans;
}