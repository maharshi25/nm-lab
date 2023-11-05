#include<stdio.h>

int main() {
  int n;
  printf("Enter number of values to be enterd: ");
  scanf("%d", &n);

  double x[n], f_x[n];
  printf("Enter x and f(x)\n");
  for (int i = 0; i < n; i++) {
    scanf("%lf%lf", &x[i], &f_x[i]);
  }

  double x_ans, f_ans = 0;
  printf("Enter x at which the function is to be interpolated: ");
  scanf("%lf", &x_ans);

  for (int i = 0; i < n; i++) {
    double prod = 1;
    for (int j = 0; j < n; j++) {
      if (i != j) {
	prod *= (x_ans - x[j]) / (x[i] - x[j]);
      }
    }
    f_ans += prod * f_x[i];
  }

  printf("f(%.2lf) = %.3lf\n", x_ans, f_ans);
  return 0;
}
