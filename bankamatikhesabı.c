#include <stdio.h>
int main()
{
    
    int paraMiktari;
    int yuz,elli,yirmi,on,kalan;
    
    printf("para miktarýný giriniz: "); //para miktarýný 10'un katlarý þeklinde klavyeden giriyoruz.
    scanf("%d",&paraMiktari);
    
    if(paraMiktari%10==0)
    {
        
        yuz=paraMiktari/100; //tek tek miktarýna göre ayrým yapýyoruz.
        kalan=paraMiktari%100;
        elli=kalan/50;
        kalan=kalan%50;
        yirmi=kalan/20;
        kalan=kalan%20;
        on=kalan/10;
        kalan=kalan%10;
        
        printf("bankamatik hesabý:\n"); //ekrana yazdýrýyoruz.
        printf("%d adet 100 tl ,%d adet 50 tl\n",yuz,elli);
        printf("%d adet 20 tl  ,%d adet 10 tl\n",yirmi,on);
    }
    return 0;
}
