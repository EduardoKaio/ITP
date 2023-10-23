#include <stdio.h>

struct Time {
    char nome[50];
    int gols_marcados;
    int gols_sofridos;
};

void ordenarTimes(struct Time times[], int n_times){
    int maior=0;

    for (int i = 0; i < n_times - 1; i++) {
            for (int j = 0; j < n_times - i - 1; j++) {
                if (times[j].gols_marcados < times[j + 1].gols_marcados) {
                    // Troca os elementos se estiverem fora de ordem
                    struct Time temp = times[j];
                    times[j] = times[j + 1];
                    times[j + 1] = temp;
                }
            }
        }
    
    for (int i = 0; i < n_times; i++){
        printf("%i - %s\nGols marcados: %i\nGols sofridos: %i\n", i+1, times[i].nome, times[i].gols_marcados, times[i].gols_sofridos);

    }
    
    
}

int main(){
    int n_times;
    scanf("%i", &n_times);
    struct Time times[n_times];

    for (int i = 0; i < n_times; i++){
        scanf(" %[^\n]s", times[i].nome);
        scanf("%i %i",&times[i].gols_marcados, &times[i].gols_sofridos);
    }
    ordenarTimes(times, n_times);

    



    return 0;
}