#pragma once

#include "Graphics.h" 

class Dude
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx);
	int x = 400;
	int y = 300;
	static constexpr int width = 20;
	static constexpr int height = 20;
};