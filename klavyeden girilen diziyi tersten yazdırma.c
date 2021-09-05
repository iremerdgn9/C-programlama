#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,N;
    printf("dizi eleman sayısını girin:");
    scanf("%d",&N);  
    
    int dizi[N];
    for(i=0;i<N;i++)
    {
        
        printf("dizi[%d]girin:",i);
        scanf("%d",&dizi[i]);
    }
    printf("\ngirilen dizi: ");
    for(i=0; i<N; i++)
    {
        printf("%d",dizi[i]);
    }
    printf("\ntersten yazdır: ");
    for(i=N-1;i>=0;i--)
    {
        printf("%d",dizi[i]);
    }
    return 0;
}