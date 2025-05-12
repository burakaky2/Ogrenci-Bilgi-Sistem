#include "öðrenci.h"
using namespace std;
Öðrenci::Öðrenci(string _ad, int _id, int _not) {
	ad = _ad;
	id = _id;
	notort = _not;
}
string Öðrenci::getad() {
	return ad;
}
int Öðrenci::getid() {
	return id;
}
int Öðrenci::getnotort() {
	return notort;
}
void Öðrenci::setad(string _ad) {
	ad = _ad;
}
void Öðrenci::setid(int _id) {
	id = _id;
}
void Öðrenci::setnotort(int _notort) {
	notort = _notort;
}
void Öðrenci::bilgileriyaz() {
	cout << "Öðrenci adý : " << getad()<<endl;
	cout << "Öðrenci id : " << getid() << endl;
	cout << "Öðrenci not ortalamasý : " << getnotort() << endl;
}