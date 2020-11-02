#pragma once

#include <GLFW/glfw3.h>
#include "..\Headers\Globals.h"

enum class BlockColor
{
	CYAN,
	YELLOW,
	PURPLE,
	GREEN,
	RED,
	BLUE,
	ORANGE,
	UNKNOWN
};

class Block
{
private:
	int XPos;
	int YPos;
	BlockColor Color;

public:
	Block(int x = 0, int y = 0, BlockColor color = BlockColor::UNKNOWN)
	{
		this->XPos = x;
		this->YPos = y;
		this->Color = color;
	}

	int GetX()
	{
		return this->XPos;
	}

	int GetY()
	{
		return this->YPos;
	}

	void SetX(int NewX)
	{
		if (NewX >= 0)
		{
			this->XPos = NewX;
		}
	}

	void SetY(int NewY)
	{
		if (NewY >= 0)
		{
			this->YPos = NewY;
		}
	}
};