#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  bool latin = true;
  do {
    cout << "Enter latin number:" << endl;
    cin >> input;
    for (int i = input.size() - 1; i >= 0; i --) {
      latin = true;
      switch (input[i]) {
        case 'C'...'D':
        case 'I':
        case 'L'...'M':
        case 'V':
        case 'X': break;
        default:
          latin = false; i = -1;
      }
    }
  } while (!latin);
  int number = 0;
  for (int i = input.size() - 1; i >= 0; i --) {
    switch (input[i]) {
      case 'M': if (i > 0 && input[i - 1] == 'C') {
                  number += 900;
                  i --;
                } else number += 1000; break;
      case 'D': if (i > 0 && input[i - 1] == 'C') {
                  number += 400;
                  i --;
                } else number += 500; break;
      case 'C': if (i > 0 && input[i - 1] == 'X') {
                  number += 90;
                  i --;
                } else number += 100; break;
      case 'L': if (i > 0 && input[i - 1] == 'X') {
                  number += 40;
                  i --;
                } else number += 50; break;
      case 'X': if (i > 0 && input[i - 1] == 'I') {
                  number += 9;
                  i --;
                } else number += 10; break;
      case 'V': if (i > 0 && input[i - 1] == 'I') {
                  number += 4;
                  i --;
                } else number += 5; break;
      case 'I': number ++;
    }
  }
  cout << number << endl;
  return 0;
}
// vim: se si et ts=2 sw=2 number:
