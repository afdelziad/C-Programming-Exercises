#include<stdio.h>
#include<math.h>
#define Nmax 100

/* ( exercice 1 )
void somme(int a , int b)
{
    int S ;

    S = a + b ;

    printf("S : %d \n",S);
}

void main ()
{
    int a , b ;

    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    somme(a,b);
}
*/
/* ( exercice 2 )
void multiplication(int N )
{
    int P ;

    for( int i = 1 ; i <= 10 ; i++ )
    {
        P = N * i ;

        printf("%d * %d = %d \n",N,i,N*i);
    }
}

void main ()
{
    int N ;

    printf("N : ");
    scanf("%d",&N);

    multiplication(N);
}
*/
/* ( exercice 3 )
void voyelle_consonne(char lettre)
{
    
    if ( lettre == 'a' || lettre == 'e'|| lettre == 'o'|| lettre == 'u'|| lettre == 'i'|| lettre == 'y' || lettre == 'A' || lettre == 'E'|| lettre == 'O'|| lettre == 'U'|| lettre == 'I'|| lettre == 'Y')
    {
        printf("lettre %c est une voyelle \n",lettre);
    }
    else
    {
        printf("lettre %c est une consonne \n",lettre);
    }
}

void main()
{
    char lettre ;

    printf("lettre : ");
    scanf("%c",&lettre);

    voyelle_consonne(lettre);
}
*/
/* ( exercice 4 )
void calculatrice(int a ,int b)
{
    int Somme , Produit , Soustraction , X ;
    float Division ;

    printf("Entrer l'operateur : ");
    scanf("%d",&X);

    switch ( X )
    {
    case 1 :
        Somme = a + b ;
        printf("Somme : %d \n",Somme);
        break;
    case 2 :
        Produit = a * b ;
        printf("Produit : %d \n",Produit);
        break;
    case 3 :
        Division = a / (float)b ;
        printf("Division : %.2f \n",Division);
        break;
    case 4 :
        Soustraction = a - b ;
        printf("Soustraction : %d \n",Soustraction);
        break;
    default :
        printf("Erreur ! \n");
    }
}

void main()
{
    int a , b , X ;

    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    calculatrice(a,b);
}
*/
/* ( exercice 5 )
void puissance(int X ,int n)
{
    int P ;

    P = pow(X,n);

    printf("Puissance : %d \n",P);
}

void main()
{
    int X , n ;

    printf("X : ");
    scanf("%d",&X);
    printf("n : ");
    scanf("%d",&n);

    puissance(X,n);
}
*/
/* ( exercice 6 )
void absolue(int a)
{
    if ( a < 0 )
    {
        printf("la valeur absolue de a est %d \n",(-1)*a);
    }
    else
    {
        printf("la valeur absolue de a est %d \n",a);
    }
}
void main ()
{
    int a ;

    printf("a : ");
    scanf("%d",&a);

    absolue(a);
}
*/
/* ( exercice 7 )
void maximum(int a,int b)
{
    if ( a > b )
    {
        printf("le maximum est %d \n",a);
    }
    else
    {
        printf("le maximum est %d \n",b);
    }
}
void main()
{
    int a , b ;

    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    maximum(a,b);
}
*/
/* ( exercice 8 )
void somme(int N)
{
    int S = 0 ;

    for ( int i = 1 ; i <= N ; i++)
    {
        S += i ;
    }

    printf("S : %d \n",S);
}
void main()
{
    int N ;

    printf("N : ");
    scanf("%d",&N);

    somme(N);
}
*/
/* ( exercice 9 )
void factorielle(int N)
{
    int F=1 ;

    for ( int i = 0 ; i < N ; i++)
    {
        F *= ( N - i );
    }
    
    printf("Factorielle de %d est %d \n",N,F);
}
void main ()
{ 
    int N ;

    printf("N : ");
    scanf("%d",&N);

    factorielle(N);
}
*/
/* ( exercice 10 )
int Somme , Produit , Division , Soustraction , a , b ;

void calculatrice(int a,int b)
{
    int X ;

    printf("Entrer l'operateur : ");
    scanf("%d",&X);

    switch ( X )
    {
    case 1 :
        Somme = a + b ;
        printf("Somme : %d \n",Somme);
        break;
    case 2 :
        Produit = a * b ;
        printf("Produit : %d \n",Produit);
        break;
    case 3 :
        Division = a / (float)b ;
        printf("Division : %.2f \n",Division);
        break;
    case 4 :
        Soustraction = a - b ;
        printf("Soustraction : %d \n",Soustraction);
        break;
    default :
        printf("Erreur ! \n");
    }
}
void main()
{
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de a : ");
    scanf("%d",&b);

    calculatrice(a,b);
}
*/
/* ( exercice 11 )
int F = 1 , N ;
void factorielle(int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        F *= ( N - i );
    }
    
    printf("fectorielle de %d est : %d \n",N,F);
}
void main()
{
    printf("entrer la valeur de N : ");
    scanf("%d",&N);

    factorielle(N);
}
*/
/* ( exercice 12 )
int temp , A , B ;
void Permutation(int *X,int *Y)
{
    temp = *X ;
    *X = *Y ;
    *Y = temp ;
}
void main()
{
    printf("entrer la valeur de A : ");
    scanf("%d",&A);
    printf("entrer la valeur de B : ");
    scanf("%d",&B);

    Permutation(&A,&B);

    printf("Apres !\n");
    printf("la valeur de A est devenu : %d \n",A);
    printf("la valeur de B est devenu : %d \n",B);
}
*/
/* ( exercice 12 )
int N , S = 0 , T[Nmax] ;

void Somme_Tableau(int T[],int N)
{
    for (int i = 0 ; i < N ; i++)
    {
        S += T[i] ;
    }
    printf("\n la somme des elements est : %d \n",S);
}
void Remplissage()
{
    for ( int i = 0 ; i < N ; i++)
    {
        scanf("%d",&T[i]);
    }
    
}
void Affichage()
{
    for (int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
}
void main()
{
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    printf("le Remplissage : \n");
    Remplissage();
    Affichage();
    Somme_Tableau(T,N);
}
*/
/* ( exercice 13 )
int N ;
void premier(int N)
{
    int  premier = 1 ;

    if (N <= 1)
    {
        premier = 0;
    }
    else
    {
        for ( int i = 2 ; i < N ; i++)
        {
            if (N % i == 0)
            {
                premier = 0;
                break;
            }
        }
    }

    if ( premier = 0 )
    {
        printf("%d est un nombre premier", N);
    }
    else
    {
        printf("%d n'est pas un nombre premier", N);
    }
}
void main()
{
    do
    {
        printf("entrer la valeur de N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    premier(N);
}
*/
/* ( exericice 14 )
int N , cpt = 0 , paire = 0 ;
float Pourcentage ;
void pourcentage()
{
    Pourcentage = ( paire / (float) (cpt-1) ) * 100 ;

    printf("le pourcentage de nombre paire est : %.2f \n",Pourcentage);
}
void main()
{
    do
    {
        printf("entrer la valeur de N : ");
        scanf("%d",&N);

        if ( N % 2 == 0 )
        {
            paire ++ ;
        }

        cpt ++ ;
    } while ( N != -1 );
    
    pourcentage();
}
*/
/* ( exercice 15 )
int a , b , r ;
void PGCD(int a,int b)
{
    r = a % b ;
    a = b ;
    b = a ;
    
    printf("le PGCD est : %d \n",r);
}
void main()
{
    do
    {
        printf("entrer la valeur de a : ");
        scanf("%d",&a);
    } while ( a <= 0 || a > Nmax );
    
    do
    {
        printf("entrer la valeur de b : ");
        scanf("%d",&b);
    } while ( b <= 0 || b > Nmax );

    PGCD(a,b);
}
*/
/* ( exercice 16 )
int n , U0 = 1 , U1 = 1 , Un ;
void suites(int n)
{
    for ( int i = 2 ; i < n ; i++)
    {
        Un = U0 + U1 ;
        U0 = U1 ;
        U1 = Un ;
    }
    
    printf("Un = %d \n",Un);
}
void main()
{
    do
    {
        printf("entrer la valeur de n : ");
        scanf("%d",&n);
    } while ( n <= 2 || n > Nmax );

    suites(n);
}
*/
/* ( exercice 17 )
long Chiffres , temp , tempo ;
int n = 0 , Somme = 0 , k , r ;

void nChiffres()
{
    while ( temp != 0 )
    { 
        temp = temp / 10 ;
        n++ ;
    }
    printf("le nombre de chiffres est : %d \n",n);
}

void kchiffre()
{
    if ( k > n )
    {
        printf("Erreur !");
    }
    else
    {
        while ( tempo != 0 )
        { 
            r = tempo % 10 ;

            if ( r == k )
            {
                printf("le chiffre est : %d \n",r);
            }

            tempo = tempo / 10 ;
        }
    }
}

void SomChiffres()
{
    while ( Chiffres != 0 )
    {
        Somme += Chiffres % 10 ;
        Chiffres = Chiffres / 10 ; 
    }
    printf("la somme des chiffres : %d \n",Somme);
}

void main()
{
    printf("entrer le chiffre : ");
    scanf("%ld",&Chiffres); 
    printf("Quelle chiffre voulez-vous afficher : ");
    scanf("%d",&k);

    temp = Chiffres ;
    tempo = Chiffres ;

    nChiffres();
    kchiffre();    
    SomChiffres();
}
*/
/* ( exercice 18 )
double X ;
int N ;

void Exp1()
{
    int Exp1 ;

    Exp1 = pow(X,N) ;

    printf("Exp1 = %i \n",Exp1);

    Exp2();
}

void Exp2()
{ 
    int Exp2 ;

    Exp2 = Exp1 ;
}

void main()
{
    printf("X : ");
    scanf("%f",&X);
    printf("N : ");
    scanf("%d",&N);

    Exp1();
}
*/
/* ( exercice 19 )
int N , T[Nmax] ;

void Saisir_Taille()
{
    do
    {
        printf("entrer la taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
}

void Remplir_Tableau()
{
    for ( int i = 0 ; i < N ; i++ )
    {
        scanf("%d",&T[i]);
    }
    printf("\n");
}

void Afficher_Tableau()
{
    for ( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    printf("\n");
}

void Supprimer_Zeros()
{
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 0)
        {
            for (int j = i; j < N - 1; j++)
            {
                T[j] = T[j + 1];
            }

            N--; 
            i--;   
        }
    }
}

void Afficher_Tableau_Modifier()
{
    for ( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    
}

void main()
{
    Saisir_Taille();
    Remplir_Tableau();
    Afficher_Tableau();
    Supprimer_Zeros(); 
    printf("\n le tableau apres la suprression de 0 est : \n");
    Afficher_Tableau_Modifier();
}
*/
/* ( exercice 20 )
int A , B ;
int temp1 , temp2 , *P1 = &A , *P2 = &B ;

void echange()
{
    if ( *P1 * *P2 > 0 )
    {
        temp1 = *P1 ;
        *P1 = *P2 ;
        *P2 = temp1 ;
    }
    else
    {
        temp1 = *P1 + *P1 ;
        temp2 = *P1 * *P2 ;

        *P1 = temp1 ;
        *P2 = temp2 ;
    }
    
}
void main()
{   
    printf("Entrer la valeur de A : ");
    scanf("%d",P1);
    printf("Entrer la valeur de B : ");
    scanf("%d",P2);

    echange();

    printf("la nouvelle valeur de A est : %d \n",*P1);
    printf("la nouvelle valeur de B est : %d ",*P2);
}
*/
/* ( exercice 21 )
void Divisor(int N)
{
    for ( int i = 1 ; i <= N/2 ; i++)
    {
        if ( N % i == 0 )
        {
            printf("%d \t",i);
        }
    }
    
    printf("\n");
}

int Sum_Divisor(int N)
{
    int S = 0 ;

    for ( int i = 1 ; i <= N/2 ; i++)
    {
        if ( N % i == 0 )
        {
            S += i ;
        }
    }

    return S ;
}

int Perfect(int N, int S)
{
    if ( S == N )
    {
        return 1 ;
    }
    else
        return 0 ;

}

void main()
{
    int N , S ;

    printf("Enter the value of N : ");
    scanf("%d",&N);

    printf("The divisors of %d are : \n",N);

    Divisor(N);

    S = Sum_Divisor(N);

    if ( Perfect(N,S) )
    {
        printf("%d is a perfect number \n",N);
    }
    else 
    {
        printf("%d is not a perfect number \n",N);
    }

}
*/
/* ( exercice 22 )
int Sum_Divisor(int N)
{
    int S = 0 ;

    for ( int i = 1 ; i <= N/2 ; i++ )
    {
        if ( N % i == 0 )
        {
            S += i ;
        }
    }
    
    return S ;
}

int Amicable(int A,int B)
{
    if ( Sum_Divisor(A) == B && Sum_Divisor(B) == A )
    {
        return 1 ;
    }
    else
        return 0 ;
    
}

void main()
{
    int A , B ;

    printf("Enter the value of A : ");
    scanf("%d",&A);

    printf("Enter the value of B : ");
    scanf("%d",&B);

    if ( Amicable(A,B) )
    {
        printf("%d and %d are amicable numbers \n",A,B);
    }
    else
    {
        printf("%d and %d are not amicable numbers.\n",A,B);
    }

}
*/

float Filling(float *T,int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("T[%d] : ",i+1);
        scanf("%f",T+i);
    }

}

float Minimal(float *T,int N)
{
    float min ;
    
    min = T[0] ; 

    for ( int i = 0 ; i < N ; i++)
    {
        if ( min > T[i] )
        {
            min = T[i] ;
        }
    }
    
    return min ;
}

float Maximal(float *T,int N)
{
    float max ;
    
    max = T[0] ; 

    for ( int i = 0 ; i < N ; i++)
    {
        if ( max < T[i] )
        {
            max = T[i] ;
        }
    }
    
    return max ;
}

float Average(float *T,int N)
{
    float M , S = 0 ;

    for ( int i = 0 ; i < N ; i++)
    {
        S += T[i] ;
    }
    
    return M = S / (float)N ;

}

int Occurence(float *T,float X,int N)
{
    int cpt = 0 ;

    for ( int i = 0 ; i < N ; i++)
    {
        if ( T[i] == X )
        {
            cpt++ ;
        }
    }
    
    return cpt ;
}

void Sort_of_Notes(float *T,int N)
{
    float temp ;

    for ( int i = 0 ; i < N-1 ; i++)
    {
        for ( int j = 0 ; j < N ; j++)
        {
            if ( T[i] > T[j] )
            {
                temp = T[i] ;
                T[i] = T[j] ;
                T[j] = temp ;
            }    
        }
    }

}

void main() 
{ 
    float T[Nmax] , X ;
    int N ;
    
    printf("Enter the nombers of grades : ");
    scanf("%d",&N);
    
    Filling(T, N);

    printf("The note : \n");

    Display(T, N);
    
    printf("\nThe minimal note : %.2f\n",Minimal(T,N));
    printf("The maximal note : %.2f\n",Maximal(T,N));
    printf("The average : %.2f\n",Average(T,N));

    printf("\nEnter a nomber to search : "); 
    scanf("%f", &X); 
    
    printf("Nombre of occurrence de %.2f : %d\n",X,Occurence(T,X,N));

    Sort_of_Notes(T,N); 
    
    printf("\nThe grades sorts an ascending ordre :\n");
    
    Display(T, N);

}
