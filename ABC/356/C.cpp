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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mod 998244353

int dx[] = { 1,0,-1,0,1,1,-1,-1 }; int dy[] = { 0,1,0,-1,1,-1,1,-1 };

template <class T>
bool clamp(T x, T min, T max) { return (x >= min and x <= max); }
template <class T>
void chmin(T &a, const T &b) noexcept
{
    if (b < a)
        a = b;
}
template <class T>
void chmax(T &a, const T &b) noexcept
{
    if (a < b)
        a = b;
}

int main() {
    // code
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> c(m);
    vector<char> r(m);
    vector<vector<int>> a(m);
    rep(i,m){
        cin >> c[i];
        rep(j,c[i]){
            int A;
            cin >> A;
            a[i].push_back(A);
        }
        cin >> r[i];
    }
    int ans = 0;
    vector<bool> keys(n);
    for(int i = 0;i < (1 << n);i++){
        for(int j = 0;j < n;j++){
            keys[j] = (i & (1 << j));
        }
        bool ok = true;
        for(int j = 0;j <m;j++){
            int cnt = 0;
            for(int k = 0;k < c[j];k++){
                if(keys[a[j][k]-1]){
                    cnt++;
                }
            }
            if(cnt >= k and r[j] == 'x'){
                ok = false;
                break;
            }
            if(cnt < k and r[j] == 'o'){
                ok = false;
                break;
            }
        }
        if(ok){
            ans++;
        }
    }

    cout << ans << endl;


    return 0;
}