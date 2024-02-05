#include "menu.h"
#include <stdio.h>"
#include<stdlib.h>


/**
*affiche le menu de la page d acceuil
*
*/
void menu_acceuil(){
printf("--------------------\n");
printf("  ELISABETH TOWER   \n");
printf("      HOSPITAL      \n");
printf("----   MENU    -----\n");
printf("1.Register\n");
printf("2.Login\n");
printf("3.Contact an administrator \n");
printf("4.settings\n");
printf("5.Quit\n");
printf("...Make a choice...\n");
}
void gerer_menu_acceuil(int choix){

    switch(choix){

        case 1:
            register_menu();
            break;
        case 2:
            login_menu();
            break;
        case 3:
            contact_admin();
            break;
        default:
            menu_acceuil();
            break;
    }
}
void register_menu(){

    personne user;
    char ch;
    int i = 0;
    printf("***************************\n");
    printf("\t New user \n");
    printf("***************************\n");

    printf("Enter your name: ");
    fgets(user.name, 50, stdin);
    fgets(user.name, 50, stdin);
    printf("Enter your surname: ");
    fgets(user.name, 50, stdin);
    printf("Enter your username  *its  a unique username: ");
    fgets(user.username, 20, stdin);

    printf("Entrer votre mot de passe: ");

    while((ch = getch()) !=  '\r')
    {
        if(ch != '\b')
        {
            user.password[i] = ch;
            printf(".");
            i++;
        }
        else
        {
            printf("\b \b");
            i--;
        }
    }
    user.password[i] = '\0';

    printf("\n");


    printf("what is your age?");

    //affichage des valeurs entrees (pour la verification)
    printf("Name: %s",user.name);
    printf("Surname: %s",user.surname);
    printf("Username: %s",user.username);
    printf("password: %s \n", user.password);
    printf("Age: %d\n",user.age);

}
void login_menu(){
    printf("login\n");
    char name[20];
    char password[20];
    char ch;
    int i = 0;

    printf("*************************\n");
    printf("\t\t login on youur personal space \n");
    printf("*************************\n")
    printf("\t Enter your username: ");
    fgets("name, 20, stdin");
    fgets("name, 20, stdin");
    printf(" \t Enter your password: ");

    while ((ch = getch()) != '\r')
    {
        if(ch != '\b')
        {
            password[i] = ch;
            printf(".");
            i++;
        }
        else
        {
            printf("\b \b");
            i--;
        }
    }
    password[i] = '\0';

    printf("\n");

}
void contact_admin(){
printf("contact an administrator");
}
