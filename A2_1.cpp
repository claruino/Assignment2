#include <iostream>
using namespace std;

int numberArray[10];

main(int argc, char **argv){

  //asks user for 10 numbers and inputs into array
  for(int i = 0; i < 10; ++i){
    cout << "Please enter a nonegative integer: " << endl;
    cin >> numberArray[i];
  }

  //prints number in array
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << " " << endl;
  }

  return 0;
}
