#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main() {
	list<const char*> Yamanote = { "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
									  "Uguisudani","Nippori","Tabata","Komagome",
									  "Sugamo","Otsuka","Ikebukuro","Mejiro" ,"Takadanobaba",
									  "Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
									  "Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
									  "Tamachi","Hamamatsucho","Shimbashi","Yurakucho\n" };
	// �o��
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		cout << *itr << endl;
	}
	//�����闢��}��
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = Yamanote.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// �o��
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		cout << *itr << endl;
	}

	// ���փQ�[�g�E�F�C��}��
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = Yamanote.insert(itr, "Takanawa Gatewan");
			++itr;
		}
	}
	// �o��
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		cout << *itr << endl;
	}
	return 0;

}