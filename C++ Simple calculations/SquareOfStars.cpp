#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    for (int y = 0; y < n; ++ y) {
       for (int x = 0; x < n; ++x) {
          cout << (y == 0 || y == (n - 1) || x == 0 || x == (n - 1) ? '*' : ' ' );
       }
       cout << endl;
    }
    return 0;
}

