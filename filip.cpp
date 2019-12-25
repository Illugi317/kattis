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
    int a, b, areversedNumber = 0,breversedNumber = 0, aremainder, bremainder;
    cin >> a >> b;
    while (a != 0) {
        aremainder = a % 10;
        areversedNumber = areversedNumber * 10 + aremainder;
        a /= 10;
    }
    while (b != 0) {
        bremainder = b % 10;
        breversedNumber = breversedNumber * 10 + bremainder;
        b /= 10;
    }
    
    if(areversedNumber > breversedNumber){
         cout << areversedNumber << endl;
    }
    else{
        cout << breversedNumber << endl;
    }
}

