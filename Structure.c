#include<stdio.h>
#include<string.h>

typedef struct 
{
    char Name[50] ;
    int Number_Shirt ;
    char Position[50] ; 
}Players ;

void main()
{
    int N ;

    printf("Enter how many players you want to input : ");
    scanf("%d",&N);

    getchar();

    Players E[N] ;
    Players *P = E ;

    for ( int i = 0 ; i < N ; i++)
    {
        printf("\nPlayer %d \n",i+1);

        printf("Full name : ");
        fgets((P+i)->Name,50,stdin);

        (P+i) -> Name[strcspn(((P+i)->Name),"\n")] = '\0' ;

        printf("Shirt Number : ");
        scanf("%d",&(P+i)->Number_Shirt);

        getchar();

        printf("Poste : ");
        fgets((P+i)->Position,50,stdin);

        (P+i) -> Position[strcspn(((P+i)->Position),"\n")] = '\0' ;
    }
    

    printf("--- Players information : ---\n");

    for ( int i = 0 ; i < N ; i++)
    {
        printf("\n Player %d \n",i+1);

        printf("Full name : %s \n",(P+i)->Name);
        printf("Shirt Number : %d \n",(P+i)->Number_Shirt);
        printf("Position : %s \n",(P+i)->Position);
    }
    
}

