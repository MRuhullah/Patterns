#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Up to which number you want to print the pattern: ";
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; ++i)
    {

        for (int s = 1; s < i; ++s)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    return 0;
}
