#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;
    cout << "A =" << endl; 
    cin >> a;
    cout << "B =" << endl; 
    cin >> b;
    if (!(a < b)) {
        cout << "Error: A < B is required" << endl;
    }
    for (int i = a + 1; i < b; i ++, c ++) {
        cout << i << " ";
    }
    cout << endl << c << " numbers" << endl;
    return 0;
}

