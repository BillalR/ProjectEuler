#include <cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

void sumOf3and5(void);

void evenFibonacci(void);

void largestPrimeFactor(void);

void largestPalin(void);

bool reverseNum(int32_t num);

void p5(void);

int main(int argc, char **argv) {
  // sumOf3and5();
  // evenFibonacci();
  // largestPrimeFactor();
  // largestPalin();
  p5();
}

void sumOf3and5(void) {
  int sum = 0;

  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      sum = sum + i;
    } else {
      if (i % 3 == 0) {
        sum = sum + i;
      }
      if (i % 5 == 0) {
        sum = sum + i;
      }
    }
  }
  printf("%d\n", sum);
}

void evenFibonacci(void) {

  double evenSum = 0;
  double tempSum = 1;
  double tmp = 0;
  double div = 2;

  while (tempSum < 4000000) {
    tempSum += tmp;
    tmp = tempSum - tmp;
    double comp = fmod(tempSum, 2.0);
    if (int(comp) == 0) {
      evenSum += tempSum;
    }
  }
  printf("%lf\n", evenSum);
}

void largestPrimeFactor(void) {

  double num = 600851475143;
  double divisor = 2.0;
  do {
    double comp = fmod(num, divisor);
    if (int(comp) == 0 && num != divisor) {
      num = num / divisor;
    } else {
      divisor++;
    }
  } while (divisor * divisor <= num);
  printf("%lf\n", num);
}

void largestPalin(void) {
  int i;
  int j;
  int32_t result;
  int32_t tmp;
  bool check;
  for (i = 900; i < 1000; i++) {
    for (j = 900; j < 1000; j++) {
      result = i * j;
      check = reverseNum(result);
      if (check) {
        tmp = result;
      }
    }
  }
  printf("%d\n", tmp);
}

bool reverseNum(int32_t num) {
  int32_t reverse = 0;
  int32_t temp = num;
  while (temp != 0) {
    reverse = (reverse * 10) + (temp % 10);
    temp = temp / 10;
  }
  if (reverse == num) {
    return true;
  } else {
    return false;
  }
}

void p5(void) {
  bool run = true;
  int i = 1;
  int result = 0;
  int count = 0;
  while (run = true) {
    for (int j = 1; j <= 20; j++) {
      result = i % j;
      if (result == 0) {
        count++;
      } else if (result != 0) {
        break;
      }
      if (count == 20) {
        run = false;
        break;
      }
    }
    i++;
  }
  printf("%d\n", i);
}
