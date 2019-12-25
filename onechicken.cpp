#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i = (a); i < (b); ++i)
#define iter(it,c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)
#define pb push_back
#define fs first
#define sc second
#define MOD 1000000007
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

const int INF = ~(1<<31);
const double pi = acos(-1);
const double EPS = 1e-9;
// header ^
int main() {
    int n,m;
    cin >> n >> m;
    if(n < m){
        if (abs(m-n) == 1) {
            cout << "Dr. Chaz will have " << abs(n - m) << " piece of chicken left over!" << "\n";
            return 0;
        }
        cout << "Dr. Chaz will have" << " " << abs(n - m) << " pieces of chicken left over!" << "\n";

    }

    else if(m < n){
        if (abs(m-n) == 1) {
            cout << "Dr. Chaz needs" << " " << abs(n - m) << " more piece of chicken!" << "\n";
            return 0;
        }
        cout << "Dr. Chaz needs" << " " << abs(n - m) << " more pieces of chicken!" << "\n";
    }

}
