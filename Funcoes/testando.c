#include <stdio.h>
#include <math.h>

int somaDivisores1(int n){
    int totalDivisores = 0;
    
    for(int i=1; i < n; i++){
        if(i%n == 0){
            totalDivisores = totalDivisores + i;
        }
    }
    
    return totalDivisores;
}

int defineColega(int divisoresn1, int divisoresn2, int n1, int n2){
    if((abs(divisoresn1 - n2) <= 2) && (abs(divisoresn2 - n1) <= 2)){
        return printf("S");
    } else {
        return printf("N");
    }
}

int main(){
    
    int n1;
    int n2;
    
    scanf("%i %i", &n1, &n2);
    
    int divisoresn1 = somaDivisores1(n1);
    int divisoresn2 = somaDivisores1(n2);
    
    defineColega(divisoresn1, divisoresn2, n1, n2);
    
    return 0;
}