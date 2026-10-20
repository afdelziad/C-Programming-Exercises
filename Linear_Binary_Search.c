#include<stdio.h>

/*
int N , X , result ;

int Linear_Search(int T[],int N ,int X)
{
    for ( int i = 0 ; i < N ; i++)
    {
        if ( T[i] == X )
        {
            return i ;
        }
    }
    
    return -1 ;
}

void main()
{
    
    printf("Enter the value of N : ");
    scanf("%d",&N);

    int  T[N] ;

    for ( int i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("Enter the number you want to find :");
    scanf("%d",&X);

    result = Linear_Search(T,N,X);

    if ( result == -1 )
    {
        printf("The value cannot be found \n");
    }
    else
    {
        printf("The value %d is found and finds itself int the position %d \n",X,result);
    }

}
*/
/*
int max1 , max2 , max3 , N ;

int Search_3max(int T[],int N)
{
    max1 = max2 = max3 = T[0] ;

    for ( int i = 0 ; i < N ; i++)
    {
        if ( T[i] > max1 )
        {
            max3 = max2 ;
            max2 = max1 ;
            max1 = T[i] ;
        }
        else if ( T[i] > max2 )
        {
            max3 = max2 ;
            max2 = T[i] ;
        }
        else
        {
            T[i] = max3 ;
        }
    }
    
    printf("The 3 bigest numbers are : %d , %d and %d \n",max1,max2,max3);
}

void main()
{
    printf("Enter the value of N :");
    scanf("%d",&N);

    int T[N] ;

    for ( int i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }

    Search_3max(T,N);
}
*/
/*

int N , X , result ;

void Sort(int T[],int N)
{
    int temp ;

    for ( int i = 0 ; i < N - 1 ; i++)
    {
        for ( int j = i ; j < N ; j++)
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

int Binary_Search(int T[],int X ,int inf,int sup)
{
    while ( inf <= sup )
    {
        int Mil = ( sup + inf ) / 2 ;

        if ( T[Mil] == X )
        {
            return Mil ;
        }
        else if ( T[Mil] < X )
        {
            inf = Mil + 1 ; 
        }
        else
        {
            sup = Mil - 1 ;
        }
    }

    return -1 ;
    
}

void main()
{
    printf("Enter the value of N : ");
    scanf("%d",&N);

    int T[N];

    for ( int i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("Enter the number you want to find : ");
    scanf("%d",&X);

    Sort(T,N);

    result = Binary_Search(T,X,0,N-1);

    if ( result == -1 )
    {
        printf("The number be cannot be found \n");
    }
    else
    {
        printf("The number %d is found and is located in %d \n",X,result+1);
    }

}
*/
int N , X , temp , result ;

void Sort(int T[],int N)
{
    for ( int i = 0 ; i < N-1 ; i++)
    {
        for ( int j = i+1 ; j < N ; j++)
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

int Binary_Search(int T[],int X,int inf,int sup)
{
    int result = -1 ;

    while ( inf <= sup )
    {
        int Mil = ( inf + sup ) / 2 ;

        if ( T[Mil] == X )
        {
            result = Mil ;
        }
        else if ( T[Mil] < X )
        {
            inf = Mil + 1 ;
        }
        else
        {
            sup = Mil - 1 ;
        }
    }
    
    return result ;
}

void main()
{
    printf("Enter The value of N : ");
    scanf("%d",&N);

    int T[N];

    for ( int i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }

    Sort(T,N);

    Binary_Search(T,X,0,N-1);

    if ( result == -1 )
    {
        printf("The number cannot be found \n");
    }
    else
    {
        printf("The numbre %d is found and is located in %d \n",X,result+1);
    }
    
}