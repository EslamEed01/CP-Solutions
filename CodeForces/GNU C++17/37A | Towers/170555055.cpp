#include <bits/stdc++.h>
using namespace std;
const int k = 5e5;
int freq1[k];
int arr[k];
int main()
{
 int count = 0;
 int max = 1;
 int n;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 
 }
 for (int i = 0; i < n; i++)
  ++freq1[arr[i]];
 for (int i = 0; i <= 1000; i++)
 {
  if (freq1[i])
  {
   count++;
  }
  if (freq1[i] > max)
   max = freq1[i];
  
 }
 cout << max<<" " << count;
 
}