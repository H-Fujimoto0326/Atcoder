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
#define all(x) (x).begin(), (x).end()
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
    ll q;
    cin >> q;
    vector<vector<int>> que(q);
    rep(i,q){
        int a;
        cin >> a;
        que[i].push_back(a);
        if(a == 1 or a == 2){
            int b;
            cin >> b;
            que[i].push_back(b); 
        }
    }

    map<int,int> ans;
    int cnt = 0;
    
    rep(i,q){
        if(que[i][0] == 1){
            ans[que[i][1]]++;
            if(ans[que[i][1]] == 1){
                cnt++;
            }
        }
        else if(que[i][0] == 2){
            ans[que[i][1]]--;
            if(ans[que[i][1]] == 0){
                cnt--;
            }
        }
        else{
            cout << cnt << endl;
        }
    }

    return 0;
}