#include<bits/stdc++.h>
#define endl "\n"
#define ll unsigned long long 
#define mod 1000000007
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
          freopen("input","r",stdin);
          freopen("outputt","w",stdout);
  #endif
        int t;
        cin>>t;
        while(t--)
        {
         ll n,s;
         cin>>n>>s;
         ll x=n*(n+1);
         x=x/2;
         if(x-s<=n&&s>=n)
         {
          cout<<x-s<<endl;
         } 
         else
         {
          cout<<-1<<endl;
         }
        }
         
          return 0;
        }
