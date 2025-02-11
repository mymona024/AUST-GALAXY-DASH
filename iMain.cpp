#include "iGraphics.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

char BG1[50] = {"Space Time Continuum.bmp"};
char BG2[50] = { "Red Space.bmp" };
char BG3[50] = { "Burning Planet.bmp" };
char BG4[50] = { "Saving Earth.bmp" };
char apollo11[50] = { "Spaceship.bmp" };
char apollo12[50] = { "Spaceship 2.bmp" };
char enemy1[50] = { "Enemy1.bmp" };
char enemy2[50] = { "Enemy1.bmp" };
char enemy3[50] = { "Enemy1.bmp" };
char enemy4[50] = { "Enemy2.bmp" };
char enemy5[50] = { "Enemy2.bmp" };
char enemy6[50] = { "Enemy2.bmp" };
char enemy7[50] = { "Enemy3.bmp" };
char enemy8[50] = { "Enemy3.bmp" };
char enemy9[50] = { "Enemy3.bmp" };
char enemy10[50] = { "Enemy4.bmp" };
char enemy11[50] = { "Enemy4.bmp" };
char enemy12[50] = { "Enemy4.bmp" };
char laser[50] = { "Laser.bmp" };
char enterName[50] = { "Enter Name.bmp" };
char stat[10] = { "Score: " };
char health[10] = { "Life: " };
char name[50];
char gameBG[50] = { "Menu BG.bmp" };
char option1[50] = { "Menu option 1.bmp" };
char option2[50] = { "Menu option 2.bmp" };
char option3[50] = { "Menu option 3.bmp" };
char option4[50] = { "Menu option 4.bmp" };
char levels1[50] = { "Levels 1.bmp" };
char levels2[50] = { "Levels 2.bmp" };
char creds[50] = { "Credits.bmp" };
char pause1[50] = { "Pause Menu 1.bmp" };
char pause2[50] = { "Pause Menu 2.bmp" };

int indexNumber = 0;
int apollox = 100;
int apolloy = 400;
int enemy1x = 1700;
int enemy1y = 700;
int enemy2x = 2100;
int enemy2y = 200;
int enemy3x = 2500;
int enemy3y = 500;


int x = 6;
int y = 6;
int z = 6;
int key1 = 1;
int key2 = 1;
int key3 = 1;
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;

int gamestate = 0;
int is_game_on = 0;
int level = 0;


void iDraw()
{
	iClear();
	if (gamestate == 0)
	{
		iShowBMP(0, 0, gameBG);
	}
	else if (gamestate == 1)
	{
		iShowBMP(0, 0, option1);
	}
	else if (gamestate == 2)
	{
		iShowBMP(0, 0, option2);
	}
	else if (gamestate == 3)
	{
		iShowBMP(0, 0, option3);
	}
	else if (gamestate == 4)
	{
		iShowBMP(0, 0, option4);
	}
	else if (gamestate == 5)
	{
		iShowBMP(0, 0, creds);
	}
	
		
	
	else if (gamestate == 7)
	{
		iShowBMP(0, 0, pause1);
	}
	else if (gamestate == 8)
	{
		iShowBMP(0, 0, pause2);
	}
	
	else if (gamestate == 11)
	{
		iShowBMP(0, 0, levels1);
	}
	else if (gamestate == 12)
	{
		iShowBMP(0, 0, levels2);
	}
	
	if (is_game_on == 1)
	{
		if (level == 1)
		{
			iShowBMP(0, 0, BG1);
			iShowBMP2(apollox, apolloy, apollo11, 0);
			iShowBMP2(enemy1x, enemy1y, enemy1, 0);
			iShowBMP2(enemy2x, enemy2y, enemy2, 0);
			iShowBMP2(enemy3x, enemy3y, enemy3, 0);
			
			iSetColor(255, 255, 255);
			iText(0, 870, stat, GLUT_BITMAP_TIMES_ROMAN_24);
			
		}
		else if (level == 2)
		{
			iShowBMP(0, 0, BG2);
			iShowBMP2(apollox, apolloy, apollo12, 0);
			iShowBMP2(enemy1x, enemy1y, enemy4, 0);
			iShowBMP2(enemy2x, enemy2y, enemy5, 0);
			iShowBMP2(enemy3x, enemy3y, enemy6, 0);
			
			iSetColor(255, 255, 255);
			iText(0, 870, stat, GLUT_BITMAP_TIMES_ROMAN_24);
			
		}
		
	}
}




/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	

	

	if (key == '\r')
	{
		if (gamestate == 0)//game start
		{
			gamestate = 1;
		}
		else if (gamestate == 1)//menu (play)
		{
			gamestate = 11;
		}
		
		else if (gamestate == 3)//menu (credits)
		{
			gamestate = 5;
		}
		else if (gamestate == 4)//menu (exit)
		{
			exit(1);
		}
		else if (gamestate == 7)//pause (resume)
		{
			
			is_game_on = 1;
			if (level == 1)
				gamestate = 69;
			else if (level == 2)
				gamestate = 69;
			
		}
		else if (gamestate == 8)//pause (quit)
		{
			gamestate = 1;
			is_game_on = 0;
			level = 0;

			indexNumber = 0;
			apollox = 100;
			apolloy = 400;
			enemy1x = 1700;
			enemy1y = 700;
			enemy2x = 2100;
			enemy2y = 200;
			enemy3x = 2500;
			enemy3y = 500;
			
			x = 6;
			y = 6;
			z = 6;
			key1 = 1;
			key2 = 1;
			key3 = 1;
			flag1 = 0;
			flag2 = 0;
			flag3 = 0;
		
		}
	

		
		else if (gamestate == 11)//level select(option 1)
		{
			is_game_on = 1;
			level = 1;
			gamestate = 69;
		}
		else if (gamestate == 12)//level select(option 2)
		{
			is_game_on = 1;
			level = 2;
			gamestate = 69;
		}
	

	

	if (key == 27)
	{
		if (gamestate == 1)
			gamestate = 0;
		else if (is_game_on == 1)
		{
			gamestate = 7;
			is_game_on = 0;
		}
		else if (gamestate == 5)
			gamestate = 1;
		else if (gamestate == 6)
			gamestate = 1;
		else if (gamestate == 11 || gamestate == 12 || gamestate == 13 || gamestate == 14)//Level Select
			gamestate = 1;
	}
	
	
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (is_game_on == 0)
	{
		if (gamestate == 1 || gamestate == 2 || gamestate == 3 || gamestate == 4)
		{
			if (key == GLUT_KEY_DOWN)
			{
				gamestate++;
			}
			if (key == GLUT_KEY_UP)
			{
				gamestate--;
			}
			if (gamestate > 4)
				gamestate = 1;
			if (gamestate < 1)
				gamestate = 4;
		}
		if (gamestate == 11 || gamestate == 12 || gamestate == 13 || gamestate == 14)
		{
			if (key == GLUT_KEY_DOWN)
				gamestate++;
			if (key == GLUT_KEY_UP)
				gamestate--;
			if (gamestate>14)
				gamestate = 11;
			if (gamestate < 11)
				gamestate = 14;
		}
	}
	
	if (is_game_on == 1)
	{
		if (key == GLUT_KEY_UP&&apolloy <= 760)
		{
			apolloy += 40;
		}
		if (key == GLUT_KEY_DOWN&&apolloy > 0)
		{
			apolloy -= 40;
		}

		if (key == GLUT_KEY_RIGHT&&apollox <= 1430)
		{
			apollox += 40;
		}

		if (key == GLUT_KEY_LEFT&&apollox > 20)
		{
			apollox -= 40;
		}
	}
	if (gamestate == 7 || gamestate == 8)
	{
		if (key == GLUT_KEY_DOWN)
			gamestate++;
		if (key == GLUT_KEY_UP)
			gamestate--;
		if (gamestate > 8)
			gamestate = 7;
		if (gamestate < 7)
			gamestate = 8;
	}
}







void game()
{
	if (is_game_on == 1)
	{
		enemy1x -= x;
		if (enemy1x < 0)
			enemy1x = iScreenWidth + 100;
		if (flag1 == 0)
		{
			if (enemy1x % 20 == 0)
				enemy1y += 15;
			if (enemy1y >= 800)
				flag1 = 1;
			if (enemy1x % 25 == 0)
				enemy1y -= 15;
		}
		else
		{
			if (enemy1x % 20 == 0)
				enemy1y -= 15;
			if (enemy1y <= 0)
				flag1 = 0;
			if (enemy1x % 25 == 0)
				enemy1y += 15;
		}
		enemy2x -= y;
		if (enemy2x < 0)
			enemy2x = iScreenWidth + 300;
		if (flag2 == 0)
		{
			if (enemy2x % 20 == 0)
				enemy2y += 15;
			if (enemy2y >= 800)
				flag2 = 1;
			if (enemy2x % 25 == 0)
				enemy2y -= 15;
		}
		else
		{
			if (enemy2x % 20 == 0)
				enemy2y -= 15;
			if (enemy2y <= 0)
				flag2 = 0;
			if (enemy2x % 25 == 0)
				enemy2y += 15;
		}
		enemy3x -= z;
		if (enemy3x < 0)
			enemy3x = iScreenWidth + 400;
		if (flag3 == 0)
		{
			if (enemy3x % 20 == 0)
				enemy3y += 15;
			if (enemy3y >= 800)
				flag3 = 1;
			if (enemy3x % 25 == 0)
				enemy3y -= 15;
		}
		else
		{
			if (enemy3x % 20 == 0)
				enemy3y -= 15;
			if (enemy3y <= 0)
				flag3 = 0;
			if (enemy3x % 25 == 0)
				enemy3y += 15;
		}
		
	}
}




int main()
{
	PlaySound("Sound Effects//StarWars.wav", NULL, SND_LOOP | SND_ASYNC);
	iSetTimer(.5, game);
	///srand((unsigned)time(NULL));
	iInitialize(1600, 900, "AUST GALAXY DASH");
	///updated see the documentations
	iStart();
	return 0;
}