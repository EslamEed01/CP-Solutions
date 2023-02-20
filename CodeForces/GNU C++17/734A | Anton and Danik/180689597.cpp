#include <iostream>
using namespace std;
int main()
{
 int count1 = 0, count2 = 0;
 char s[100000];
 int n;
 cin >> n;
 cin >> s;
 for (int i = 0; i < n; i++)
 {
  if (s[i] == 'A')
   count1++;
  if (s[i] == 'D')
   count2++;
 }
 if (count1 > count2)
  cout << "Anton" << endl;
 else if (count1 < count2)
  cout << "Danik" << endl;
 else
  cout << "Friendship" << endl; 
 
 
}