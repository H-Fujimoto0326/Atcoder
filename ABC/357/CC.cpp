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


vector<string> dfs(int k){
    if(k == 0){
        return vector<string> (1,"#");
    }
    else{
        vector<string> a = dfs(k-1);
        vector<string> b(a.size()*3,string(a.size()*3,'.'));
        rep(i,3){
            rep(j,3){
                if(i == 1 and j == 1){
                    continue;
                }

                rep(x,a.size()){
                    rep(y,a.size()){
                        b[i*a.size()+x][j*a.size()+y] = a[x][y];
                    }
                }

            }
        }
        return b;
    }
}

int main() {
    // code
    int n;
    cin >> n;
   
   auto s = dfs(n);

   for(auto x : s){
        cout << x << endl;
   }

    return 0;
}