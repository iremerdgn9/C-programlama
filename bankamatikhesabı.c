#include <stdio.h>
int main()
{
    
    int paraMiktari;
    int yuz,elli,yirmi,on,kalan;
    
    printf("para miktar�n� giriniz: "); //para miktar�n� 10'un katlar� �eklinde klavyeden giriyoruz.
    scanf("%d",&paraMiktari);
    
    if(paraMiktari%10==0)
    {
        
        yuz=paraMiktari/100; //tek tek miktar�na g�re ayr�m yap�yoruz.
        kalan=paraMiktari%100;
        elli=kalan/50;
        kalan=kalan%50;
        yirmi=kalan/20;
        kalan=kalan%20;
        on=kalan/10;
        kalan=kalan%10;
        
        printf("bankamatik hesab�:\n"); //ekrana yazd�r�yoruz.
        printf("%d adet 100 tl ,%d adet 50 tl\n",yuz,elli);
        printf("%d adet 20 tl  ,%d adet 10 tl\n",yirmi,on);
    }
    return 0;
}
