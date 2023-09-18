#include <stdio.h>

int main(){
    int dias;
    int meses=0;
    int ano=0;
    scanf("%i", &dias);
    
    if(dias < 30){
       
        meses = 0;
        ano = 0;
    } 
    if ((dias >= 30) && (dias < 365)){
        meses = dias/30;
        dias = dias%30;
        ano = 0;
    }
    if (dias>=365){
        ano = dias/365;
        if(dias%365 >= 30){
            meses = (dias%365)/30;
            dias = (dias%365)%30;
        } else {
            meses = 0;
            dias = dias%365;
        }
    }
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)", ano, meses, dias);


    return 0;
}
