#pragma once

//�p���̋֎~
class SceneManager final
{
private:
	//�R���X�g���N�^�ƃf�X�g���N�^��private��
	SceneManager();
	~SceneManager();
public:
	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	SceneManager(const SceneManager& obj) = delete;
	//������Z�q�𖳌��ɂ���
	SceneManager& operator = (const SceneManager& obj) = delete;
	//�C���X�^���X���쐬����֐�
	static SceneManager* GetInstance();
	//�V�[���؂�ւ�
	void ChangeScene(int sceneNo);
};

