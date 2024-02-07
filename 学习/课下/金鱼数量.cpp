#include <iostream>
using namespace std;
int main()
{
    int ans = 11;
    for (int i = 5; i > 1; i--)
    {
        ans = ans * i - 1;
    }
    cout << ans;
}