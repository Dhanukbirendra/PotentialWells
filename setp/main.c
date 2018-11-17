#include<stdio.h>

FILE *out;
double step(double);
int main() {
  int i, n=100;
  double x;
  out=fopen("out.dat","w");
  for(i=-n; i<=n; i++) {
    x=0.01*(double) i;
    fprintf(out,"%lf %lf\n",x, step(x));
  }
  fclose(out);
}
