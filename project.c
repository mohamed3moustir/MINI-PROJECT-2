#include <stdio.h>
#include <string.h>
struct Contact{
    char nom[100];
    char email[100];
    char Num_telephone[100];

};
struct Contact arg[100];
int size = 0;
// function 1
void ajouter_contact();
// function 2
void Afficher_contact();
// funtion 3
void  Modifier_contact();
//function 4
void Supprimer_contact();
//function 5
void Rechercher_contact();

int main() {
   
    int choix;

    do{
    printf("_________________________________________________________________________________________________________________\n");	
     printf("[1]: Ajouter un Contact \n");
     printf("[2]: Modifier un Contact\n");
     printf("[3]: Supprimer un Contact\n");
     printf("[4]: Afficher Tous les Contacts\n");
     printf("[5]: Rechercher un Contact\n");
	  printf(" enter le choix\n"); 
     scanf("%d",&choix);
     printf("____________________________________________________________________________________________________________\n");
   switch(choix){

       case 1:
       ajouter_contact();
       break;
        case 2:
        Modifier_contact();
       break;
        case 3:
        Supprimer_contact();
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
    printf("enter nom personne\t");
    scanf(" %[^\n]s",&arg[size].nom);
     printf("enter email\t");
    scanf(" %[^\n]s",&arg[size].email);
     printf("enter  telephone\t");
    scanf(" %[^\n]s",&arg[size].Num_telephone);
     printf("____________________________________________________________________________________________________________\n");
     size++;
}



void  Modifier_contact() {
    char verifie_nom[100];
    printf("enter nom personne you want to Modifier\t");
    scanf(" %[^\n]s",&verifie_nom);
    for(int i=0;i<size;i++){
    if(strcmp(verifie_nom,arg[i].nom) == 0 ){
     printf("enter nom personne\t");
    scanf(" %[^\n]s",&arg[i].nom);
     printf("enter email\t");
    scanf(" %[^\n]s",&arg[i].email);
     printf("enter  telephone\t");
    scanf(" %[^\n]s",&arg[i].Num_telephone);
 printf("____________________________________________________________________________________________________________\n");
    }
   
}
}

void Afficher_contact(){
    for(int i=0;i<size;i++){
    printf("nom est %s ||email est %s  ||telephone %s  \n",arg[i].nom,arg[i].email,arg[i].Num_telephone);

    }
}

void Supprimer_contact(){
	char supprime_nom[100];
	int i,j;
    printf("enter nom personne you want to Supprimer\t");
    scanf(" %[^\n]s",&supprime_nom);
	for( i=0 ;i<size;i++){
		if(strcmp(supprime_nom,arg[i].nom)==0)
		{
		for( j=i+1;j<size;j++){
			strcpy(arg[i].nom,arg[j].nom);
			strcpy(arg[i].email,arg[j].email);
			strcpy(arg[i].Num_telephone,arg[j].Num_telephone);
					}
					size--;

				}else{
					printf(" le nom incrouvale\n");
				}
 printf("____________________________________________________________________________________________________________\n");
	}

}

void Rechercher_contact(){
 char recherch_nom[100];
    printf("enter nom personne you want to Rechercher\t");
    scanf(" %[^\n]s",&recherch_nom);
    for(int i=0;i<size;i++){
    if(strcmp(recherch_nom,arg[i].nom) == 0 ){
       
    printf("nom est %s ||email est %s  ||telephone %s  \n",arg[i].nom,arg[i].email,arg[i].Num_telephone);
     printf("____________________________________________________________________________________________________________\n");
    
    }

}


}
