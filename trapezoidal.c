#include <stdio.h>

double f(double x) {
  return 1/(1 + x);
}

int main() {
  double a, b, h, sum;
  int n;

  printf("Enter lower and upper limit of the interval: ");
  scanf("%lf%lf", &a, &b);

  printf("Enter number of subintervals: ");
  scanf("%d", &n);

  h = (b - a) / n;
  sum = f(a) + f(b);

  for (int i = 1; i < n; i++) {
    double y = a + i*h;
    sum += 2 * f(y);
  }

  double ans = h/2 * sum;
  printf("The ans is %lf\n", ans);
  return 0;
}
