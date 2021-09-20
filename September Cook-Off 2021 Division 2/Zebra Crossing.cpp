#include<bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define mod 1000000007
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
          freopen("input","r",stdin);
          freopen("outputf.txt","w",stdout);
  #endif
        int t;
        cin>>t;
        while(t--)
        {
         ll n,k; 
         cin>>n>>k;
   string s;
    cin>>s;
   char c = s[0];

    ll ans=0;
   ll co=0;
    for(ll i=0;i<n;i++)
    {
          if(s[i]=='1'&& s[i+1]=='0'||(s[i]=='0'&&s[i+1]=='1'))
          {
            co++;
            
          }
    }
    if(co<k){
        cout<<"-1"<<endl;
      
    }
    else
    {
   if(k%2!=0){
   for(ll i=n-1; i>0; i--){
        if( s[i]!=c){
            ans = i; break;
        }
   }
   }
   else{
        for(ll i=n-1; i>0; i--){
        if( s[i]==c){
            ans = i; break;
        }
   }
   }
   cout<<ans+1<<endl;
 }

        }
         
          return 0;
        }
