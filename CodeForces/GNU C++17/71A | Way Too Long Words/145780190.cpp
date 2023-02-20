#include <iostream>
#include<string>
using namespace std;
int main()
{
 int n;
 cin >> n;
 for (int x = 1; x <= n; x++)
 {
  string str;
  cin >> str;
  int len = str.length();
  if (len > 10)
  {
   cout << str[0] << (len - 2) << str[len - 1] << endl;
  }
  else
  {
   cout << str << endl;
  }
 }
 }