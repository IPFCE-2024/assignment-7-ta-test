#include "taylor_sine.h"
#include <stdio.h>
#include <stdbool.h>

double power(double x, int n) {
  double result = 1.0;
  for (int i = 0; i < n; i++) {
    result *= x;
  }
  return result;
}

long long factorial(int n) { // n! remember to use long long
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

double taylor_sine(double x, int n) {
  // implement your function here
  double sum = 0.0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      sum += power(x, 2 * i + 1) / factorial(2 * i + 1);
    } else {
      sum -= power(x, 2 * i + 1) / factorial(2 * i + 1);
    }
  }
  return sum;
}

// double taylor_sine(double x, int n) {
//   assert(0 < n);
//   double acc = 0.0;
//   for (int i = 0; i < n; ++i) {
//     int exponent = i * 2 + 1;
//     double sign = i % 2 == 0 ? 1.0 : -1.0;
//     double term = sign * pow(x, exponent) / factorial(exponent);
//     acc += term;
//   }
//   return acc;
// }
