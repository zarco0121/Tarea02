#include <stdio.h>
#include <math.h>

double factorial(int n1){
    int a; 
    int fact1 = 1;
    for(a = 1; a <= n1; a++){
        fact1 *= a;
    }
    return fact1;
}


int main(){

    int n;
    int e;
    printf("Introduce el numero a calcular el factorial: \n");
    scanf("%i", &n);
    if(n<0){
        printf("Los valores no son validos");
    }else{
        e = factorial(n);
        printf("Resultado de la binomial: %i\n", e);
        }
    
}
