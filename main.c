#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<windows.h>

void EffacerEcran(){
    #ifdef _WIN32
        system("cls");
    #endif
}

int main()
{
    const char virgule_pi[] = "3.1415926535897932384626433832";
    int reponse;
    char reponse_joueur[100];
    int choix_recommencer;




        printf("Bienvenue sur la memorisation des decimales de PI. Es tu pret a relever le defi ? (0 = non/1 = oui) ");
    scanf(" %d", &reponse);
    EffacerEcran();

    do {
        bool succes = false;
        int longueur = 4;

    if (reponse == 1){
        succes = true;
    }
    else{
        printf("Tu ne veux pas jouer a mon jeu snif...\n");
        printf("Appuie sur une touche pour quitter");
        getchar();
        getchar();
        return 0;
    }


    while (succes == true) {
        printf("Memorise :");
        Sleep(500);
        for (int i = 0; i < longueur; i++){
            printf("%c", virgule_pi[i]);
        fflush(stdout);
        Sleep(500);
        }
        Sleep(500);
        EffacerEcran();

        printf("\n\nA toi de jouer : ");
        scanf("%s", reponse_joueur);

        if (strncmp(virgule_pi, reponse_joueur, longueur) == 0){
                printf("Bravo !\n");
                longueur ++;
                Sleep(1000);
        }
        else{
            succes = false;
        }
    }
        printf("\nTu as eu faux !\nVeux tu recommencer ? (0/1)");
        scanf("%d", &choix_recommencer);

    }while (choix_recommencer == 1);

    printf("\nMerci d'avoir joue !\n");
    printf("Appuie sur une touche pour quitter");
    getchar();
    getchar();
    return 0;
}
