#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
  float vucut_kitle, kg, boy; //Sonu� virg�ll� ��kabilece�i i�in de�i�ken tipini float olarak yazd�k.
  printf ("V�cut Kitle �ndeksi Hesab�\n");
  printf ("v�cut a��rl���n� gir(kg): ");
  scanf ("%f", &kg);
  printf ("boy uzunlu�unu giriniz(m): "); //boy uzunlu�unu metre cinsinden almam�z gerekiyor. (�rn:1.63 gibi)
  scanf ("%f", &boy);
  vucut_kitle = kg / (boy * boy); // VK� hesaplama i�lemini yapt�k.
  printf ("v�cut kitle indeksi: %.2f\n", vucut_kitle);
  printf ("Durumunuz: "); 
  //v�cut kitle indeksimizi ��rendikten sonra belirli aral�klarda olan kilo durumumuzu belirlemi� olduk.
  if (vucut_kitle > 0 && vucut_kitle <= 18.5)
    {
      printf ("d���k kilolusunuz");
    }
  else if (vucut_kitle > 18.5 && vucut_kitle <= 24.9)
    {
      printf ("normal kilolusunuz");
    }
  else if (vucut_kitle >= 25 && vucut_kitle <= 29.9)
    {
      printf ("fazla kilolusunuz");
    }
  else if (vucut_kitle >= 30 && vucut_kitle <= 40)
    {
      printf ("obezsiniz");
    }
  else
    {
      printf ("a��r� obezsiniz");
    }
  return 0;
}
