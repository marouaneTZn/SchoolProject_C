#include <stdio.h>


int main(){
    float Celsius, Kelvin;
    printf("Entrez le Celsius: \n");
    scanf("%f", &Celsius);

    Kelvin = Celsius + 273.15;
    printf("\n|-------------------------|\n");
    printf("     Kelvin = %f \n",Kelvin);
    printf("|-------------------------|\n");


    return 0;
}
//K = C + 273.15