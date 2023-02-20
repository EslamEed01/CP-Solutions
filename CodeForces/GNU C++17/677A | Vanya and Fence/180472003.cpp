#include <iostream>
using namespace std;
int main()
{
 int nf, limith, count = 0;
 cin >> nf >>limith;
 int arr[nf];
 for (int i = 0; i < nf; i++)
 {
  
  cin >> arr[i];
 }
 for (int i = 0; i < nf; i++)
 {
  if (arr[i] <= limith)
   count += 1;
  else
   count += 2;
  
 }
 cout << count << endl;
}