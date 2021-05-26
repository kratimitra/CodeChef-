#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=1e9+7;
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)

#define pb push_back
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define fill__(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define ff first
#define ss second
#define endl "\n"
#define pi 3.1415926536
#define pii pair<int, int>
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);

//
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
void prl(int x) {cout << x << endl;}
// typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> Set;
//bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
int cbrt(int x) { int lo = 1, hi = min(2000000ll, x); while (hi - lo > 1) {int mid = (lo + hi) / 2; if (mid * mid * mid < x) {lo = mid;} else hi = mid;} if (hi * hi * hi <= x) return hi; else return lo;}
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//const int N =  (int)(1 * 1e6 + 10);

/*MODULAR ARITHMETIC:
    (a+b)%M = ((a%M) + (b%M)) %M;
    (a*b)%M = ((a%M) * (b%M)) %M;
    (a-b)%M = ((a%M) - (b%M) + M) %M;
    (a/b)%M = ((a%M) * ((b^-1)%M)) %M;
*/

ll freq[32];
void cook_here()
{
   // cout<<"TEST\n";
    ll n;
    cin>>n;
    vector<string> v(n);
    memset(freq , 0 , sizeof(freq));
    
    for(ll i=0;i<n;i++){
        cin>>v[i];
        
        int mask=0;
        
        for(char ch:v[i]){
            if(ch=='a') mask=mask | (1<<0);
            if(ch=='e') mask=mask | (1<<1);
            if(ch=='i') mask=mask | (1<<2);
            if(ch=='o') mask=mask | (1<<3);
            if(ch=='u') mask=mask | (1<<4);
            
        }
        
        freq[mask]++;
    }


    ll ans=0;
    
    for(int i=1;i<32;i++){
        for(int j=i+1;j<32;j++){
            if((i | j ) == 31)
                ans += ( freq[i] * freq[j] );
        }
    }
    
    ans+=(freq[31] * (freq[31] - 1)) / 2;
    
    cout<<ans<<endl;
    

   return ;
}

int main(){
/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/
    codephillic__;
//srand(time(NULL));
    ll t=1;
    cin>>t;
    while(t--){
        cook_here();
    }
    return 0;
    


}
