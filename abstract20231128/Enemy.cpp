#include "Enemy.h"
#include"common.h"
#include <iostream>
using namespace std;

void Enemy::damage(int damage)
{
	_hp -= damage;
}

bool Enemy::play(Enemy& enemy)
{
	cout << "==========�^�[���J�n==========" << endl;

	playBase(enemy);
	cout << "����̎c��HP :" << enemy.get_hp() << endl;
	cout << "�����̎c��HP :" << get_hp() << endl;

	cout << "==========�^�[���I��==========" << endl;

	if (enemy.get_hp() <= 0) 
	{
		cout << "�G��|�����I" << endl;
		return false;
	}
	else
	{
		return true;
	}
}