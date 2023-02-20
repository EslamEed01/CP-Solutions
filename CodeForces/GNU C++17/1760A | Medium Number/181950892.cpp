#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
 int arr[3];
 int a, b, c, t;
 cin >> t;
 while (t--)
 {
  for (int i = 0; i < 3; i++)
  {
   cin >> arr[i];
  }
  sort(arr,arr+3);
  cout << arr[1] << endl;
   
 }
}