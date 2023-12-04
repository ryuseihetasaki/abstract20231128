#include "PoisonSlime.h"
#include "Goblin.h"
#include <iostream>
using namespace std;

PoisonSlime::PoisonSlime()
{
	_hp = 40;
	_atk = 8;
}

void  PoisonSlime::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void PoisonSlime::playBase(Enemy& enemy)
{
	//�|�C�Y���X���C�����G�֍U��
	cout << "�|�C�Y���X���C���̑̓�����I" << endl;
	cout << "�G�� " << _atk << " �̃_���[�W�I" << endl;
	attack(enemy);
}