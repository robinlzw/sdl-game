#pragma once
#include <SDL.h>
#include <vector>

#include "GameObj.h"

class Handler {
private:
	std::vector<GameObj*> handler;
public:
	Handler();
	~Handler();

	void AddObj(GameObj*);
	void RemoveObj(GameObj*);
	void ClearHandler();
	int ObjCount();

	void Update();
	void Render(float);

	GameObj* GetPlayer();
private:
	bool IsOutOfBounds(GameObj* obj);
	bool CheckCollision(GameObj* objA, GameObj* objB);
};