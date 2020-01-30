//unfinished
#include <iostream>
using namespace std;

int a;
int b;

//function setting variables to 0
void zeroBooth(int& x, int& y){
  x = 0;
  y = 0;
}

main(int argc, char **argv){
  cout << "Please enter an integer: " << endl;
  cin >> a;

  cout << "Please enter an integer: " << endl;
  cin >> b;

  cout << "Your variables before: " << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  zeroBooth(a, b);

  cout << "Your variables after: " << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}
