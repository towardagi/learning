#include <stdio.h>
typedef unsigned long long ull;

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

int nextPrime(int n) {
  while (1) { 
    n++;
    if (isPrime(n)) {
      return n;
    }
  }
}

void primorialProductArray(int size, ull primorialProductArray[]) {
  int current_prime = 2;
  int current_primorial_product = 2;
  for (int i=0; i<size; i++) {
    primorialProductArray[i] = current_primorial_product;
    if (i<size-1) {
      current_prime = nextPrime(current_prime);
      current_primorial_product *= current_prime;
    }
  }
}
