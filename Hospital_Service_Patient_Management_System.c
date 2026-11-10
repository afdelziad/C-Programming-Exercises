#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Patient
{
    char ID[10] ;
    char Nom[30] ;
    int Age ;
} Patient ;

typedef struct Medecin
{
    int ID ;
    char Nom[30] ;
    int Nombre_Patient ;
    Patient *TP ;
} Medecin ;

typedef struct Service
{
    char Nom[50] ;
    int Nombre_Medecin ;
    Medecin *TM ;
} Service ;

void Saisir_Patient(Patient *P)
{
    printf("ID : ");
    fgets(P->ID,10,stdin);
    P->ID[strcspn(P->ID,"\n")] = '\0' ;

    printf("Le nom : ");
    fgets(P->Nom,30,stdin);
    P->Nom[strcspn(P->Nom,"\n")] = '\0' ;

    printf("Age : ");
    scanf("%d",&P->Age);
    getchar();
}

void Saisir_Medecin(Medecin *M)
{
    printf("--- Les informations du medecin : ---\n");

    printf("ID : ");
    scanf("%d",&M->ID);
    getchar();

    printf("Nom : ");
    fgets(M->Nom,30,stdin);
    M->Nom[strcspn(M->Nom,"\n")] = '\0' ;

    printf("Le nombre de patient : ");
    scanf("%d",&M->Nombre_Patient);
    getchar();

    M->TP = malloc(M->Nombre_Patient*sizeof(Patient));

    if ( M->TP == NULL )
    {
        printf("Erreur d'allocation \n");

        M->Nombre_Patient = 0 ;
        return ;
    }
    
    for ( int i = 0 ; i < M->Nombre_Patient ; i++ )
    {
        printf("- Patient %d -\n",i+1);

        Saisir_Patient(&M->TP[i]);
    }   
}

void Saisir_Service(Service *S)
{
    printf("Nom du service : ");
    fgets(S->Nom,50,stdin);
    S->Nom[strcspn(S->Nom,"\n")] = '\0' ;

    printf("Nombre de medecin : ");
    scanf("%d",&S->Nombre_Medecin);
    getchar();

    S->TM = malloc(S->Nombre_Medecin*sizeof(Medecin));

    if ( S->TM == NULL )
    {
        printf("Erreur aloocation \n");

        S->Nombre_Medecin = 0 ;
        return ;
    }
    
    for ( int i = 0 ; i < S->Nombre_Medecin ; i++)
    {
        printf("=== Medecin %d ===\n",i+1);

        Saisir_Medecin(&S->TM[i]);
    }

}

void Afficher_Patient(Patient *P)
{
    printf("ID : %s \t Nom : %s \t Age : %s \n",P->ID,P->Nom,P->Age);
}

void Afficher_Medecin(Medecin *M)
{
    printf("ID : %d \n",M->ID);
    printf("Nom : %s \n",M->Nom);
    printf("Nombre de patient : %d \n",M->Nombre_Patient);

    for ( int i = 0 ; i < M->Nombre_Patient ; i++)
    {
        Afficher_Patient(&M->TP[i]);
    }

}

void Afficher_Service(Service *S)
{
    printf("=== Service %s ===\n",S->Nom);

    printf("Le nombre de medecin : %d \n",S->Nombre_Medecin);

    for ( int i = 0 ; i < S->Nombre_Medecin ; i++)
    {
        printf("--- Medecin %d ---\n",S->Nom);

        Saisir_Medecin(&S->TM[i]);
    }
    
}

int Recherche_Patient(Service S,char *Identifiant)
{
    for ( int i = 0 ; i < S.Nombre_Medecin ; i++)
    {
        for ( int j = 0 ; j < S.TM[i].Nombre_Patient ; j++)
        {
            if ( strcmp(S.TM[i].TP[j].ID , Identifiant) == 0 )  
            {
                return S.TM[i].ID ;
            }            
        } 
    }
    
    return -1 ;
}

int Compter_Patient(Service S)
{
    int Total = 0 ;

    for ( int i = 0 ; i < S.Nombre_Medecin ; i++)
    {
        Total += S.TM[i].Nombre_Patient ;
    }
    
    return Total ;
}

void main()
{
    int N , Medecin = -1 ;
    char Identifiant[30] ;

    do
    {
        printf("Entrer le nombre de service : ");
        scanf("%d",&N);
    } while ( N <= 0 );
    
    getchar();

    Service *T = malloc(N*sizeof(Service)) ;
    
    if ( T == NULL )
    {
        printf("Erreur d'allocation \n");
        return ;
    }
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("==== SERVICE %d ====\n",i+1);

        Saisir_Service(&T[i]);
    }
    
    for ( int i = 0 ; i < N ; i++)
    {
        Afficher_Service(&T[i]);
    }
    

    printf("Entrer l'ID du patient que vous cherchez : ");
    fgets(Identifiant,30,stdin);
    Identifiant[strcpsn(Identifiant,"\n")] = '\0' ;

    for ( int i = 0 ; i < N && Medecin == -1 ; i++)
    {
        Medecin = Recherche_Patient(T[i],Identifiant);
    }
        

    if ( Medecin != -1 )
    {
        printf("Patient trouve , l'ID de son medecin est : %s \n",Medecin);
    }
    else
    {
        printf("Aucun patient avec cet ID dans tous les medecins \n");
    }

    for ( int i = 0 ; i < N ; i++)
    {
        printf("Le nombre total de patients du service %s est : %d \n",T[i].Nom,Compter_Patient(T[i]));
    }
    
}
