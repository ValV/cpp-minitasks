#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s, s0;
  do {
    cout << "Type a string up to 200 characters" << endl;
    cin >> s;
    cout << "Type a sub-string up to 200 characters" << endl;
    cin >> s0;
  } while (s.size() > 200 || s0.size() > 200);
  int i = 0, c = 0, s0_size = s0.size();
  while ((i = s.find(s0, i)) != string::npos) {
    i += s0_size;
    c ++;
  }
  cout << c << endl;
  return 0;
}
// vim: se si et ts=2 sw=2 number:
