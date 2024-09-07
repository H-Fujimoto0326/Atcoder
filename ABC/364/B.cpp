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
    int h,w;
    cin >> h >> w;
    int s[2];
    cin >> s[0] >> s[1];
    string c[h];
    rep(i,h){
        cin >> c[i];
    }
    string x;
    cin >> x;

    int pos[2] = {s[0],s[1]};

    rep(i,x.size()){
        if(x[i] == 'L'){
            if(pos[1] != 1 and c[pos[0]-1][pos[1]-2] == '.'){
                pos[1]--;
            }
        }
        else if(x[i] == 'R'){
            if(pos[1] != w and c[pos[0]-1][pos[1]] == '.'){
                pos[1]++;
            }
        }
        else if(x[i] == 'U'){
            if(pos[0] != 1 and c[pos[0]-2][pos[1]-1] == '.'){
                pos[0]--;
            }
        }
        else if(x[i] == 'D'){
            if(pos[0] != h and c[pos[0]][pos[1]-1] == '.'){
                pos[0]++;
            }
        }
    }

    cout << pos[0] << ' ' << pos[1] << endl;
    return 0;
}