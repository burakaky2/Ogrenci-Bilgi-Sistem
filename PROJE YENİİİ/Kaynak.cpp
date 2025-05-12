#include <iostream>
#include <string>
#include <vector>
#include<list>
#include"��renci.h"
#include <locale.h>
using namespace std;



int main() {
	setlocale(LC_ALL, "Turkish");
	list<��renci> ogrenciler;
	auto ��renciekle = [&]() {
		string ad;
		int id;
		int notort;
		cout << "��renci ad� : " << endl;
		cin >> ad;
		cout << "��renci id : " << endl;
		cin >> id;
		cout << "��renci not ortalamas� : " << endl;
		cin >> notort;
		��renci yeniogrenci(ad, id, notort);
		ogrenciler.push_back(yeniogrenci);
		cout << "��renci ba�ar�yla eklendi." << endl;
		}; 
	auto ��rencisil = [&]() {
		int ide;
		cout << "Silmek istedi�iniz ��rencinin idsini giriniz : " << endl;
		cin >> ide;
		bool found = false;
		for (auto iterator = ogrenciler.begin(); iterator != ogrenciler.end(); iterator++) {
			if (iterator->getid() == ide) {
				ogrenciler.erase(iterator);
				found = true;
				break;
			}}
		if (found == false) {
			cout << "Girdi�iniz idye kay�tl� bir ��renci bulunmamaktad�r. " << endl;
		}
		};
	auto ��renciara = [&]() {
		int idd;
		cout << "Arad���n�z ��rencinin idsini giriniz : " << endl;
		cin >> idd;
		bool bul = false;
		for(auto iterator=ogrenciler.begin();iterator != ogrenciler.end();iterator++)
			if (iterator->getid() == idd) {
				iterator->bilgileriyaz();
				bul = true;
				break;
			}
		if (bul == false) {
			cout << "Girdi�iniz idye kay�tl� bir ��renci bulunmamaktad�r" << endl;
		}
		};
	while (true) {
		int secim;
		cout << "-------------------------" << endl;
		cout << "Yapmak istedi�iniz i�lemi se�iniz : " << endl;
		cout << "1. ��renci ekle" << endl;
		cout << "2. ��renci sil" << endl;
		cout << "3. ��renci ara" << endl;
		cout << "4. ��k��" << endl;
		cout << "-------------------------" << endl;
		cin >> secim;
		switch (secim) {
		case 1:
			��renciekle();
			break;
			
		case 2:
			��rencisil();
			break;

			
		case 3:
			��renciara();
			break;
			
		case 4:
			return 0;
		default:
			cout << "Ge�ersiz se�im." << endl;
			break;
			
		}


	}

	return 0;
}