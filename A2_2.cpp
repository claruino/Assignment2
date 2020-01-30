//unfinished
#include <iostream>
using namespace std;

int a[4][5];

main(int argc, char **argv){

  //nested for loop to fill two-dimensional array
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      cout << "Please enter a number: " << endl;
      cin >> a[i][j];
    }
  }

  cout << "\n";

  //printing each row of the two-dimensional array
  for(int i = 0; i < 5; ++i){
      cout << a[0][i] << " ";
  }
  cout << "\n";
  for(int i = 0; i < 5; ++i){
      cout << a[1][i] << " ";
  }
  cout << "\n";
  for(int i = 0; i < 5; ++i){
      cout << a[2][i] << " ";
  }
  cout << "\n";
  for(int i = 0; i < 5; ++i){
      cout << a[3][i] << " ";
  }
  cout << "\n";

  return 0;
}
