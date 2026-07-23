#include <stdio.h>

int main(){
    float Km, Yards;
    printf("Entrez Km: ");
    scanf("%f", &Km);

    Yards = Km * 1093.61;
    printf("\n|-------------------------|\n");
    printf("     Yards = %f \n",Yards);
    printf("|-------------------------|\n");


    return 0;
}
//Yards = Km * 1093.61