#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double quad(double t,double a,double b,double c){ return a*t*t + b*t + c; }

int main(){
    FILE *fin=fopen("inputs.csv","r");
    if(!fin){ perror("inputs.csv"); return 1; }
    FILE *fout=fopen("results.csv","w");
    if(!fout){ perror("results.csv"); return 2; }
    fprintf(fout,"id,t,T\n");
    char id[64]; double a,b,c; int t0,t1,step;
    while(fscanf(fin, "%63[^,],%lf,%lf,%lf,%d,%d,%d\n", id,&a,&b,&c,&t0,&t1,&step)==7){
        for(int t=t0; t<=t1; t+=step)
            fprintf(fout, "%s,%d,%.4f\n", id, t, quad((double)t,a,b,c));
    }
    fclose(fin); fclose(fout);
    printf("Wrote results.csv\n");
    return 0;
}