#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define bit(n) (1LL<<(n))
#define itn int
#define vi vector<int>

signed main() {
  int h,m;
  cin >> h >> m;
  int now =  h*60+m;
  cout << 18*60-now << endl;
}
