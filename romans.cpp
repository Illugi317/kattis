#include <bits/stdc++.h>
#include <iomanip>
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
    double a,b,c,d,y;
    a = 1000.00000;
    b = 5280.00000/4854.00000;
    c = a * b; //1087.76266996;
    cin >> d;
    y = d * c;
    cout << fixed << setprecision(y) << y << endl;
    //cout << roundf(c * d) << endl;
}
