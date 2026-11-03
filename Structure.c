#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Nmax 100

/* ( exercice 1 )
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
    
*/
/* ( exercice 2 )

typedef struct Article
{
    char Name[25] ;
    char Ref[25] ;
    float Price_Out_Taxes ;
} Article ;

float Price_TTC(Article A)
{
    return A.Price_Out_Taxes + A.Price_Out_Taxes * 0.2 ; 
}

void Display(Article A)
{
    printf("--- Information of the article : ---\n");

    printf("The name : %s \n",A.Name);
    printf("The reference : %s \n",A.Ref);
    printf("The price TTC : %.2f \n",Price_TTC(A));
}

void main()
{
    Article A ;

    printf("Enter the name of the article : ");
    fgets(A.Name,25,stdin);

    A.Name[strcspn(A.Name,"\n")] = '\0' ;
    
    printf("Entre his reference : ");
    scanf("%s",A.Ref);

    printf("Entre the price out taxes : ");
    scanf("%f",&A.Price_Out_Taxes);

    Display(A);
}

*/

typedef struct Student
{
    char Registration_Number[20];
    float Notes[8] ;
}Student ;

void Input(Student *S,int N)
{
    for ( int i = 0 ; i < N ; i++) 
    { 
        printf("\n--- Student %d ---\n",i+1); 
        
        printf("Registration number : "); 
        scanf("%19s",(S+i)->Registration_Number);
        
        for (int j = 0; j < 8; j++) 
        { 
            printf("Note %d : ",j+1); 
            scanf("%f",&(S+i)->Notes[j]); 
        } 

        getchar();
    }
}

float Average(Student *S)
{
    float Sum = 0 ;

    for ( int i = 0 ; i < 8 ; i++)
    {
        Sum += S->Notes[i];
    }

    return Sum / 8.0 ;
}

void Output(Student *S,int N)
{
    float Sum = 0 ;

    for ( int i = 0 ; i < N ; i++)
    {
        printf("--- Student %d : ---\n",i+1);

        printf("Registration number %s \n",(S+i)->Registration_Number);

        for ( int j = 0 ; j < 8 ; j++)
        {
            printf("Notes %d : %.2f \n",j+1,(S+i)->Notes[j]);
        }
        
        printf("Average of his grades : %.2f \n",Average(S+i));
    }
     
}

void Display_Succesful_Students(Student *S,int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        if ( Average(S+i) >= 10 )
        {
            printf("The student with %s registration number has been admitted \n",(S+i)->Registration_Number);
        }
        
    }
    
}

void Sort_Students(Student *S,int N)
{
    Student Temp ;

    for ( int i = 0 ; i < N-1 ; i++)
    {
        for ( int j = i+1 ; j < N ; j++)
        {
            if ( Average(S+i) < Average(S+j) )
            {
                Temp = *(S+i) ;
                *(S+i) = *(S+j) ;
                *(S+j) = Temp ;
            }  
        }
    }

}

void main()
{
    int N ;

    do
    {
        printf("Enter the number of the student : ");
        scanf("%d",&N);
    } while ( N <= 0 );
    
    getchar();

    Student *E = malloc(N*sizeof(Student));

    if ( E == NULL )
    {
        printf("Memor allocation failed \n");
        return ;
    }
    
    Input(E,N);

    printf("\n--- List of the students ---\n");

    Output(E,N);

    printf("\n--- Succesful students ---\n");

    Display_Succesful_Students(E,N);

    Sort_Students(E,N);

    printf("\n--- Students sorted by average (Descending) ---\n");

    Output(E,N);

    free(E);
}
