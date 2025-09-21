#include <iostream>
using namespace std;
void print5(int n)
{

    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Up to which number you want to print the pattern? ";
    cin >> n;
    print5(n); // will go to line 3

    return 0;
}