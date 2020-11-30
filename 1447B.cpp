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
    ll m;
    cin>>n>>m;
    int arr[n][m],cnt=0,mini=INT_MAX,sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            mini=min(mini,abs(arr[i][j]));
            if(arr[i][j]<0) cnt++;
            sum+=abs(arr[i][j]);
        }
    if(cnt%2!=0)
        sum-=2*mini;
    cout<<sum<<endl;
    return 0;
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
        sol(tc);
    }

    return 0;
} 

