#include "Slime.h"
#include"common.h"
#include <iostream>
using namespace std;

Slime::Slime()
{
	_hp = 20;
	_atk = 5;
}

void Slime::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void Slime::playBase(Enemy& enemy)
{
	//�X���C�����G�֍U��
	cout << "�X���C���̑̓�����I" << endl;
	cout << "�G�� " << _atk << " �̃_���[�W�I" << endl;
	attack(enemy);
}