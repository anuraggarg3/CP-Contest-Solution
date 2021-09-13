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
             string str;
             cin>>str;
             ll n=str.length();
             int count=0; 
             int sum=0;
             for(int i=0;i<n;i++)
             {
              if(str[i]=='0') count++;  
          //     if(str[i]=='0'){ if(str[i+1]=='0'&&i<n-1) sum++; 
          // }
             }
             for(int i=0;i<n-1;i++)
             {
               if(str[i]=='0')
                { if(str[i+1]=='0') sum++; 
                } 
             }
             if(count==0)
             {
                cout<<0<<endl;
             }
             else if(count==n)
             {
                cout<<1<<endl;
             }
         else{
            // if((str[0]=='1'||str[n-1]=='1'))
          cout<< min(2,-sum+count)<<endl;
                // cout<<2<<endl;
             }
         }
          return 0;
        }
