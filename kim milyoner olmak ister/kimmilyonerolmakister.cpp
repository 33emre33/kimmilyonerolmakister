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
	cout<<"   Ýsminiz Nedir ?"<<endl;
	cin>>ad[0];
	cout<<"   Soyisminiz Nedir ?"<<endl;
	cin>>ad[1];
    	cout<<" "<<ad[0]<<" Bey Hazýrsanýz ,Yarýþmamýz Kenan Ýmirzalýoðlunun Sohbeti Ýle Baþlýyacaktýr..(Hazýr iseniz Enter)"<<endl;
		getch();
	
		
	return;
}
void sohbet(){
	cout<<endl;
	cout<<"  CHAT :"<<endl;
	cout<<endl;
cout<<"Kenan Bey =>  Merhaba "<<ad[0]<<"  Bey ,ben Kenan Ýmirzalýoðlu Sizin Hangi Þehirden Katýldýðýnýzý Öðrenebilirmiyiz ? "<<endl;
cout<<endl;
	cout<<endl;
	cout<<"Siz :";
	cin>>diyalog[0];
	cout<<endl;
	cout<<endl;
	cout<<"Kenan Bey =>  Çok güzel yerdir "<<diyalog[0]<<"...... Hangi Bölümden Mevzunsunuz ?" <<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Siz:";
	cin>>diyalog[1];
	cout<<endl;
	cout<<endl;
	cout<<"Kenan Bey =>"<<diyalog[1]<<" Bölümünün  son yýllarda Bir Popüperlik kazandýðýný görüyorum.. güzel birþey. " <<endl;
	cout<<endl;
	cout<<"Kenan Bey =>"<<ad[0]<<" Bey Hazýrsanýz Sorularýmýza Geçelim (Hazýr iseniz Enter'e Basýnýz)"<<endl;
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
	cout<<"1-TC Kuruluþ yýlýdýr nedir ?    a) 1923     b) 1823    c) 1983   d)1823\n"<<endl;
	cin>>ci[0];
	cout<<endl;
	
	return x;
}
string quest2(string x){//c
cout<<endl;


	cout<<"2-Atatürkün doðum tarihi ?    a) 1926     b) 1823    c) 1881   d)1823"<<endl;
	cin>>ci[1];
	cout<<endl;
	return x;
}
string quest3(string x){//d
cout<<endl;

	cout<<"Atatürkün Vefat tarihi ?    a) 1789     b) 1838    c) 1881   d)1938"<<endl;
	cin>>ci[2];
	cout<<endl;
	return x;
}
string quest4(string x){//b
cout<<endl;


	cout<<"Türkiye Kaç ilden Oluþmaktadýr. ?    a) 91     b) 81    c) 61   d)41 "<<endl;
	cin>>ci[3];
	cout<<endl;
	return x;
}
string quest5(string x){//a
cout<<endl;
	cout<<"Türkiye hangi yarým kürededir ?    a) kyk     b) gyk    c) byk   d)dyk "<<endl;
	cin>>ci[4];
	cout<<endl;
	return x;
}
string quest6(string x){//b
cout<<endl;
	cout<<"Türkiyenin Baþkenti  ?    a) Ýstanbul      b) ankara    c) izmir    d) mersin"<<endl;
	cin>>ci[5];
	cout<<endl;
	return x;
}
string quest7(string x){//d
cout<<endl;

	cout<<"Bilgisayarda Mantýksal, aritmetiksel ,ve kontrol yapýlarýný denetleyen birim nedir ?    a) Gpu    b) Crosfire   c) Ram   d)Cpu"<<endl;
	cin>>ci[6];
	cout<<endl;
	return x;
}

void  qtrue(){//soru Doðru çýktýsý
	cout<<"Soruyu Doðru Cevapladýnýz...Puanýnýz "<<puan;
	puan+=500;
	cout<<" 'dan "<<puan<<" 'a Yükseldi.."<<endl;
	next+=1;
	return;
}
void qfalse(){// soru yanlýþ çýktýsý..
	
	cout<<"Soruya Yanlýþ Cevap Verdiniz...:( Yanlýþ Verme Hakkýnýz"<<hak;
	hak-=1;
	cout<<"'dan "<<hak<<"'a Geriledi"<<endl;
	next+=1;
	return ;
}

void haknone(){//hak sýfýrlanýrsa...
if(next!=6){

	if(hak==0){
		cout<<"Yanlýþ Verme Hakkýnýzý Doldurdunuz... \nPuanýnýz =>" <<puan<<" Olduðundan Dolayý Size "<<puan/2<<" TL Hediye Çeki veriyor ,Ýyi günlerde Kullanmazýný Diliyoruz..."<<endl;
		exit(1);
	}
	
	}
return ;

}
void last(){//son puanlandýrma 
 if(next==6){
 	cout<<endl;

	cout<<"Kim Milyoner olmak Ýster Proðramýmýzý Baþarýlý birþekilde bitiridirdiniz....Tebrikler"<<endl;
	cout<<endl;
	int ort=puan/500;
	cout<<puan<<" Puanýnýz olduðundan dolayý bizden "<<puan*2<<" TL Nakit ile "<<ort<<" Tane Çekiliþ Hakký Kazandýnýz..."<<endl;
	cout<<endl;
	cout<<"        Son Olarak Yapýmcýmýz EMRE EROÐLU Tarafýndan NUTUK Hediyemizdir..."<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<ort;i++){
		cout<<i+1<<"'inci Çekiliþ Hakkýnýzý Kullanmak için Enter'e Basýnýz.."<<endl;
		cout<<endl;
		cout<<endl;
		
	getch();
		srand(time(NULL));
    rast=1+rand()%10;
	switch(rast){
		case 1:
			cout<<"ÝPHONE 12 PRO MAX Kazandýnýz..."<<endl;
			break;
			case 2:
				cout<<"SAMSUNG NOTE 12s Kazandýnýz... "<<endl;
				break;
					case 3:
				cout<<"ALCATELL TABLET  Kazandýnýz... "<<endl;
				break;
					case 4:
				cout<<"DOÐU  EXPREX TURU  Kazandýnýz... "<<endl;
				break;
				case 5:
				cout<<"A101'Den 890 Tlik Alýþveriþ Kartý  Kazandýnýz... "<<endl;
				break;
				case 6:
				cout<<"RTX 3070 TÝ (Hemde MSi :D) Kazandýnýz... "<<endl;
				break;
				case 7:
				cout<<"Ý9 10900K Kazandýnýz... "<<endl;
				break;
				case 8:
				cout<<"1 Haftalýk Tarsus Gezisi Tatili Kazandýnýz... "<<endl;
				break;
				case 9:
				cout<<" Tarsus üniversitesinde Bilgisayar Proðramcýlýðý okuma þansý Kazandýnýz... "<<endl;
				break;
				case 10:
				cout<<"5 kg ANAMUR MUZU :D :D  Kazandýnýz... "<<endl;
				break;
				
	}
	}

cout<<endl;

	
	 }
	return ;
}
int main() {
	tr();
	print("                                 KÝM MÝLYONER OLMAK ÝSTER'E HOÞGELDÝNÝZ...\a");

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
