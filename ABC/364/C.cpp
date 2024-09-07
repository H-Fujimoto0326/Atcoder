#include<bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;
const long long LINF = 1e18;
const long long MOD1000000007 = 1000000007;
const long long MOD998244353 = 998244353;
typedef long long ll;
typedef vector<int> vii;
typedef vector<ll> vll;
#define rrep(i, n) for (int i = 1; i <= (int)(n); i++)
#define rep(i, n) for (int i = 0;i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mod 998244353

int dx[] = { 1,0,-1,0,1,1,-1,-1 };
int dy[] = { 0,1,0,-1,1,-1,1,-1 };

template <class T>
bool clamp(T x, T min, T max) { return (x >= min && x <= max); }
template <class T>
void chmin(T &a, const T &b) noexcept {
    if (b < a) a = b;
}
template <class T>
void chmax(T &a, const T &b) noexcept {
    if (a < b) a = b;
}

int main() {
    // code
    ll n,x,y;
    cin >> n >> x >> y;
    vll a(n);
    vll b(n);
    rep(i,n){
        int A;
        cin >> A;
        a.push_back(-1*A);
    }
    sort(all(a));
    rep(i,n){
        int B;
        cin >> B;
        b.push_back(-1*B);
    }
    sort(all(b));
    ll asum = 0,bsum = 0;
    ll ans[2] = {200010,200010};

    rep(i,n){
        asum += -1*a[i];
        ans[0] = i+1;
        //cout << asum << endl;
        if(asum > x){
            break;
        }
    }
    rep(i,n){
        bsum += -1*b[i];
        ans[1] = i+1;
        //cout << bsum << endl;
        if(bsum > y){
            break;
        }
    }
    cout << min(ans[0],ans[1]);
    return 0;
}