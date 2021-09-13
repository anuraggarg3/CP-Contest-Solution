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
          string str,strr;
          cin>>str>>strr;
          ll s2=0;
          for(int i=0;i<n;i++)
          {
           if(str[i]=='1'&&strr[i]=='0') s2+=2;
           if(str[i]=='0'&&strr[i]=='1') s2+=2;
          }
          ll s10=0;
          for(int i=0;i<n;i++)
          {
           if(str[i]=='1'&&strr[i]=='1'&&str[i+1]=='0'&&strr[i+1]=='0'&&i<n-1) {s10+=2; i++;}
           else if(str[i]=='0'&&strr[i]=='0'&&str[i+1]=='1'&&strr[i+1]=='1'&&i<n-1) {s10+=2; i++;}
           else if((str[i]=='0'&&strr[i]=='0')) s10++;
          }
          cout<<s10+s2<<endl;
         }
          return 0;
        }
