//https://atcoder.jp/contests/abc139/tasks/abc139_b
#include<bits/stdc++.h>
using namespace std;

signed main() {
  //input
  int a,b;
  cin >> a >> b;

  //a+(a-1)*x
  a--;
  int n = 1;
  int ans = 0;
  while(n <  b) {
    n+=a;
    ans++;
  }

  //output
  cout << ans << endl;
     
}
