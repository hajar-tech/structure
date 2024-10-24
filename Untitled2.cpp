#include<stdio.h>
struct Adresse{
	char rue[60];
	char ville[100]; 
	int codePostal;
}a1;
struct Personne{
	char nom[50];
	int age;
	struct Adresse adresse;
};
int main(){
	int n,i;
	printf("entrer le nombre d\'instance : ");
	scanf("%d",&n);
	struct Personne tab[n];
	for(i=0;i<n;i++){
		printf("entrer le nom du personne %d : ",i+1);
	    scanf("%s",&tab[i].nom);
	    printf("entrer l\'age du personne %d : ",i+1);
	    scanf("%d",&tab[i].age);
	   // for(i=0;i<n;i++){
	    	printf("entrer la rue du personne %s : ",i+1);
	        scanf("%s",&tab[i].adresse.rue);
	        printf("entrer la ville du personne %s : ",i+1);
	        scanf("%s",&tab[i].adresse.ville);
	        printf("entrer le code postal du personne %s : ",i+1);
	        scanf("%s",&tab[i].adresse.codePostal);
		//}
		
	}
	printf("information sur les personnes: ");
	for(i=0;i<n;i++){
		printf("Personne %d \n Nom : %s\n Age : %d\n Rue : %s\n Ville : %s\n Code postal : %d ",i+1,tab[i].nom,tab[i].nom,
		tab[i].adresse.rue,tab[i].adresse.ville,tab[i].adresse.codePostal);
	
	}
	
	return 0;
}
