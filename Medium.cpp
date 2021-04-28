#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Median( ElementType A[], int N )
{
    ElementType tem;
    
    for(int i=N-1;i>0;i--)
 {
     for(int j=0;j<i;j++)
     {
        if(A[j]>A[j+1])
        {
            tem = A[j];
            A[j] = A[j+1];
            A[j+1] = tem;
        }
     }
 }
 for(int i=0;i<N;i++)
 printf("%f",A[i]);

    if(N%2==0)
    {
        return A[N/2];
    }
    else
    {
        return A[(N+1)/2-1];
    }
}
