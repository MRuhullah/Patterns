#include <iostream>
using namespace std;
void print7(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - 2 * i + 4; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Up to which number you want to print the pattern? ";
    cin >> n;
    print7(n); // will go to line 3

    return 0;
}