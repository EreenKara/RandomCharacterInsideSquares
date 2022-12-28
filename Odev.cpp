/****************************************************************************\
**			SAKARYA UNIVERSITY BILGISAYAR MUHENDISLIGI BOLUMU
**						PROGRAMLAMAYA GIRIS
**
**				OGRENCI ADI......: Eren Kara
**				OGRENCI NUMARASI.: B211210031
**				DERS GRUBU.......: 1.Ogretim A Grubu
**				ODEV NUMARASI....: 3
****************************************************************************/

#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdio.h>
#include <windows.h>

using namespace std;
const int MAX = 50;

enum renkler    // Hangi sayiya karsilik hangi renk veriyor. Ama enumu herhangi bir yerde kullanmadim.
{
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
};

class karakter  // Temel sinif kalitim icin kullanicam.
{
public:
	char harf;
	int renk;
};

class islemler :public karakter  // Islemelerin gerceklesecegi class.
{
private:
	int karaktersayi;
	karakter karakterler[MAX] = {' '};
	

public:
	islemler()
	{
		karaktersayi = 0;
	}

	char DUZCIZGI = 205;
	char SOLUSTKOSE = 201;
	char SAGUSTKOSE = 187;
	char DIKEYCIZGI = 186;
	char ASAGIAYRAC = 203;
	char SOLALTKOSE = 200;
	char SAGALTKOSE = 188;
	char YUKARIAYRAC = 202;

	void ekle()  // Harf eklemeye yariyor.
	{
		if (karaktersayi < MAX)
		{
			karakterler[karaktersayi].harf = rand() % 26 + 65;
			karakterler[karaktersayi].renk = rand() % 6 + 9;
			karaktersayi++;
		}
	}
	void cikar()  // Harf cikarmaya yariyor.
	{
		if (karaktersayi > 0)
			karaktersayi--;
	}
	void yazdire()  // Herhangi bir harf eklenince onceki durumu basmak icin.
	{
		int karaktersayie;
		karaktersayie = karaktersayi - 1;
		if (karaktersayie >= 0)   
		{
			cout << endl << "Onceki Durum - Eleman sayisi= " << karaktersayie << endl;

			if (karaktersayie >= 0)
			{
				cout << SOLUSTKOSE;
			}
			for (int i = 0; i < karaktersayie - 1; i++)  // Harf sayisi kadar kutu basmama yariyor en azindan ust kismini.
			{
				cout << DUZCIZGI << ASAGIAYRAC;
			}
			if (karaktersayie >= 0)
			{
				cout << DUZCIZGI << SAGUSTKOSE;
				cout << endl;
			}
			if (karaktersayie == 0)
				cout << DIKEYCIZGI;
			for (int i = 0; i < karaktersayie; i++)  //Kutucuklarin icindeki harfleri basmak icin.
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << DIKEYCIZGI;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), karakterler[i].renk);
				cout << karakterler[i].harf;

			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			if (karaktersayie == 0)
				cout << " " << DIKEYCIZGI << endl << SOLALTKOSE;
			if (karaktersayie > 0)
			{
				cout << DIKEYCIZGI << endl << SOLALTKOSE;
			}
			for (int i = 0; i < karaktersayie - 1; i++)  // Harf sayisi kadar kutunun alt kismini basmama yariyor.
			{
				cout << DUZCIZGI << YUKARIAYRAC;
			}
			if (karaktersayie >= 0)
			{
				cout << DUZCIZGI << SAGALTKOSE;
			}
		}
	}
	void yazdirc()   // Herhangi bir harf cikarilinca onceki durumu basmak icin.
	{
		int karaktersayic = karaktersayi + 1;
		
		cout << endl << "Onceki Durum - Eleman sayisi= " << karaktersayic << endl;
		if (karaktersayic >= 0)
		{
			cout << SOLUSTKOSE;
		}
		for (int i = 0; i < karaktersayic - 1; i++)  // Kutunun ust kismi icin.
		{
			cout << DUZCIZGI << ASAGIAYRAC;
		}
		if (karaktersayic >= 0)
		{
			cout << DUZCIZGI << SAGUSTKOSE;
			cout << endl;
		}
		if (karaktersayic == 0)
			cout << DIKEYCIZGI;
		
		for (int i = 0; i < karaktersayic; i++)  // Harfleri basmak icin.
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << DIKEYCIZGI;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), karakterler[i].renk);
			cout << karakterler[i].harf;

		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		if (karaktersayic == 0)
			cout << " " << DIKEYCIZGI << endl << SOLALTKOSE;
		if (karaktersayic > 0)
		{
			cout << DIKEYCIZGI << endl << SOLALTKOSE;
		}
		for (int i = 0; i < karaktersayic - 1; i++)  // Kutunun alt kismi icin.
		{
			cout << DUZCIZGI << YUKARIAYRAC;
		}
		if (karaktersayic > 0)
		{
			cout << DUZCIZGI << SAGALTKOSE;
		}

	}
	void yazdir()  // Son durumu basmak icin kullanılan fonksiyon.
	{

		if (karaktersayi >= 0)
		{
			cout << endl << "Suanki Durum - Eleman Sayisi= " << karaktersayi << endl;
			if (karaktersayi >= 0)
			{
				cout << SOLUSTKOSE;
			}
			for (int i = 0; i < karaktersayi - 1; i++)  //Kutunun ustu.
			{
				cout << DUZCIZGI << ASAGIAYRAC;
			}
			if (karaktersayi >= 0)
			{
				cout << DUZCIZGI << SAGUSTKOSE;
				cout << endl;
			}
			if (karaktersayi == 0)
				cout << DIKEYCIZGI;
			for (int i = 0; i < karaktersayi; i++)  //Kutu ici harfleri basmak icin.
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << DIKEYCIZGI;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), karakterler[i].renk);
				cout << karakterler[i].harf;

			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			if (karaktersayi == 0)
				cout <<" "<< DIKEYCIZGI<<endl << SOLALTKOSE;
			if (karaktersayi > 0)
			{
				cout << DIKEYCIZGI << endl << SOLALTKOSE;
			}
			for (int i = 0; i < karaktersayi - 1; i++) // Kutunun alt kismi.
			{
				cout << DUZCIZGI << YUKARIAYRAC;
			}
			if (karaktersayi >= 0)
				cout << DUZCIZGI << SAGALTKOSE;
		}
		if (karaktersayi == 0)   // Karakter sayisi 0'dan kucuk olamayacagi icin uyari yazisi.
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout <<endl<<endl<< "Eleman sayisi 0'dan kucuk olamaz.";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		}
		if (karaktersayi == MAX)  // Karakter sayisi (harf sayisi) 50'den buyuk olamayacagi icin uyari yazisi.
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << endl <<endl<< "Karakter sayisi 50'yi gecemez.";
		}
	}
};

int main()
{
	srand(time(0));

	int secim;  // Kullanicidan secim almak icin.
	islemler is1;  // Class'dan obje (nesne) olusturmak icin. 

	do  // Kullanici cikana kadar surekli secim yaptırmak icin.
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Bir Secim Yapiniz: " << endl
			<< "1- Karakter Ekle" << endl
			<< "2- Karakter Cikar" << endl
			<< "3- Programdan Cikis" << endl << endl;
		cin >> secim;
		switch (secim) // Kullanicinin secimlerini isleme dokmek icin.
		{
		case 1:
			is1.ekle();
			is1.yazdire();
			is1.yazdir();
			cout << endl << endl;
			break;
		case 2:
			is1.cikar();
			is1.yazdirc();
			is1.yazdir();
			cout << endl << endl;
			break;
		default:
			if (secim != 3)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				cout << endl << "Hatali secim yaptiniz" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				break;
			}
		}
		if (secim == 3)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << endl << "Programdan Ciktiniz." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;
		}
	} while (1); // Sonsuz dongu yaptım cunku cikmak istediginde zaten break ile donguyu kiriyorum.
}
