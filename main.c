#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
  float vucut_kitle, kg, boy; //Sonuç virgüllü çýkabileceði için deðiþken tipini float olarak yazdýk.
  printf ("Vücut Kitle Ýndeksi Hesabý\n");
  printf ("vücut aðýrlýðýný gir(kg): ");
  scanf ("%f", &kg);
  printf ("boy uzunluðunu giriniz(m): "); //boy uzunluðunu metre cinsinden almamýz gerekiyor. (örn:1.63 gibi)
  scanf ("%f", &boy);
  vucut_kitle = kg / (boy * boy); // VKÝ hesaplama iþlemini yaptýk.
  printf ("vücut kitle indeksi: %.2f\n", vucut_kitle);
  printf ("Durumunuz: "); 
  //vücut kitle indeksimizi öðrendikten sonra belirli aralýklarda olan kilo durumumuzu belirlemiþ olduk.
  if (vucut_kitle > 0 && vucut_kitle <= 18.5)
    {
      printf ("düþük kilolusunuz");
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
      printf ("aþýrý obezsiniz");
    }
  return 0;
}
