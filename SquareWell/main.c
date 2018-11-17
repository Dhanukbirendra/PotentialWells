#include<stdio.h>

FILE *out;
double step(double);
int main() {
  int i, n=200;
  double x, D=1.0, w=1.0;
  w=w*0.5;
  out=fopen("out.dat","w");
  for(i=-n; i<=n; i++) {
    x=0.01*(double) i;
    fprintf(out,"%lf %lf\n",x, -D*(step(x+w)-step(x-w)));
  }
  fclose(out);
}

