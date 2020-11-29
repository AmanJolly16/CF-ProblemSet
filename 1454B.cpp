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
 
 
ll sol(int tc){
    cin>>n;
    ll arr[n];
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]+=1;
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(m[arr[i]]==1){
            if(ans==-1){
                ans=i;
            } else if(arr[i]<arr[ans]){
                ans=i;
            }
        }
    }
    if(ans==-1){
        return -1;
    }
    return ans+1;
    // return 0LL;
} 
 
int main()
{  
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
 
    int tc=0;
    cin>>tc;
    while(tc--){
        cout<<sol(tc)<<endl;
    }
 
    return 0;
} 