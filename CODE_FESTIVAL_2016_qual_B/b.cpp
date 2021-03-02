#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define bit(n) (1LL<<(n))
#define itn int
#define String string
#define vi vector<int>

signed main() {
  //input
  int n,a,b;
  cin >> n >> a >> b;
  string s;
  cin >> s;

  itn x = a + b;
  int y = 1;
  int z = 1;
  
  rep(i,n) {
    if(s[i] == 'a') {
      //a+b以下なら通過
      if(y <= x) {
	cout << "Yes" << endl;
	y++;
      }else{
	cout << "No" << endl;
      }
    }else if(s[i] == 'b') {
      //かつb以下なら通過
      if(y <= x and z <= b) {
        cout << "Yes" << endl;
        y++;
        z++;
      }else{
	cout << "No" << endl;
      }
    }else{
      //cは絶対No
      cout << "No" << endl;
    }
  }
}
