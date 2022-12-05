#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main() {
	//駅名
	list<const char*> YamanoteLine =
	{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
	  "Uguisudani","Nippori","Tabata","Komagome",
	  "Sugamo","Otsuka","Ikebukuro","Mejiro" ,"Takadanobaba",
	  "Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
	  "Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
	  "Tamachi","Hamamatsucho","Shimbashi","Yurakucho\n--------\n"
	};
	// 出力
	cout << "-1970年-\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		cout << *itr << endl;
	}
	//西日暮里を挿入
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = YamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// 出力
	cout << "-2019年-\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		cout << *itr << endl;
	}

	// 高輪ゲートウェイを挿入
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = YamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	// 出力
	cout << "-2022年-\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr)
	{
		cout << *itr << endl;
	}
	return 0;

}