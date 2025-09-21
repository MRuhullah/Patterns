#include <iostream>
using namespace std;
void print8(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {

            cout << "*";
        }

        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Up to which number you want to print the pattern? ";
    cin >> n;
    print8(n);

    return 0;
}