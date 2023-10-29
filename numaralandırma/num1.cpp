#include<iostream>
#include<stdio.h>
#include<stdlib.h>

enum KullaniciSeviyeleri{
	misafir=1,
	ogrenci=2,
	akademisyen=3,
	admin=4
};

using namespace std;

int main(){
	KullaniciSeviyeleri seviye;
	cout<<"Kullanicinin yetki seviyesini 1-4 araliginda giriniz:";
	scanf("%d",&seviye);
	cout<<endl;
	
	switch(seviye){
		case misafir:
			cout<<"yetki seviyesi misafir."<<endl;
			break;
		case ogrenci:
			cout<<"yetki seviyesi ogrenci."<<endl;
			break;
		case akademisyen:
			cout<<"yetki seviyesi akademisyen."<<endl;
			break;
		case admin:
			cout<<"yetki seviyesi admin."<<endl;
			break;
			default:
				cout<<"girdiginiz deger gecersiz!"<<endl;
				break;
	}
	return 0;
}
