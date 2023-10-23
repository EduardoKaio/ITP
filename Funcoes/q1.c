#include <stdio.h>
#include <math.h>

int LerNumero(){
    int nota1;
    int nota2;
    int nota3;
    int score1;
    int score2;
    int score3;
    int score_final;
    for (int i = 0; i < 3; i++) {
        scanf("%i %i %i", &nota1, &nota2, &nota3);
        if (i==0) {
            if (((nota1 <= nota2) && (nota1 >= nota3)) || ((nota1 >= nota2) && (nota1 <= nota3))){
                score1=nota1;
            }
            if (((nota2 <= nota1) && (nota2 >= nota3)) || ((nota2 >= nota1) && (nota2 <= nota3))){
                score1=nota2;
            }
            if (((nota3 <= nota1) && (nota3 >= nota2)) || ((nota3 >= nota1) && (nota3 <= nota2))){
                score1=nota3;
            }
        }
        if (i==1) {
            if (((nota1 <= nota2) && (nota1 >= nota3)) || ((nota1 >= nota2) && (nota1 <= nota3))){
                score2=nota1;
            }
            if (((nota2 <= nota1) && (nota2 >= nota3)) || ((nota2 >= nota1) && (nota2 <= nota3))){
                score2=nota2;
            }
            if (((nota3 <= nota1) && (nota3 >= nota2)) || ((nota3 >= nota1) && (nota3 <= nota2))){
                score2=nota3;
            }
        }
        if (i==2) {
            if (((nota1 <= nota2) && (nota1 >= nota3)) || ((nota1 >= nota2) && (nota1 <= nota3))){
                score3=nota1;
            }
            if (((nota2 <= nota1) && (nota2 >= nota3)) || ((nota2 >= nota1) && (nota2 <= nota3))){
                score3=nota2;
            }
            if (((nota3 <= nota1) && (nota3 >= nota2)) || ((nota3 >= nota1) && (nota3 <= nota2))){
                score3=nota3;
            }
        }
    }
    if (((score1 <= score2) && (score1 >= score3)) || ((score1 >= score2) && (score1 <= score3))){
        score_final=score1;
    }
    if (((score2 <= score1) && (score2 >= score3)) || ((score2 >= score1) && (score2 <= score3))){
        score_final=score2;
    }
    if (((score3 <= score1) && (score3 >= score2)) || ((score3 >= score1) && (score3 <= score2))){
        score_final=score3;
    }
    return score_final;
}

int Ganhador(score_A, score_B){
    if (score_A>score_B){
        return printf("A");
    }
    if (score_A<score_B){
        return printf("B");
    }
    if (score_A=score_B){
        return printf("empate");
    }
}

int main(){
    int score_A = LerNumero();
    int score_B = LerNumero();
    Ganhador(score_A, score_B);
    return 0;
}