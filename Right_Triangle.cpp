#include <iostream>
using namespace std;
void print2(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
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
    print2(n); // will go to line 3

    return 0;
}