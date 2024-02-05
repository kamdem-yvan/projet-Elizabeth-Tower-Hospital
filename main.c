#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main()
{
    int user_choice_acceuil;
    //on appelle ou execute la fonction  menu acceuil pour afficher le menu
    menu_acceuil();
    printf(" \t votre choix: ");
    scanf("%d",user_choice_acceuil);
    gerer_menu_acceuil(user_choice_acceuil);
    system("cls");
    scanf("%d",&user_choice_acceuil);
    return 0;
}
