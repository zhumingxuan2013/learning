#include <iostream>
#include <cmath>
using namespace std;
void expr(int n)
{
    int index = log2(n);
    if (n == 1)
    {
        cout << "2(0)";
    }
    else if (n == 2)
    {
        cout << "2";
    }
    else
    {
        for (int i = index; i >= 0; i--)
        {
            int power = pow(2, i);
            if (n - power >= 0)
            {
                if (i > 1)
                {
                    cout << "2(";
                    expr(i);
                    cout << ")";
                }
                else if (i == 1)
                {
                    cout << "2";
                }
                else
                {
                    cout << "2(0)";
                }
                if (n - power > 0)
                {
                    cout << "+";
                }
                expr(n - power);
                break;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    expr(n);
    return 0;
}