#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){
    int cont_votes[votes[n]];
    *most_voted=1;
    *second_most_voted=2;

    for (int i = 0; i < n; i++){
        cont_votes[i]=votes[n];


        if (cont_votes[i] > most_voted){
            most_voted=&cont_votes[i];
        } else if ((cont_votes[i] < most_voted) || (cont_votes > second_most_voted)){
            second_most_voted=&cont_votes[i];
        }
    }
    printf("%d %d", *most_voted, *second_most_voted);

}



int main(){
    int n;
    int *most_voted;
    int *second_most_voted;
    
    
    scanf("%i", &n);

    int votes[n];
    
    for (int i = 0; i < n; i++){
        scanf("%i", &votes[i]);
    }
    
    compute_votes(n, votes, &most_voted, &second_most_voted);


    return 0;
}