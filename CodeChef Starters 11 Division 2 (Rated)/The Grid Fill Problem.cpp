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
          int n;
           cin>>n;
           if(n%2==0)
           {
            for(int i=0;i<n;i++)
            {
             for(int j=0;j<n;j++)
              {
                cout<<-1<<" ";
              } 
              cout<<endl;
            }
            // cout<<endl;
           }
           else
           {
             for(int i=0;i<n;i++)
            {
             for(int j=0;j<n;j++)
              {
               if(i==j) cout<<-1<<" ";
               else cout<<1<<" ";
              } 
              cout<<endl;
            }
           }
         }
          return 0;
        }
