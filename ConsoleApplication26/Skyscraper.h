#pragma once
#include "ConsoleControll.h"
class Skyscraper
{
	int floorsCount;
	int width;
	ConsoleControll CONSOLE;
public:
	Skyscraper(int count, int width)
	{
		this->width = width;
		floorsCount = count;
	}
	void draw()
	{
		for (int i = 0; i < floorsCount * 4; i++)
		{
			CONSOLE.SetPos(2 + i, 8);

			for (int j = 0; j < width * 4; j++)
			{

				CONSOLE.SetColor(14);
				cout << char(178);
			}

		}
	}
	void Drawcactus2(int r)
	{
		CONSOLE.SetPos(r, 5);
		cout << char(219) << " " << char(219);
		CONSOLE.SetPos(r + 1, 5);
		cout << char(219) << char(219);
	}
	void Drawcactus3(int r)
	{
		CONSOLE.SetPos(r, 7);
		cout << char(219)<<" "<<char(219);
		CONSOLE.SetPos(r + 1, 7);
		cout << char(219) << char(219)<<char(219);
	}
	void Drawcactus(int height)
	{

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{

				if (i % 6 == 0)
					Drawcactus2(i);
				else
					Drawcactus3(i);
				CONSOLE.SetPos(i, 7);
				cout << char(219);

			}

		}

	}
};