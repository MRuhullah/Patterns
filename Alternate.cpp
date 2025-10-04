 #include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        int val = i % 2; 
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val = 1 - val;   
        }
        cout << endl;
    }

    return 0;
}
