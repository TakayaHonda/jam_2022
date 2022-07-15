#pragma once
class Boss {
private:
	int HitPoint;
	int AttackPower;
	int BossX, BossY;
	int MoveAriaX, MoveAriaY;
public:
	Boss();
	~Boss();
	virtual void Attack();		//UŒ‚
	virtual void Move();		//“®‚«
	virtual void DeadEffect();	//€–S
	virtual void Apparent();	//“oê
};

