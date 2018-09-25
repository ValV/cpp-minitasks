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
  int i, input_size = input.length() - 1;
  while ((i = input.find(input[input_size])) != string::npos) {
    input.erase(i, 1);
  }
  input.erase(input.length() - 1, 1);
  cout << input << endl;
  return 0;
}
// vim: se si et ts=2 sw=2 number:
