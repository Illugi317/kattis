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
int fact(int n) {
    if ((n==0)||(n==1))
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int t;
    cin >> t;
    rep(i,0,t){
        int a;
        cin >> a;
        cout << (fact(a) % 10) << endl;
    }

}
