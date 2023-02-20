#include<bits/stdc++.h>
using namespace std;
#define eslam_eed ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//ويسر لى امرى 
int main()
{
    eslam_eed;
    string s;
    int t;
    cin>>t;
    int n;
  while (t--)
    {
    cin>>n;
    cin>>s;
    char res;
    sort(s.begin(),s.end());
    for (int i = 0; i < n; i++)
    {
         res =s[i]-1-'a';
    }
     cout<<(int)res+2<<endl;
 
    }
}