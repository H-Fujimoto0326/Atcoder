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
    int n;
    cin >> n;
    vector<pair<pair<ll,ll>,ll>> a;
    rep(i,n){
        ll A,C;
        cin >> A >> C;
        a.push_back(make_pair(make_pair(C,A),i+1));
    } 

    sort(all(a));
   
    vector<ll> ans;
    int v = 0;
    rep(i,n){
        if(a[i].first.second > v){
            ans.push_back(a[i].second);
            v = a[i].first.second;
        }
    }

    cout << ans.size() << endl;
    sort(all(ans));
    rep(i,ans.size()){
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}