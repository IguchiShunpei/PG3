#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main() {
	//�w��
	list<const char*> YamanoteLine =
	{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
	  "Uguisudani","Nippori","Tabata","Komagome",
	  "Sugamo","Otsuka","Ikebukuro","Mejiro" ,"Takadanobaba",
	  "Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
	  "Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
	  "Tamachi","Hamamatsucho","Shimbashi","Yurakucho\n--------\n"
	};
	// �o��
	cout << "-1970�N-\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		cout << *itr << endl;
	}
	//�����闢��}��
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = YamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// �o��
	cout << "-2019�N-\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		cout << *itr << endl;
	}

	// ���փQ�[�g�E�F�C��}��
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = YamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	// �o��
	cout << "-2022�N-\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		cout << *itr << endl;
	}
	return 0;

}