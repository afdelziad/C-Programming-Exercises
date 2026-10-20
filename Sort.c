#include<stdio.h>
#define Nmax 100

/* ( Sort selection )

void Change(int *a , int *b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;
}

void Sort_Selection_Ascending(int T[],int N)
{
    int min ;

    for ( int i = 0 ; i < N - 1 ; i++)
    {
        min = i ;

        for ( int j = i +1 ; j < N ; j++)
        {
            if ( T[j] < T[min] )
            {
                min = j ;
            }    
        }
        
        Change(&T[min] , &T[i]);
    }

    printf("\n");
}

void Display(int T[], int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
    
}

void Sort_Selection_Descending(int T[],int N)
{
    int max ;

    for ( int i = 0 ; i < N - 1 ; i++ )
    {
        max = i ;

        for ( int j = i + 1 ; j < N ; j++)
        {
            if ( T[max] < T[j] )
            {
                max = j ;
            }   
        }   

        Change(&T[max],&T[i]);
    }
}

void main()
{
    int T[Nmax] , N ;

    do
    {
        printf("The value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Val %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("The initial table : \n");

    for( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");

    Sort_Selection_Ascending(T,N);
    
    printf("The table sorts in ascending order : \n");

    Display(T,N);

    Sort_Selection_Descending(T,N);

    printf("\n The table sorts in descending order : \n");

    Display(T,N);

}
*/
/* ( Sort Insertion )

void Sort_Insertion_Ascending(int T[], int N)
{
    int temp , j , i ;

    for ( i = 1 ; i < N ; i++)
    {
        temp = T[i] ;

        for ( j = i-1 ; j >= 0 && temp < T[j] ; j--)
        {
            T[j+1] = T[j] ;
        }
        
        T[j+1] = temp ;

    }
    
}

void Sort_Insertion_Descending(int T[],int N)
{
    int i , j ,temp ;

    for ( i = 1 ; i < N ; i++ )
    {
        temp = T[i] ;
        
        for ( j = i-1 ; j >= 0 && temp > T[j] ; j--)
        {
            T[j+1] = T[j];
        }
        
        T[j+1] =temp ;
    }
    
}

void Display(int T[], int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }

    printf("\n");
    
}
void main()
{
    int T[Nmax] , N ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Val %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("The initial table : ");
    
    for( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }

    printf("\n");

    Sort_Insertion_Ascending(T,N);

    printf("The table sorts in ascending ordre : \n");

    Display(T,N);

    Sort_Insertion_Descending(T,N);

    printf("The table sorts in descending ordre : \n");

    Display(T,N);
}
*/
/* (Sort Bubble )
void Change(int *a, int*b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;
}

void Sort_Bubble_Ascending(int T[], int N)
{
    int i , j ;

    for ( i = 0 ; i < N-1 ; i++)
    {
        for ( j = 0 ; j < N-i-1 ; j++)
        {
            if ( T[j] > T[j+1] )
            {
                Change(&T[j],&T[j+1]);
            }
        }
    }
}

void Sort_Bubble_Descending(int T[],int N)
{
    for ( int i = 0 ; i < N-1 ; i++)
    {
        for ( int j = 0 ; j < N-i-1 ; j++)
        {
            if ( T[j] < T[j+1] )
            {
                Change(&T[j],&T[j+1]);
            }
        }
    }
}

void Display(int T[], int N)
{
    for ( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");
}

void main()
{
    int T[Nmax] , N ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    

    for ( int i = 0 ; i < N ; i++)
    {
        printf("Val %d : ",i+1);
        scanf("%d",&T[i]);
    }

    printf("The initial table : \n");

    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }

    printf("\n");
    
    Sort_Bubble_Ascending(T,N);

    printf("The table sorts on ascending order : \n");

    Display(T,N);
 
    Sort_Bubble_Descending(T,N);

    printf("The tables sorts on descending order : \n");

    Display(T,N);

}
*/
/* ( Heapsort )
void Change(int *a,int *b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;
}

void Heap_Ascending(int T[],int N ,int i)
{
    int max_ind = i ;
    int g = 2 * i + 1 ;
    int d = 2 * i + 2 ;
    
    if ( g < N && T[g] > T[max_ind] )
    {
        max_ind = g ;
    }
    
    if ( d < N && T[d] > T[max_ind] )
    {
        max_ind = d ;
    }
    
    if ( max_ind != i )
    {
        Change(&T[i],&T[max_ind]);
        Heap_Ascending(T,N,max_ind);
    }
    
}

void Heapsort_Ascending(int T[],int N)
{
    for ( int i = N/2 - 1 ; i >= 0 ; i--)
    {
        Heap_Ascending(T,N,i);
    }
    
    for ( int i = N - 1 ; i > 0 ; i--)
    {
        Change(&T[0],&T[i]);
        Heap_Ascending(T,i,0);
    }
    
}

void Heap_Descending(int T[],int N, int i)
{
    int min_ind = i ;
    int g = 2 * i + 1 ;
    int d = 2 * i + 2 ;

    if ( g < N && T[g] < T[min_ind] )
    {
        min_ind = g ;
    }
    
    if ( d < N && T[d] < T[min_ind] )
    {
        min_ind = d ;
    }

    if ( min_ind != i )
    {
        Change(&T[i],&T[min_ind]);
        Heap_Descending(T,N,min_ind);
    }
    
} 

void Heapsort_Descending(int T[],int N)
{
    for ( int i = N/2 - 1 ; i >= 0 ; i--)
    {
        Heap_Descending(T,N,i);
    }
    
    for ( int i = N - 1 ; i > 0 ; i--)
    {
        Change(&T[0],&T[i]);
        Heap_Descending(T,i,0);
    }

}

void Display(int T[],int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }

    printf("\n");
}

void main()
{
    int T[Nmax] , N ;
    
    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax);
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Val %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("The initial table : \n");

    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");

    Heapsort_Ascending(T,N);

    printf("The table sorts on ascending order : \n");

    Display(T,N);

    Heapsort_Descending(T,N);

    printf("The table sorts on descending order : \n");

    Display(T,N);
    
}
*/
/* ( Shell Sort ) 
void Change(int *a,int *b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;
}

void Shell_Sort_Ascending(int T[],int N)
{
    for ( int val = N/2 ; val > 0 ; val = val/2 )
    {
        for ( int j = val ; j < N ; j++ )
        {
            for ( int i = j-val ; i >= 0 ; i = i-val )
            {
                if ( T[i] <= T[i+val] )
                {
                    break;
                }
                else
                {
                    Change(&T[i],&T[i+val]);
                }
            }   
        }   
    }
}

void Shell_Sort_Descending(int T[],int N)
{
    for ( int val = N/2 ; val > 0 ; val = val/2 )
    {
        for ( int j = val ; j < N ; j++ )
        {
            for ( int i = j-val ; i >= 0 ; i = i-val )
            {
                if ( T[i] >= T[i+val] )
                {
                    break;
                }
                else
                {
                    Change(&T[i],&T[i+val]);
                }
            }   
        }   
    }
}

void Display(int T[],int N)
{
    for ( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");
}

void main()
{
    int T[Nmax] , N ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("The initial table : \n");

    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }

    printf("\n");
    
    Shell_Sort_Ascending(T,N);

    printf("The table sortes on ascending order : \n");

    Display(T,N);

    Shell_Sort_Descending(T,N);

    printf("The table sortes on descending order : \n");

    Display(T,N);

}
*/
/* ( Quick Sort )
void Change(int *a,int *b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;
}

int Partition_Ascending(int T[],int down,int high)
{
    int Pivot = T[high] ;
    int i = down-1 ;

    for ( int j = down ; j < high ; j++)
    {
        if ( T[j] <= Pivot )
        {
            i++;

            Change(&T[i],&T[j]);
        }
    }
    
    Change(&T[i+1],&T[high]);

    return (i+1) ;
}

int Partition_Descending(int T[],int down,int high)
{
    int Pivot = T[high] ;
    int i = down-1 ;

    for ( int j = down ; j < high ; j++)
    {
        if ( T[j] >= Pivot)
        {
            i++ ;

            Change(&T[i],&T[j]);
        }
    }
    
    Change(&T[i+1],&T[high]);

    return (i+1) ;
}

void Quick_Sort_Ascending(int T[],int down,int high)
{
    if ( down < high )
    {
        int Pivot = Partition_Ascending(T,down,high);

        Quick_Sort_Ascending(T,down,Pivot-1);
        
        Quick_Sort_Ascending(T,Pivot+1,high);
    }
}
 
void Quick_Sort_Descending(int T[],int down,int high)
{
    if ( down < high )
    {
        int Pivot = Partition_Descending(T,down,high);

        Quick_Sort_Descending(T,down,Pivot-1);
        Quick_Sort_Descending(T,Pivot+1,high);
    }
    
}

void Display(int T[],int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");
}

void main()
{
    int T[Nmax] , N ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Val %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    printf("The initial table : \n");

    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");

    Quick_Sort_Ascending(T,0,N-1);

    printf("The table sorts on ascending ordre : \n");

    Display(T,N);

    Quick_Sort_Descending(T,0,N-1);

    printf("The table sorts on descending ordre : \n");

    Display(T,N);

}
*/
void Merge_Ascending(int T[],int g,int M,int d)
{
    int i , j , k ;
    int N1 = M - g + 1 ;
    int N2 = d - M ;

    int Tg[N1] , Td[N2] ;

    for ( i = 0 ; i < N1 ; i++)
    {
        Tg[i] = Tg[g+1] ;
    }
    
    for ( j = 0 ; j < N2 ; j++)
    {
        Td[j] = Td[M+1+j] ;
    }
    
    i = 0 , j = 0 , k = g ;

    for ( i = 0 , j = 0 ; i < N1 && j < N2 ; i++ , j++)
    {
        if ( Tg[i] <= Td[i] )
        {
            T[k] = Tg[i] ;
        }

        else
        {
            T[k] = Td[j] ;
        }

        k++ ;
    }

    while ( i < N1 )
    {
        T[k] = Tg[i] ;
        i++ ; 
        k++ ;
    }
    
    while ( j < N2 )
    {
        T[k] = Td[j] ;
        j++ ;
        k++ ;
    }
    
}

void Merge_Sort_Ascending(int T[],int g ,int d)
{
    if ( g < d )
    {
        int M ;

        M = ( g + d ) / 2 ;

        Merge_Sort_Ascending(T,g,M);
        Merge_Sort_Ascending(T,M+1,d);

        Merge_Ascending(T,g,M,d);
    }
    
}

void Display(int T[],int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n");
}

void main()
{
    int T[Nmax] , N ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Val %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    Merge_Sort_Ascending(T,0,N);

    printf("The table sorts on ascending ordre : \n");

    Display(T,N);
}