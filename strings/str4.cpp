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
  bool first_found = true;
  int input_size = input.length() - 1;
  for (int i = 1; i < input_size; i ++) {
    if (input[i] == input[input_size]) first_found = false;
    else if (input[i] == input[0]) first_found = true;
  }
  cout << first_found << endl;
  return 0;
}
// vim: se si et ts=2 sw=2 number:
