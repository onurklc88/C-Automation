#include "pch.h"
#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

int main() {
	
	string ParkYeri[15][6];
	
	string id,sifre;
	bool girisdurum = false;

	int anamenu_islemo = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int x = 0; x < 6; x++)
		{
			ParkYeri[i][x] = "NULL";
		}
	}
	while (anamenu_islemo !=4)
		
	{
		if (girisdurum == false)
		{
			cout << "Kullanici adi gir: ";
			cin >> id;
			cout << "sifre gir: ";
			cin >> sifre;
			
			if (id == "cross" && sifre == "123")
			{
				cout << "Giris Basarili..Ana Menuye yonlendiriliyorsunuz..";
				girisdurum = true;
				Sleep(2000);
				system("CLS");
			}
			else
			{
				
				cout << "Hatali giris. " << endl;
				girisdurum = false;
				Sleep(2000);
				system("CLS");
			}
		

		}
		else
		{
			cout << "### OTOPARK OTOMASYONU ###" << endl;
		cout << "1)Otorpark arac giriwi" << endl;
		cout << "2)Otorpark arac cikisi" << endl;
		cout << "3)Otorparktaki arac listesi" << endl;
		cout << "4)Otomasyondan cikis yap" << endl;
		cout << "islem no giriniz: ";
		cin >> anamenu_islemo;
		switch (anamenu_islemo)
		{
		case 1:
		{
			system("CLS");
			int Parkno;

			for (int i = 0; i < 5; i++)
			{
				if (ParkYeri[i][0] == "NULL")
				{
					Parkno = i;
					
					break;

				}

			}


			string sürücüisim,sürücüsoyad, aracplaka, aracmarka, aracmodel, aracgirissaat;
			cout << "### Yeni arac girisi ###" << endl;
			cout << "Arac Sahibi isim: ";
			cin >> sürücüisim;
			cout << "## Arac Sahibi Soyad: ";
			cin >> sürücüsoyad;

			cout << "### Arac Plaka ###" << endl;
			cin >> aracplaka;
			cout << "### Arac marka ###" << endl;
			cin >> aracmarka;

			cout << "### Arac Model ###" << endl;
			cin >> aracmodel;

			cout << "### Arac giris saati ###" << endl;
			cin >> aracgirissaat;
			ParkYeri[Parkno][0] = sürücüisim;
			ParkYeri[Parkno][1] = sürücüsoyad;
			ParkYeri[Parkno][2] = aracplaka;
           ParkYeri[Parkno][3] = aracmarka;
			ParkYeri[Parkno][4] = aracmodel;
			ParkYeri[Parkno][5] = aracgirissaat;
			system("CLS");
			cout << "Arac girisi basarili..";
			Sleep(2000);
			system("CLS");
	}

			break;
		case 2:
		{
			int cikisno;
			system("CLS");
			cout << "## Arac cikisi ##";
			for (int i = 0; i < 15; i++)
			{
				if (ParkYeri[i][0] != "NULL")
				{

					cout << i << ") " << ParkYeri[i][0] << " " << ParkYeri[i][1] << " e ait " << ParkYeri[i][2] << " Plakli Arac " << ParkYeri[i][3] << " Marka " << ParkYeri[i][4] << " Model " << ParkYeri[i][5] << " Saate giris yapmistir " << endl;
					cout << "..............................................." << endl;
				}
			}
			cout << "Cikisi yapilacak aracin parkyeri numarsini giriniz: ";
			cin >> cikisno;
			if (ParkYeri[cikisno][0] != "NULL")
			{
				for (int x = 0; x < 6; x++)
				{
					ParkYeri[cikisno][x] = "NULL";
				}
			}
			cout << "Arac cikisi basarili";
			system("CLS");
		}


			break;
		case 3:
		{
			system("CLS");
			cout << "## Arac Listesi ##" << endl;
			for (int i = 0; i < 15; i++)
			{
				if (ParkYeri[i][0] != "NULL")
				{
					
		cout << ParkYeri[i][0] << " " << ParkYeri[i][1] << " e ait " << ParkYeri[i][2] << " Plakli Arac " << ParkYeri[i][3] << " Marka " << ParkYeri[i][4] << " Model " << ParkYeri[i][5] << " Saatinde giris yapmistir " << endl;
		cout << "..............................................." << endl;
		
				}
		
				
				
			}
			
			break;
		}
		
		case 4:
		{
			system("CLS");
			cout << "Cikis yapiliyor............";
			Sleep(2000);
			system("EXIT");
		}
			break;
			
		default:
			system("CLS");
			cout << "Gecersiz islem numarasi";
			Sleep(1000);
			system("EXIT");
			break;
			
			
		}
		}
		
	
		}
	
	



	return 0;

}