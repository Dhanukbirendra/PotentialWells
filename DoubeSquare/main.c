#include<stdio.h>

FILE *out;
double step(double);
int main() {
  int i, n=200;
  double x;
  double D=1.0; // depth of potential
  double w=0.8; // width of potential
  double B=0.25; // Separation of two wells
  w=w*0.5;
  out=fopen("out.dat","w");
  for(i=-n; i<=n; i++) {
    x=0.01*(double) i;
    fprintf(out,"%lf %lf\n",x,
       -D*(step(x+w+B)-step(x+B)+step(x-B)-step(x-w-B)));
  }
  fclose(out);
}
