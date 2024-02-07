#include <iostream>
using namespace std;
int main()
{
    for (int x = 1; x < 100; x++)
        for (int y = 1; y < 100; y++)
            for (int z = 1; z < 100; z++)
                if (x * y * z == x * y + x * z + y * z)
                {
                    cout << x << endl
                         << y << endl
                         << z << endl;
                }
}