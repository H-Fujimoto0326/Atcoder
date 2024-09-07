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
    int n,m;
    cin >> n >> m;
    string bit[n];
    rep(i,n){
        string S;

        cin >> S;
        int cnt = 0;
        rep(j,m){
            if(S[j] == 'o'){
                cnt++;
                bit[i].push_back('1');
            }
            else{
                bit[i].push_back('0');
            }
        }
    }

    vector<int> bitIntegers(n);

    for (int i = 0; i < n; i++) {
        bitIntegers[i] = std::bitset<32>(bit[i]).to_ulong();
    }

    int ans = n;
    int mask = 1;
    rep(i,m){
        mask *= 2;
    }
    mask--;

    for(int i = 0; i < (1<<n); ++i){
        int B = 0;
        int cnt = 0;
        for(int j = 0;j < n;++j){
            if(i & (1 << j)){
                cnt++;
                B |= bitIntegers[j];
            }
        }
        if(B == mask){
            chmin(ans,cnt);
        }
        
    }
    cout << ans << endl;
    return 0;
}