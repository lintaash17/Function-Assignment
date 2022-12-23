// Linta Ashfaq
// Data Science: 1st Semester
#include <iostream>
#include <cmath>

using namespace std;

// function prototypes
double addition(double, double);
double difference(double, double);
double product(double, double);
double quotient(double, double);
double remainder(double, double);
double squareRoot(double);
double logarithm(double);

int main() {
  double number1,number2 ;
  char operation;

  cout << "Scientific Calculator" << endl;
  cout << "Enter  1st number: ";
  cin >> number1;
  cout << "Enter 2nd number: ";
  cin >> number2;
  cout << "Enter the operation (+, -, *, /, %, s, l): ";
  cin >> operation;

  // perform the requested operation
  switch (operation) {
    case '+':
      cout << number1 << " + " << number2 << " = " << addition(number1, number2) << endl;
      break;
    case '-':
      cout << number1 << " - " << number2 << " = " << difference(number1, number2) << endl;
      break;
    case '*':
      cout << number1 << " * " << number2 << " = " << product(number1, number2) << endl;
      break;
    case '/':
      cout << number1 << " / " << number2 << " = " << quotient(number1, number2) << endl;
      break;
    case '%':
      cout << number1 << " % " << number2 << " = " << remainder(number1, number2) << endl;
      break;
    case 's':
      cout << "Sqrt of " << number1 << " = " << squareRoot(number1) << endl;
      break;
    case 'l':
      cout << "Log(" << number1 << ") = " << logarithm(number1) << endl;
      break;
    default:
      cout << "Invalid operator" << endl;
      break;
  }

  return 0;
}

// function definitions
double addition(double number1, double number2) {
  return number1 + number2;
}

double difference(double number1, double number2) {
  return number1 - number2;
}

double product(double number1, double number2) {
  return number1 * number2;
}

double quotient(double number1, double number2) {
  return number1 / number2;
}

double remainder(double number1, double number2) {
  return fmod(number1, number2);
}

double squareRoot(double num) {
  return sqrt(num);
}

double logarithm(double num) {
  return log(num);
}
