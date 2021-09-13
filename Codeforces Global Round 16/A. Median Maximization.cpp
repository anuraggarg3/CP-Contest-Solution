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
          freopen("outputt","w",stdout);
  #endif
        
         int t;
          cin>>t;
          while(t--)
          {
           ll n,s;
           cin>>n>>s;
           if(n==1)
           {
            cout<<s<<endl;
           }
           else if(n==2)
           {
            cout<<s/2<<endl;
           }
           else
           {
         if(n%2!=0){  n=(n+1)/2;
           cout<<s/n<<endl;}
           else
           {
            n=(n/2)+1;
            cout<<s/n<<endl;
           }
           }
          } 
          return 0;
        }
