#include <iostream>
using namespace std;
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<time.h>

string ci[7];
int hak=3;
int puan,rast,next;

string diyalog[10];
string ad[2];

void nick(){
	cout<<"   �sminiz Nedir ?"<<endl;
	cin>>ad[0];
	cout<<"   Soyisminiz Nedir ?"<<endl;
	cin>>ad[1];
    	cout<<" "<<ad[0]<<" Bey Haz�rsan�z ,Yar��mam�z Kenan �mirzal�o�lunun Sohbeti �le Ba�l�yacakt�r..(Haz�r iseniz Enter)"<<endl;
		getch();
	
		
	return;
}
void sohbet(){
	cout<<endl;
	cout<<"  CHAT :"<<endl;
	cout<<endl;
cout<<"Kenan Bey =>  Merhaba "<<ad[0]<<"  Bey ,ben Kenan �mirzal�o�lu Sizin Hangi �ehirden Kat�ld���n�z� ��renebilirmiyiz ? "<<endl;
cout<<endl;
	cout<<endl;
	cout<<"Siz :";
	cin>>diyalog[0];
	cout<<endl;
	cout<<endl;
	cout<<"Kenan Bey =>  �ok g�zel yerdir "<<diyalog[0]<<"...... Hangi B�l�mden Mevzunsunuz ?" <<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Siz:";
	cin>>diyalog[1];
	cout<<endl;
	cout<<endl;
	cout<<"Kenan Bey =>"<<diyalog[1]<<" B�l�m�n�n  son y�llarda Bir Pop�perlik kazand���n� g�r�yorum.. g�zel bir�ey. " <<endl;
	cout<<endl;
	cout<<"Kenan Bey =>"<<ad[0]<<" Bey Haz�rsan�z Sorular�m�za Ge�elim (Haz�r iseniz Enter'e Bas�n�z)"<<endl;
	getch();

	return;
	
}



string  print(string x){
	cout<<endl;
	cout<<x<<endl;
	return x;
	
}
void tr(){//TR KArakter.
	setlocale(LC_ALL,"Turkish");
}
string quest1(string x){//a
cout<<endl;
	cout<<"1-TC Kurulu� y�l�d�r nedir ?    a) 1923     b) 1823    c) 1983   d)1823\n"<<endl;
	cin>>ci[0];
	cout<<endl;
	
	return x;
}
string quest2(string x){//c
cout<<endl;


	cout<<"2-Atat�rk�n do�um tarihi ?    a) 1926     b) 1823    c) 1881   d)1823"<<endl;
	cin>>ci[1];
	cout<<endl;
	return x;
}
string quest3(string x){//d
cout<<endl;

	cout<<"Atat�rk�n Vefat tarihi ?    a) 1789     b) 1838    c) 1881   d)1938"<<endl;
	cin>>ci[2];
	cout<<endl;
	return x;
}
string quest4(string x){//b
cout<<endl;


	cout<<"T�rkiye Ka� ilden Olu�maktad�r. ?    a) 91     b) 81    c) 61   d)41 "<<endl;
	cin>>ci[3];
	cout<<endl;
	return x;
}
string quest5(string x){//a
cout<<endl;
	cout<<"T�rkiye hangi yar�m k�rededir ?    a) kyk     b) gyk    c) byk   d)dyk "<<endl;
	cin>>ci[4];
	cout<<endl;
	return x;
}
string quest6(string x){//b
cout<<endl;
	cout<<"T�rkiyenin Ba�kenti  ?    a) �stanbul      b) ankara    c) izmir    d) mersin"<<endl;
	cin>>ci[5];
	cout<<endl;
	return x;
}
string quest7(string x){//d
cout<<endl;

	cout<<"Bilgisayarda Mant�ksal, aritmetiksel ,ve kontrol yap�lar�n� denetleyen birim nedir ?    a) Gpu    b) Crosfire   c) Ram   d)Cpu"<<endl;
	cin>>ci[6];
	cout<<endl;
	return x;
}

void  qtrue(){//soru Do�ru ��kt�s�
	cout<<"Soruyu Do�ru Cevaplad�n�z...Puan�n�z "<<puan;
	puan+=500;
	cout<<" 'dan "<<puan<<" 'a Y�kseldi.."<<endl;
	next+=1;
	return;
}
void qfalse(){// soru yanl�� ��kt�s�..
	
	cout<<"Soruya Yanl�� Cevap Verdiniz...:( Yanl�� Verme Hakk�n�z"<<hak;
	hak-=1;
	cout<<"'dan "<<hak<<"'a Geriledi"<<endl;
	next+=1;
	return ;
}

void haknone(){//hak s�f�rlan�rsa...
if(next!=6){

	if(hak==0){
		cout<<"Yanl�� Verme Hakk�n�z� Doldurdunuz... \nPuan�n�z =>" <<puan<<" Oldu�undan Dolay� Size "<<puan/2<<" TL Hediye �eki veriyor ,�yi g�nlerde Kullanmaz�n� Diliyoruz..."<<endl;
		exit(1);
	}
	
	}
return ;

}
void last(){//son puanland�rma 
 if(next==6){
 	cout<<endl;

	cout<<"Kim Milyoner olmak �ster Pro�ram�m�z� Ba�ar�l� bir�ekilde bitiridirdiniz....Tebrikler"<<endl;
	cout<<endl;
	int ort=puan/500;
	cout<<puan<<" Puan�n�z oldu�undan dolay� bizden "<<puan*2<<" TL Nakit ile "<<ort<<" Tane �ekili� Hakk� Kazand�n�z..."<<endl;
	cout<<endl;
	cout<<"        Son Olarak Yap�mc�m�z EMRE ERO�LU Taraf�ndan NUTUK Hediyemizdir..."<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<ort;i++){
		cout<<i+1<<"'inci �ekili� Hakk�n�z� Kullanmak i�in Enter'e Bas�n�z.."<<endl;
		cout<<endl;
		cout<<endl;
		
	getch();
		srand(time(NULL));
    rast=1+rand()%10;
	switch(rast){
		case 1:
			cout<<"�PHONE 12 PRO MAX Kazand�n�z..."<<endl;
			break;
			case 2:
				cout<<"SAMSUNG NOTE 12s Kazand�n�z... "<<endl;
				break;
					case 3:
				cout<<"ALCATELL TABLET  Kazand�n�z... "<<endl;
				break;
					case 4:
				cout<<"DO�U  EXPREX TURU  Kazand�n�z... "<<endl;
				break;
				case 5:
				cout<<"A101'Den 890 Tlik Al��veri� Kart�  Kazand�n�z... "<<endl;
				break;
				case 6:
				cout<<"RTX 3070 T� (Hemde MSi :D) Kazand�n�z... "<<endl;
				break;
				case 7:
				cout<<"�9 10900K Kazand�n�z... "<<endl;
				break;
				case 8:
				cout<<"1 Haftal�k Tarsus Gezisi Tatili Kazand�n�z... "<<endl;
				break;
				case 9:
				cout<<" Tarsus �niversitesinde Bilgisayar Pro�ramc�l��� okuma �ans� Kazand�n�z... "<<endl;
				break;
				case 10:
				cout<<"5 kg ANAMUR MUZU :D :D  Kazand�n�z... "<<endl;
				break;
				
	}
	}

cout<<endl;

	
	 }
	return ;
}
int main() {
	tr();
	print("                                 K�M M�LYONER OLMAK �STER'E HO�GELD�N�Z...\a");

nick();
	sohbet();
		
	
    getch();
	quest1(ci[0]);
	if(ci[0]=="a"){
		qtrue();
	}
	else{
		qfalse();
	}
	
	quest2(ci[1]);
	if(ci[1]=="c"){
		qtrue();
	}
	else{
		qfalse();
	}
	quest3(ci[2]);
	if(ci[2]=="d"){
		qtrue();
	}
	else {
		qfalse();
		haknone();
		
	}
	
	 quest4(ci[3]);
	 if(ci[3]=="b"){
	 	qtrue();
	 }
	 else{
	 	qfalse();
	 	haknone();
	 	
	 }
	 
	 quest5(ci[4]);
	 if(ci[4]=="a"){
	 	qtrue();
	 }
	 else{
	 	qfalse();
	 	haknone();
	 }
	 quest6(ci[5]);
	 if(ci[5]=="b"){
	 	qtrue();
	 }
	 else{
	 	qfalse();
	 	haknone();
	 }
	 last();
	 
	 


	 
	 
	 
	
	
	return 0;
}
