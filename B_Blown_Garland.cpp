#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, n) for (int i = a; i <= n; i++)
#define per(i, a, n) for (int i = n; i >= a; i--)
#define lowbit(x) ((x) & -(x))
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1
#define mem(a, b) memset(a, b, sizeof(a))
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double PI = acos(-1.0);
const ll mod = 1e9 + 7;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
template<class T>inline void read(T &res)
{
char c;T flag=1;
while((c=getchar())<'0'||c>'9')if(c=='-')flag=-1;res=c-'0';
while((c=getchar())>='0'&&c<='9')res=res*10+c-'0';res*=flag;
}
int ans[5];
string s;
//R Y B G
string ss[5];
int ttt;
bool vis[4];
int main()
{
    IOS
    cin >> s;
    for(int i = 0 ;i <s.size();i++){
        ss[i%4] += s[i];
    }
    int tmp = 0,op = 0;
    rep(i,0,ss[0].size() - 1){
        if(ss[0][i] == '!')++tmp;
        else{
            if(ss[0][i] == 'R') op=1;
            if(ss[0][i] == 'Y') op=3;
            if(ss[0][i] == 'B') op=2;
            if(ss[0][i] == 'G') op=4;
        }
    }
    ans[op] = tmp;vis[op] = 1;
    if(op == 0) ttt = tmp;

    tmp = 0,op = 0;
    rep(i,0,ss[1].size() - 1){
        if(ss[1][i] == '!')++tmp;
        else{
            if(ss[1][i] == 'R') op=1;
            if(ss[1][i] == 'Y') op=3;
            if(ss[1][i] == 'B') op=2;
            if(ss[1][i] == 'G') op=4;
        }
    }
    ans[op] = tmp;vis[op] = 1;
    if(op == 0) ttt = tmp;

    tmp = 0; op= 0;
    rep(i,0,ss[2].size() - 1){
        if(ss[2][i] == '!')++tmp;
        else{
            if(ss[2][i] == 'R') op=1;
            if(ss[2][i] == 'Y') op=3;
            if(ss[2][i] == 'B') op=2;
            if(ss[2][i] == 'G') op=4;
        }
    }
    ans[op] = tmp;vis[op] = 1;
    if(op == 0) ttt = tmp;

    tmp = 0; op = 0;
    rep(i,0,ss[3].size() - 1){
        if(ss[3][i] == '!')++tmp;
        else{
            if(ss[3][i] == 'R') op=1;
            if(ss[3][i] == 'Y') op=3;
            if(ss[3][i] == 'B') op=2;
            if(ss[3][i] == 'G') op=4;
        }
    }
    ans[op] = tmp;vis[op] = 1;
    /*if(op == 0) ttt = tmp;
    rep(i,1,4){
        if(vis[i]==0) ans[i] = ttt;
    }*/
    rep(i,1,4) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
		  				 		 	 		 		 	     	 			