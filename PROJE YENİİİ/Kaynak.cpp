#include <iostream>
#include <string>
#include <vector>
#include<list>
#include"öðrenci.h"
#include <locale.h>
using namespace std;



int main() {
	setlocale(LC_ALL, "Turkish");
	list<Öðrenci> ogrenciler;
	auto öðrenciekle = [&]() {
		string ad;
		int id;
		int notort;
		cout << "Öðrenci adý : " << endl;
		cin >> ad;
		cout << "Öðrenci id : " << endl;
		cin >> id;
		cout << "Öðrenci not ortalamasý : " << endl;
		cin >> notort;
		Öðrenci yeniogrenci(ad, id, notort);
		ogrenciler.push_back(yeniogrenci);
		cout << "Öðrenci baþarýyla eklendi." << endl;
		}; 
	auto öðrencisil = [&]() {
		int ide;
		cout << "Silmek istediðiniz Öðrencinin idsini giriniz : " << endl;
		cin >> ide;
		bool found = false;
		for (auto iterator = ogrenciler.begin(); iterator != ogrenciler.end(); iterator++) {
			if (iterator->getid() == ide) {
				ogrenciler.erase(iterator);
				found = true;
				break;
			}}
		if (found == false) {
			cout << "Girdiðiniz idye kayýtlý bir öðrenci bulunmamaktadýr. " << endl;
		}
		};
	auto öðrenciara = [&]() {
		int idd;
		cout << "Aradýðýnýz Öðrencinin idsini giriniz : " << endl;
		cin >> idd;
		bool bul = false;
		for(auto iterator=ogrenciler.begin();iterator != ogrenciler.end();iterator++)
			if (iterator->getid() == idd) {
				iterator->bilgileriyaz();
				bul = true;
				break;
			}
		if (bul == false) {
			cout << "Girdiðiniz idye kayýtlý bir öðrenci bulunmamaktadýr" << endl;
		}
		};
	while (true) {
		int secim;
		cout << "-------------------------" << endl;
		cout << "Yapmak istediðiniz iþlemi seçiniz : " << endl;
		cout << "1. Öðrenci ekle" << endl;
		cout << "2. Öðrenci sil" << endl;
		cout << "3. Öðrenci ara" << endl;
		cout << "4. Çýkýþ" << endl;
		cout << "-------------------------" << endl;
		cin >> secim;
		switch (secim) {
		case 1:
			öðrenciekle();
			break;
			
		case 2:
			öðrencisil();
			break;

			
		case 3:
			öðrenciara();
			break;
			
		case 4:
			return 0;
		default:
			cout << "Geçersiz seçim." << endl;
			break;
			
		}


	}

	return 0;
}