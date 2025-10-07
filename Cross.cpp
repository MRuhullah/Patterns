#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size (odd number recommended): ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i || j == n - i - 1) {
                cout << "A";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
