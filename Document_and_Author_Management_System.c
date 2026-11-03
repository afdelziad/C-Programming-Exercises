#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Date
{
    int jour ;
    int mois ;
    int annee ;
} Date ;

typedef struct Auteur
{
    char Nom[25] ;
    Date Date_Naissance ;
    Date Date_Deces ;
} Auteur ;

typedef struct Document
{
    Auteur Auteur ;
    char Titre[50] ;
    int Nb_Pages ;
} Doc ;

/*
void Saisir_Document(Doc *D)
{
    printf("--- Saisir les informations: ---");

    printf("Entrer le nom de l'auteur : ");
    fgets(D->Auteur.Nom,25,stdin);

    D->Auteur.Nom[strscpn(D->Auteur.Nom,"\n")] = '\0' ;

    printf("Entrer la date de naissance : ");

    printf("Jour : ");
    scanf("%d",&D->Auteur.Date_Naissance.jour);

    printf("Mois : ");
    scanf("%d",&D->Auteur.Date_Naissance.mois);

    printf("Annee : ");
    scanf("%d",&D->Auteur.Date_Naissance.annee);

    printf("Est ce que l'auteur est encore vivant ( vivant = 1 / mort = 0 ) : ");

    int vivant ;

    scanf("%d",&vivant);

    if ( vivant )
    {
        D->Auteur.Date_Deces.jour = 0 ;
        D->Auteur.Date_Deces.mois = 0 ;
        D->Auteur.Date_Deces.annee = 0 ; 
    }
    else
    {
        printf("Entrer la date de deces : \n");
        
        printf("Jour : ");
        scanf("%d",&D->Auteur.Date_Deces.jour);

        printf("Mois : ");
        scanf("%d",&D->Auteur.Date_Deces.mois);

        printf("Annee : ");
        scanf("%d",&D->Auteur.Date_Deces.annee);
    }

    getchar();

    printf("Entrer le titre du document : ");
    fgets(D->Titre,50,stdin);

    D->Titre[strscpn(D->Titre,"\n")] = '\0' ;

    printf("Entrer le nombre de pages : ");
    scanf("%d",&D->Nb_Pages);

    getchar();
}
*/
void Saisir_Date(Date *D)
{
    printf("Jour : ");
    scanf("%d",&D->jour);

    printf("Mois : ");
    scanf("%d",&D->mois);

    printf("Annee : ");
    scanf("%d",&D->annee);
}

void Saisir_Auteur(Auteur *A)
{
    int vivant ;

    printf("Entrer le nom de l'auteur : ");
    fgets(A->Nom,25,stdin);

    A->Nom[strscpn(A->Nom,"\n")] = '\0' ;

    printf("Entrer la date de naissance : \n");

    Saisir_Date(&A->Date_Naissance);

    printf("Est ce que l'auteur est decede ( vivant = 1 ou mort = 0 ) : ");
    scanf("%d",&vivant);

    getchar();

    if ( vivant == 1 )
    {
        A->Date_Deces.jour = 0 ;
        A->Date_Deces.mois = 0 ;
        A->Date_Deces.annee = 0 ;
    }
    else
    {
        printf("Entrer la date de deces : \n");
        
        printf("Jour : ");
        scanf("%d",&A->Date_Deces.jour);

        printf("Mois : ");
        scanf("%d",&A->Date_Deces.mois);

        printf("Annee : ");
        scanf("%d",&A->Date_Deces.annee);
    }
    getchar();
}


void Saisir_Document(Doc *D)
{
    printf("Entrer les informations de l'auteur : \n");

    Saisir_Auteur(&D->Auteur);

    printf("Entrer le titre du document : ");
    fgets(D->Titre,50,stdin);

    D->Titre[strscpn(D->Titre,"\n")] = '\0' ;

    printf("Entrer le nomre de pages : ");
    scanf("%d",&D->Nb_Pages);

}

int Comparer_Documents(Doc D1,Doc D2)
{
    return (strcmp(D1.Auteur.Nom,D2.Auteur.Nom) == 0 && strcmp(D1.Titre,D2.Titre) == 0 && D1.Nb_Pages == D2.Nb_Pages) ;
}

int Nb_Documents_Auteur_Vivant(Doc T[],int N)
{
    int cpt = 0 ;

    for ( int i = 0 ; i < N ; i++)
    {
        if ( T[i].Auteur.Date_Deces.jour == 0 && T[i].Auteur.Date_Deces.mois == 0 && T[i].Auteur.Date_Deces.annee == 0 )
        {
            cpt ++ ;
        }
    }
    
    return cpt ;
}

void main()
{
    int N ;

    printf("Entrer le nombre de documents que vous voulez saisir : ");
    scanf("%d",&N);

    getchar();

    Doc T[N] ;

    for ( int i = 0 ; i < N ; i++)
    {
        printf("=== Document %d : ===\n");

        Saisir_Document(&T[i]);
    }
    
    if ( N >= 2 )
    {
        if ( Comparer_Documents(T[0],T[1]) )
        {
            printf("Les deux premiers documents sont egaux \n");
        }
        else
        {
            printf("Les deux premiers documents sont differents \n");
        }
    }
    
    printf("Le nombre de documents redigee avec des auteurs vivants est : %d \n",Nb_Documents_Auteur_Vivant(T,N));

}