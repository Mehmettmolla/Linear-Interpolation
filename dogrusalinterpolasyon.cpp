//EN BA�TA GEREKL� K�T�PHANELER�M�Z� EKL�YORUZ
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-2*pow(x,2)-5//FONKS�YONUMUZU TANIMLIYORUZ	
#define e 0.01//HATA DE�ER�N� KONTROL ETT���M�Z SAB�T�M�Z� TANIMLIYORUZ
int main(){
	
float an=2,bn=3,f0,kok;//DE���KENLER�M�Z� FLOAT C�NS�NDEN TANIMLIYORUZ
float x =2.6906;
int i=1;//�TERASYON SAYILARINI TUTTU�UMUZ DE���KEN� �NT C�NS�NDEN TANIMLIYORUZ

b:
	
float pay1 = f(bn) ;//DO�RUSAL �NTERPOLASYON ��LEMLER�N� GER�EKLE�T�RMEK ���N FORM�L�M�Z� AYRI�TIRIYORUZ
float pay2 = f(an) ;
float sonpay = an*pay1- bn*pay2;
float payda1 =  f(bn) ;
float payda2 =f(an);
float sonpayda = payda1 - payda2;
float x0 = sonpay / sonpayda ;

printf("Iterasyon(#)\t\tAn\t\tBn\t\tXn\t\tHATA\n");//TABLOMUZU OLU�TURUYORUZ

float hatadeger =fabs(x - x0);//HATA DE�ER�N� B�R DE���KEN�N ���NE ATIYORUZ

printf("\t%d\t\t%f\t%f\t%f\t%f\n",i,an,bn,x0,hatadeger);//TABLOMUZA BULDU�UMUZ SONU�LARI YAZDIRIYORUZ 
i++;

if(hatadeger<e)//DURMA KO�ULUNU KONTROL ED�YORUZ VE DURMASI GEREKEN YERDE DURMASINI SA�LIYORUZ
{
	
kok=fabs(2-x0);//K�K�M�Z� BULUYORUZ
printf("\n");
printf("Sart saglandigindan kok degeri: %f",kok);//K�K�M�Z� YAZDIRIYORUZ

goto c;
}
else{	
an=x0;//HER ADIMDA An ���NE DE���EN DE�ERLER� ATIYORUZ
goto b;
}
c:
getch();
}//M.MOLLA
