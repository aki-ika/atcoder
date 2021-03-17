#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define bit(n) (1LL<<(n))
#define itn int
#define vi vector<int>

signed main() {
  string a,b;
  cin >> a;
  cin >> b;
  if(a.length() > b.length()) {
    cout << a << endl;
  }else{
    cout << b << endl;
  }
}
