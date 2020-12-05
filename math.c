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

void primorialArray(int size, ull primorialArray[]) {
  int current_prime = 2;
  ull current_primorial = 2;
  for (int i=0; i<size; i++) {
    primorialArray[i] = current_primorial;
    if (i<size-1) {
      current_prime = nextPrime(current_prime);
      current_primorial *= current_prime;
    }
  }
}

int gcd(int a, int b) {
  int lhs = a;
  int div = b;
  int r = a%b;

  while (r != 0) {
    lhs = div;
    div = r;
    r = lhs%div;
  }

  return div;
}

int gcd_recursive(int a, int b) {
  if (b == 0) return a;
  return gcd_recursive(b, a%b);
}
