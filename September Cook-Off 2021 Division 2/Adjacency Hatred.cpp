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
          int a[n];
          std::vector<int> ve;
          vector<int> vo;
          for(int i=0;i<n;i++)
           {
            cin>>a[i]; 
            if(a[i]%2==0) ve.push_back(a[i]);
            else vo.push_back(a[i]);
           } 
          int e=0;
          int o=0;
          for(int i=0;i<n;i++)
          {
           if(a[i]%2!=0) o++;
           else e++; 
          }
          if(e==0||o==0)
          {
            cout<<-1<<endl;
          }
          else
          {
            int j=0;
            while(j<e)
            {
              cout<<ve[j]<<" ";
              j++;
            }
            int i=0;
            while(i<o)
            {
              cout<<vo[i]<<" ";
              i++;
            }
            cout<<endl;
          }
          // if(n%2==0)
          // {
          //   if(e==o)
          //   {
          //     int i=0;
          //     while(i<n/2)
          //     {
          //       cout<<vo[i]<<" "<<ve[i]<<" ";
          //       i++;
          //     }
          //     cout<<endl;
          //   }
          //   else
          //   {
          //     cout<<-1<<endl;
          //   }
          // }
          // else
          // {
          //   if(e>o)
          //   {
          //     int i=0;
          //     while(i<e)
          //     {
          //       cout<<ve[i]<<" ";
          //       i++;
          //     }
          //     int j=0;
          //     while(j<o)
          //     {
          //       cout<<vo[i]<<" ";
          //       j++;
          //     }
          //     // cout<<ve[n/2];
          //     cout<<endl;
          //   }
          //   else
          //   {
          //     cout<<-1<<endl;
          //   }
          // }
         }
          return 0;
        }
