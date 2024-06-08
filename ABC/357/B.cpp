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
    string s;
    cin >> s;
    int cntl=0,cntu=0;
    rep(i,s.size()){
        if(isupper(s[i])){
            cntu++;
        }
        else{
            cntl++;
        }
    }
    string cp = s;
    if(cntu > cntl){
        transform(s.begin(),s.end(),cp.begin(),::toupper);
    }
    else{
        transform(s.begin(),s.end(),cp.begin(),::tolower);
    }
    cout << cp << endl;
    return 0;
}