#include <stdio.h>
#include <math.h>
#define SIZE 5 //dizi eleman sayısını define olarak belirtiyoruz.
int main()
{
    int i,n, position, dizi[SIZE];
    
    printf("%d eleman girin:",SIZE); //eleman sayılarını gir.
    for(i=0; i<SIZE; i++)
    scanf("%d",&dizi[i]);
    printf("eklenecek eleman gir:");
    scanf("%d",&n);
    
    printf("eklenecek pozisyonu seçin:"); //eklenecek pozisyonu seç.
    scanf("%d",&position);
    
    for(i=n;i>=position-1;i--)
    
    dizi[i+1]=dizi[i];
    dizi[position-1]=n;
    
   printf("yeni sıralama:");
    for(i=0; i<SIZE+1; i++) //size'ı yine +1 yapmazsanız dizi 5 elemanlı olur. 
    printf("%d ",dizi[i]);
    // yeni sıralamayı yazdır.
    return 0;
}