#pragma once

class Enemy
{
protected:
	int _hp;
	int _atk;

public:
	//攻撃を仕掛ける
	virtual void attack(Enemy& enemy) = 0; 
	//各々の戦いのシーン
	virtual void playBase(Enemy& enemy) = 0;

	//実際の戦闘
	bool play(Enemy& enemy);
	//ダメージを受ける
	void damage(int damage);

	int get_hp() const
	{
		return _hp;
	}
};
