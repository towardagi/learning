#include <stdio.h>

int factorial(int n) {
  if (n == 1) {
    return 1;
  } 
  return factorial(n-1) * n;
}

int permutation(int n, int r) {
  return factorial(n)/factorial(n-r);
}
