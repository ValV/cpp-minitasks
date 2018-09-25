#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  do {
    cout << "Type a string up to 255 characters" << endl;
    cin >> input;
  } while (input.size() > 255);
  int c = 0, input_size = input.length() - 1;
  for (int i = 0; i <= input_size; i ++) {
    switch (input[i]) {
      case 'A'...'Z': c ++;
    }
  }
  cout << c << endl;
  return 0;
}
// vim: se si et ts=2 sw=2 number:
