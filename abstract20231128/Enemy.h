#pragma once

class Enemy
{
protected:
	int _hp;
	int _atk;

public:
	//�U�����d�|����
	virtual void attack(Enemy& enemy) = 0; 
	//�e�X�̐킢�̃V�[��
	virtual void playBase(Enemy& enemy) = 0;

	//���ۂ̐퓬
	bool play(Enemy& enemy);
	//�_���[�W���󂯂�
	void damage(int damage);

	int get_hp() const
	{
		return _hp;
	}
};
