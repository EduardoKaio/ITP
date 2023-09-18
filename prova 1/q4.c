#include <stdio.h>

int main(){
    int combo;
    int dinheiro;

    scanf("%i %i", &combo, &dinheiro);
    if (combo==1){
        if (dinheiro<12){
            printf("Saldo insuficiente! Falta %i reais", 12-dinheiro);
        }
        
        if (dinheiro==12){
            printf("Deu certim!");
        }
        
        if (dinheiro>12){
            printf("Troco = %i reais", dinheiro-12);
        }
    }

    if (combo==2){
        if (dinheiro<23){
            printf("Saldo insuficiente! Falta %i reais", 23-dinheiro);
        }
        
        if (dinheiro==23){
            printf("Deu certim!");
        }
        
        if (dinheiro>23){
            printf("Troco = %i reais", dinheiro-23);
        }
    }
    if (combo==3){
        if (dinheiro<31){
            printf("Saldo insuficiente! Falta %i reais", 31-dinheiro);
        }
        
        if (dinheiro==31){
            printf("Deu certim!");
        }
        
        if (dinheiro>31){
            printf("Troco = %i reais", dinheiro-31);
        }
    }
    if (combo==4){
        if (dinheiro<28){
            printf("Saldo insuficiente! Falta %i reais", 28-dinheiro);
        }
        
        if (dinheiro==28){
            printf("Deu certim!");
        }
        
        if (dinheiro>28){
            printf("Troco = %i reais", dinheiro-28);
        }
    }
    if (combo==5){
        if (dinheiro<15){
            printf("Saldo insuficiente! Falta %i reais", 15-dinheiro);
        }
        
        if (dinheiro==15){
            printf("Deu certim!");
        }
        
        if (dinheiro>15){
            printf("Troco = %i reais", dinheiro-15);
        }
    }
    return 0;
}