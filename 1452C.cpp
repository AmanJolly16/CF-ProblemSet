#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mod 1e9+7
#define inf 1e20
#define elif else if
#define fore(i,b) for(ll i=0;i<b;i++)
#define FORE(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

ll n=0;
ll k;

ll sol(int tc){
    string s;
    cin>>s;
    ll op1=0,op2=0,ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            op2-=1;
            if(op2>=0) ans++;
            else op2++;
        } elif(s[i]==']'){
            op1--;
            if(op1>=0) ans++;
            else op1++;
        } elif(s[i]=='('){
            op2++;
        } else{
            op1++;
        }
    } 
    cout<<ans<<endl;
    return 0LL;
} 

int main()
{  

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int tc=1;
    cin>>tc;
    while(tc--){
        sol(tc);
    }

    return 0;
} 

