#include <stdio.h>

int factorial(int n) {
  if (n == 1) {
    return 1;
  } 
  return factorial(n-1)*n;
}

int permutation(int n, int r) {
  return factorial(n)/factorial(n-r);
}

int combination(int n, int r) {
  return factorial(n)/(factorial(r)*factorial(n-r));
}

int isPrime(int n) {
  for (int i=2; i<n; i++) {
    if (n%i == 0) {
      return 0;
    }
  }
  return 1;
}
