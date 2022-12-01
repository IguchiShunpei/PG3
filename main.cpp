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
	// 出力
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		cout << *itr << endl;
	}
	//西日暮里を挿入
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = Yamanote.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// 出力
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		cout << *itr << endl;
	}

	// 高輪ゲートウェイを挿入
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = Yamanote.insert(itr, "Takanawa Gatewan");
			++itr;
		}
	}
	// 出力
	for (list<const char*>::iterator itr = Yamanote.begin(); itr != Yamanote.end(); ++itr) {
		cout << *itr << endl;
	}
	return 0;

}