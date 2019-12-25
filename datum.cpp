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
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; // okei illugi, ekki missa vitið nuna
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

/* Driver function to test above function */
int main()
{
    vector <string> ma;
    ma.pb("Monday");
    ma.pb("Tuesday");
    ma.pb("Wednesday");
    ma.pb("Thursday");
    ma.pb("Friday");
    ma.pb("Saturday");
    ma.pb("Sunday");
    int a,b;
    cin >> a >> b;
    int day = dayofweek(a, b, 2009);
    if (day == 0){
        cout << "Sunday" << endl;
    }
    else{
        cout << ma[day - 1] << endl;
    }

    return 0;
}
