#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<list>
using namespace std;
class Öðrenci {
private:
	string ad;
	int id;
	int notort;
public:
	Öðrenci(string _ad, int _id, int _not);
	string getad();
	int getid();
	int getnotort();
	void setad(string _ad);
	void setid(int _id);
	void setnotort(int _not);
	void bilgileriyaz();

};
