//EN BAÞTA GEREKLÝ KÜTÜPHANELERÝMÝZÝ EKLÝYORUZ
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-2*pow(x,2)-5//FONKSÝYONUMUZU TANIMLIYORUZ	
#define e 0.01//HATA DEÐERÝNÝ KONTROL ETTÝÐÝMÝZ SABÝTÝMÝZÝ TANIMLIYORUZ
int main(){
	
float an=2,bn=3,f0,kok;//DEÐÝÞKENLERÝMÝZÝ FLOAT CÝNSÝNDEN TANIMLIYORUZ
float x =2.6906;
int i=1;//ÝTERASYON SAYILARINI TUTTUÐUMUZ DEÐÝÞKENÝ ÝNT CÝNSÝNDEN TANIMLIYORUZ

b:
	
float pay1 = f(bn) ;//DOÐRUSAL ÝNTERPOLASYON ÝÞLEMLERÝNÝ GERÇEKLEÞTÝRMEK ÝÇÝN FORMÜLÜMÜZÜ AYRIÞTIRIYORUZ
float pay2 = f(an) ;
float sonpay = an*pay1- bn*pay2;
float payda1 =  f(bn) ;
float payda2 =f(an);
float sonpayda = payda1 - payda2;
float x0 = sonpay / sonpayda ;

printf("Iterasyon(#)\t\tAn\t\tBn\t\tXn\t\tHATA\n");//TABLOMUZU OLUÞTURUYORUZ

float hatadeger =fabs(x - x0);//HATA DEÐERÝNÝ BÝR DEÐÝÞKENÝN ÝÇÝNE ATIYORUZ

printf("\t%d\t\t%f\t%f\t%f\t%f\n",i,an,bn,x0,hatadeger);//TABLOMUZA BULDUÐUMUZ SONUÇLARI YAZDIRIYORUZ 
i++;

if(hatadeger<e)//DURMA KOÞULUNU KONTROL EDÝYORUZ VE DURMASI GEREKEN YERDE DURMASINI SAÐLIYORUZ
{
	
kok=fabs(2-x0);//KÖKÜMÜZÜ BULUYORUZ
printf("\n");
printf("Sart saglandigindan kok degeri: %f",kok);//KÖKÜMÜZÜ YAZDIRIYORUZ

goto c;
}
else{	
an=x0;//HER ADIMDA An ÝÇÝNE DEÐÝÞEN DEÐERLERÝ ATIYORUZ
goto b;
}
c:
getch();
}//M.MOLLA
