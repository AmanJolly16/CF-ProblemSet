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

ll N=0;


ll sol(){
    cin>>N;
    cout<<N<<endl;
    fore(i,N){
        cout<<i+1<<" ";
    }
    cout<<endl;
    return 0LL;
} 

int main()
{  

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int T=0;
    cin>>T;
    while(T--){
        sol();
    }

    return 0;
} 

