#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;

#ifndef ONLINE_JUDGE
    #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
    #define debug(x...)
#endif
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>vecA(n);
        vector<int>vecB(n);
        
        int distinct=0;
        vector<bool>seenA(26,false);

        for(int i=0;i<n;i++){
            if(seenA[s[i]-'a']==false){
                seenA[s[i]-'a']=true;
                distinct++;
            }vecA[i]=distinct;
        }
        distinct=0;
        vector<bool>seenB(26,false);

        for(int i=n-1;i>=0;i--){
            if(seenB[s[i]-'a']==false){
                seenB[s[i]-'a']=true;
                distinct++;
            }vecB[i]=distinct;
        }
        int res=0;
        for(int i=0;i<=n-2;i++){
            res=max(res,vecA[i]+vecB[i+1]);
        }
        cout<<res<<"\n";
    }
    return 0;
}