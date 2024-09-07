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
    string s,t;
    cin >> s >> t;
    vector<string> x;
    vector<int> index;
    rep(i,s.size()){
        if(s[i] != t[i]){
            if(s[i] > t[i]){
                s[i] = t[i];
                x.push_back(s);
            }
            else{
                index.push_back(i);
            }
        }
    }
    
    for(int i = index.size()-1;i >= 0;i--){
        s[index[i]] = t[index[i]];
        x.push_back(s);
    }
    
    cout << x.size() << endl;
    rep(i,x.size()){
        cout << x[i] << endl;
    }
    return 0;
}