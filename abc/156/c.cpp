//C - Rally 
//https://atcoder.jp/contests/abc156/tasks/abc156_c
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define rep1(i,n) for(ll i=1;i<ll(n);i++)
#define bit(n) (1LL<<(n))
#define itn int
#define vi vector<int>

signed main() {
  //input;
  int n;
  cin >> n;
  vi x(n);
  rep(i,n){
    cin >> x[i];
  }

  //calc
  int ans = 999999999;
  //制約からみて1から100までループする
  rep1(i,101) {
    int tmp = 0;
    rep(j,n) {
      //(X_i - n)^2+(X_i+1 - n)^2+......
      tmp += (x[j]-i)*(x[j]-i);
    }
    //一番小さいのがほしい
    ans = min(ans,tmp);
  }
  
  //output
  cout << ans << endl;
}
