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

int main(){
    int x,y;
    cin >> x >> y;
    if ( x > 0 && y > 0){
        cout << 1 << endl;
    }
    if ( x > 0 && y < 0 ){
        cout << 4 << endl;
    }
    if ( x < 0 && y < 0){
        cout << 3 << endl;
    }
    if ( x < 0 && y > 0){
        cout << 2 << endl;
    }