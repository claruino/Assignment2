//unfinished
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const float METERS_IN_FEET = 0.3048;
const float CENTI_IN_METER = 100;
const float INCH_IN_FOOT = 12;

double m_feet;
double m_inches;
double m_totalFeet; //feet including inches
double m_inchToFeet; //converting inches to feet
double m_feetToMeters; //convert feet to meter
double m_meters; //total meters
int m_wholeMeters; //meters with no remainder
double m_centi; //centimeters total
double m_remainingCenti; //remainder centimeters
string answer; //exit or continue variable

void userInput(){
  cout << "Please enter feet in your height: " << endl;
  cin >> m_feet;

  cout << "Please enter the inches in your height: " << endl;
  cin >> m_inches;

  cout << "Your height in feet and inches: " << m_feet << "\'" << m_inches << endl;
}


void calculate(double feet, double inches){
  m_inchToFeet = inches / 12;
  m_totalFeet = feet + m_inchToFeet;
  m_feetToMeters = m_totalFeet * METERS_IN_FEET;
  m_meters = m_feetToMeters;
  m_centi = m_meters * CENTI_IN_METER;
  m_wholeMeters = m_centi / 100;
  m_remainingCenti = fmod(m_centi, CENTI_IN_METER);
}

void output(){
  cout << "Your height in meters and centimeters is: " << m_wholeMeters << "m " << m_remainingCenti << "cm"  << endl;
}


main(int argc, char **argv){

  while(answer != "no"){
    userInput();
    calculate(m_feet, m_inches);
    output();

    cout << "Would you like to continue? (yes/no)" << endl;
    cin >> answer;
  }

  return 0;
}
