#include <stdio.h>

int main(){
    char  nom[50]; 
    char  prénom[50]; 
    char  sexe[50]; 
    char  email[50];
    int âge;
    printf("=== Saisie des informations ===\n");
    
    printf("Entrez votre nom: ");
    scanf("%s", &nom);

    printf("Entrez votre prénom: ");
    scanf("%s", &prénom);

    printf("Entrez votre âge: ");
    scanf("%d", &âge);

    printf("Entrez votre sexe: ");
    scanf("%s", &sexe);

    printf("Entrez votre email: ");
    scanf("%s", &email);

    printf("\n--------------------------------\n");
    printf("   INFORMATIONS PERSONNELLES    \n");
    printf("--------------------------------\n");
    printf("Nome       : %s\n",nom);
    printf("Prénom     : %s\n",prénom);
    printf("Age        : %dans\n",âge);
    printf("Sexe       : %s\n",sexe);
    printf("email      : %s\n",email);
    printf("--------------------------------\n");
    
    


    return 0;
}

//nom, prénom, âge, sexe, et adresse email