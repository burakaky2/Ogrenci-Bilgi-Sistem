#include "��renci.h"
using namespace std;
��renci::��renci(string _ad, int _id, int _not) {
	ad = _ad;
	id = _id;
	notort = _not;
}
string ��renci::getad() {
	return ad;
}
int ��renci::getid() {
	return id;
}
int ��renci::getnotort() {
	return notort;
}
void ��renci::setad(string _ad) {
	ad = _ad;
}
void ��renci::setid(int _id) {
	id = _id;
}
void ��renci::setnotort(int _notort) {
	notort = _notort;
}
void ��renci::bilgileriyaz() {
	cout << "��renci ad� : " << getad()<<endl;
	cout << "��renci id : " << getid() << endl;
	cout << "��renci not ortalamas� : " << getnotort() << endl;
}