#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int sum = 0;
    for (int x = 1; x <= n; x++)
    {
        int counter = 0;
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if (n1 == 1) counter++;
        if (n2 == 1) counter++;
        if (n3 == 1) counter++;
        if (counter >= 2)
            sum++;
    }
    cout << sum;
}