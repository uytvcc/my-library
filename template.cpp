#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rrep(i, n) for(int i=((int)(n)-1); i>=0; --i)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define MOD2 998244353
#define INF 1000000007
#define LINF 1000000000000000007LL
#define PI 3.14159265359
#define P pair<ll,ll>
template <typename T>
inline bool chmax(T &a, const T &b){
    if(a<b) {a=b; return true;}
    else return false;
}
template <typename T>
inline bool chmin(T &a, const T &b){
    if(a>b) {a=b; return true;}
    else return false;
}
