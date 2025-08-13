#include <stdio.h>
#include <stdbool.h>

double quad(double t,double a,double b,double c){ return a*t*t + b*t + c; }

bool valid(double a,double b,double c,int t0,int t1,int step){
    if(a<-100||a>100||b<-100||b>100||c<-100||c>100) return false;
    if(t0<0||t1>24||t0>t1) return false;
    if(step<=0||step>6) return false; return true;
}

int main(){
    double a,b,c; int t0,t1,step;
    printf("Enter a b c t_start t_end step: ");
    if(scanf("%lf %lf %lf %d %d %d", &a,&b,&c,&t0,&t1,&step)!=6){
        fprintf(stderr,"Invalid input.\n"); return 1; }
    if(!valid(a,b,c,t0,t1,step)){ fprintf(stderr,"Out of range.\n"); return 2; }
    for(int t=t0; t<=t1; t+=step)
        printf("t=%d, T=%.2f\n", t, quad((double)t,a,b,c));
    return 0;
}