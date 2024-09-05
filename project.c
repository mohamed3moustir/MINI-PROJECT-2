#include <stdio.h>
#include <string.h>
struct Contact{
    char nom[100][100];
    char email[100][100];
    char Num_telephone[100][100];
   
}arg;
int tailler = 0;
// function 1
void ajouter_contact();
// function 2
void Afficher_contact();
// funtion 3
void  Modifier_contact();
//function 4

//function 5
void Rechercher_contact();
int main() {
    struct Contact arg;
    int choix;
   
    do{
     printf("[1]: Ajouter un Contact \n");
     printf("[2]: Modifier un Contact\n");
     printf("[3]: Supprimer un Contact\n");
     printf("[4]: Afficher Tous les Contacts\n");
     printf("[5]: Rechercher un Contact\n"); 
     scanf("%d",&choix);
   switch(choix){
       
       case 1:
       ajouter_contact();
       break;
        case 2:
        Modifier_contact();
       break;
        case 3:
       break;
        case 4:
        Afficher_contact();
       break;
        case 5:
        Rechercher_contact();
       break;
         default:
                printf("Choix invalide!\n");
   
}
   }while(choix != 6);

    return 0;
}


void ajouter_contact(){
      printf("enter tailler\t");
    scanf("%d",&tailler);
    for(int i=0;i<tailler;i++){
    printf("enter nom personne\t");
    scanf(" %[^\n]s",arg.nom[i]);
     printf("enter email\t");
    scanf(" %[^\n]s",arg.email[i]);
     printf("enter  telephone\t");
    scanf(" %[^\n]s",arg.Num_telephone[i]);
}
}



void  Modifier_contact() {
    char verifie_nom[100];
    printf("enter nom personne you want to suprimer\t");
    scanf(" %[^\n]s",verifie_nom);
    for(int i=0;i<tailler;i++){
    if(strcmp(verifie_nom,arg.nom[i]) == 0 ){
     printf("enter nom personne\t");
    scanf(" %[^\n]s",arg.nom[i]);
     printf("enter email\t");
    scanf(" %[^\n]s",arg.email[i]);
     printf("enter  telephone\t");
    scanf(" %[^\n]s",arg.Num_telephone[i]);

    }
    else
    printf(" ERROR\n");
}
}

void Afficher_contact(){
    for(int i=0;i<tailler;i++){
    printf("nom est %s ||email est %s  ||telephone %s  \n",arg.nom[i],arg.email[i],arg.Num_telephone[i]);
    
    }
}



void Rechercher_contact(){
 char verifie_nom[100];
    printf("enter nom personne you want to Rechercher\t");
    scanf(" %[^\n]s",verifie_nom);
    for(int i=0;i<tailler;i++){
    if(strcmp(verifie_nom,arg.nom[i]) == 0 ){
       for(int i=0;i<tailler;i++){
    printf("nom est %s ||email est %s  ||telephone %s  \n",arg.nom[i],arg.email[i],arg.Num_telephone[i]);
    
    }
    }

}

    
}


