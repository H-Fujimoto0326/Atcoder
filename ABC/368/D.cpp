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

vector<vector<int>> g(200009);
vector<bool> visited(200009);
vector<bool> required(200009);

int dfs(int v){
    visited[v] = true;
    int subtree_size = 0;
    bool isRequired = false;
    if(required[v]){
        isRequired = true;
    }

    for(int x : g[v]){
        if(!visited[x]){
            int c = dfs(x);
            subtree_size += c;
            if(c > 0){
                isRequired = true;
            }
        }
    }

    if(isRequired){
        subtree_size++;
    }

    return subtree_size;
}

int main() {
    // code
    int n,k;
    cin >> n >> k;

    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> v(k);
    rep(i,k){
        cin >> v[i];
        required[v[i]] = true;
    }

    int result = dfs(v[0]);

    cout << result << endl;
    return 0;
}