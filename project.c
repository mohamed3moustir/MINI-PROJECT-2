// Online C compiler to run C program online
#include <stdio.h>
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
       
       case 1:ajouter_contact();
       break;
        case 2:
       break;
        case 3:
       break;
        case 4:Afficher_contact();
       break;
        case 5:
       break;
         default:
                printf("Choix invalide!\n");
   
}
   }while(choix != 5);

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
void Afficher_contact(){
    for(int i=0;i<tailler;i++){
    printf("nom est %s ||email est %s  ||telephone %s  \n",arg.nom[i],arg.email[i],arg.Num_telephone[i]);
    
    }
}















