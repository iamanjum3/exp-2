#include <stdio.h>

double quad(double t,double a,double b,double c){ return a*t*t + b*t + c; }

int main(){
    double a=-0.3, b=5.0, c=12.0; // demo coefficients
    int t0=0, t1=24, step=3;
    printf("a=%.2f b=%.2f c=%.2f\n", a,b,c);
    for(int t=t0; t<=t1; t+=step)
        printf("t=%d, T=%.2f\n", t, quad((double)t,a,b,c));
    return 0;
}