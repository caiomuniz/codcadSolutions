#include <iostream>

using namespace std;

int main() {
  int t1, t2, t3;
  cin >> t1 >> t2 >> t3;

  if(t1 < t2 && t1 < t3)
  {
    cout << "1\n";
    if (t2 < t3)
      cout << "2\n3\n";

    else
      cout << "3\n2\n";
  }
  else if (t1 > t2 && t2 < t3) {

    cout << "2\n";

    if (t1 < t3)
      cout << "1\n3\n";
    else
      cout << "3\n1\n";
  }
  else
  {
    cout << "3\n";

    if (t1 < t2)
      cout << "1\n2\n";
    else
      cout << "2\n1\n";
  }
  return 0;
}
