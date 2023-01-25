#pragma once

//継承の禁止
class SceneManager final
{
private:
	//コンストラクタとデストラクタをprivateに
	SceneManager();
	~SceneManager();
public:
	//コピーコンストラクタを無効にする
	SceneManager(const SceneManager& obj) = delete;
	//代入演算子を無効にする
	SceneManager& operator = (const SceneManager& obj) = delete;
	//インスタンスを作成する関数
	static SceneManager* GetInstance();
	//シーン切り替え
	void ChangeScene(int sceneNo);
};

