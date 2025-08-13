#include <stdio.h>
#include <stdlib.h>

double quad(double t,double a,double b,double c){ return a*t*t + b*t + c; }

int main(){
    FILE *f=fopen("input.txt","r");
    if(!f){ perror("input.txt"); return 1; }
    double a,b,c; int t0,t1,step;
    if(fscanf(f, "%lf %lf %lf %d %d %d", &a,&b,&c,&t0,&t1,&step)!=6){
        fprintf(stderr,"Bad file format.\n"); return 2; }
    fclose(f);
    for(int t=t0; t<=t1; t+=step)
        printf("t=%d, T=%.2f\n", t, quad((double)t,a,b,c));
    return 0;
}