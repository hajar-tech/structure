#include<stdio.h>
int size =0;

//declaaration de la structure Adresse
struct Adresse{
	char rue[60];
	char ville[100]; 
	int codePostal;
};

//declaaration de la structure Personne
struct Personne{
	char nom[50];
	int age;
	struct Adresse adresse;
};

void ajouter (struct Personne tab[],int n ){

n=size+n;
	
//	if (n>100){
//		printf("vous avez depassez la taille maximale du tableau.\n");
//	}
     
    	for(int i=size;i<n;i++){
		printf("entrer le nom du personne %d : ",i+1);
	    scanf("%s",tab[i].nom);
	    
	    printf("entrer l\'age du personne %d : ",i+1);
	    scanf("%d",&tab[i].age);
	    
	    printf("entrer la rue du personne %d : ",i+1);
	    scanf("%s",tab[i].adresse.rue);
	    
	    printf("entrer la ville du personne %d : ",i+1);
	    scanf("%s",tab[i].adresse.ville);
	    
	    printf("entrer le code postal du personne %d : ",i+1);
	    scanf("%d",&tab[i].adresse.codePostal);
	    size=i+1;
	}
	
}

//declaration de la fonction afficher
void afficher(struct Personne tab[],int n ){
	//affichage des information de chaque personne
	  
	  if (n==0){
	  		printf("il y\'a pas d\'information a afficher il faut ajouter des informations au premier\n.");
	  }else{
	  	 // n=size+n;
	    	
	  for(int i=0;i<n;i++){ 
	    printf("\t ********** information sur les personnes: %d**********\t\n",i+1);
		printf(" Nom : %s\n Age : %d\n Rue : %s\n Ville : %s\n Code postal : %d\n ",tab[i].nom,tab[i].age,
		tab[i].adresse.rue,tab[i].adresse.ville,tab[i].adresse.codePostal);
	   size=i+1;
	}
	 }
}

//declaration de la fonction modifier
void modifier(struct Personne tab[] ,int n ,int indice){
	
	if (n==0){
	  		printf("il y\'a pas d\'information a modifier il faut ajouter des informations au premier.\n");
	  }else{
	  	    printf("\nentrer l\'indice du personne que voullez vous modifier: " );
	        scanf("%d", &indice);
	         if(indice>n){
	        	printf("vous avez depassez le nombre de personne");
	         }else{
	
	              printf("entrer le nouveau nom du personne %d : ",indice);
	              scanf("%s",tab[indice-1].nom);
	    
	              printf("entrer le nouveau age du personne %d : ",indice);
	              scanf("%d",&tab[indice-1].age);
	    
	              printf("entrer la nouvelle rue du personne %d : ",indice);
	              scanf("%s",tab[indice-1].adresse.rue);
	     
	              printf("entrer la nouvelle ville du personne %d : ",indice);
	              scanf("%s",tab[indice-1].adresse.ville);
	    
	              printf("entrer le nouveau code postal du personne %d : ",indice);
	              scanf("%d",&tab[indice-1].adresse.codePostal);
           }
      }
}

void suprimer(struct Personne tab[] ,int n ,int indice){
	
		if (n==0){
	  		printf("il y\'a pas d\'information a suprimer . il faut ajouter des informations au premier.\n");
	  }else{
	  	printf("\n entrer l\'indice du personne que voullez vous suprimer: " );
	    scanf("%d", &indice);
	       if(indice>n){
		       printf("vous avez depassez le nombre de personne");
	       }else{
		       for (int i = indice-1; i<n; i++){
		    	tab[i]=tab[i+1];
		
	    	}
	    	n--;
		printf("La personne %d a ete supprimee\n",indice);
	
	}}
}

int main(){

    int choix, n ,indice ; 
    printf("entrer le nombre de personne a ajouter : ");
	scanf("%d",&n);
	
	struct Personne tab[n]; // Un tableau pour stocker jusqu'à n personnes
    while (1){
	printf("\t ******** menu ******** \t  \n");
    printf("1 : ajouter\n");
	printf("2 : afficher\n");
	printf("3 : modifier\n");
	printf("4 : suprimer\n");
	printf("choisir un nombre de 1 a 4 : \n");
	scanf("%d",&choix);
	switch(choix){
		case 1:
			ajouter(tab,n);
			break;
		case 2:
			afficher(tab,n);
			break;
		case 3:
			modifier(tab,n, indice);
			break;
		case 4:
			suprimer(tab,n,indice);
			break;
		default : printf("veuillez choisir 1 , 2 , 3 ou 4");

	
}}
return 0;
}


