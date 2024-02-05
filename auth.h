#ifndef AUTH_H_INCLUDED
#define AUTH_H_INCLUDED

 typedef struct personne
 {
     int id;
     char *name;
     char *surname;
     char username[20];
     char *password;
     double *age;
 }personne;

 int user_register(personne user);


#endif // AUTH_H_INCLUDED
