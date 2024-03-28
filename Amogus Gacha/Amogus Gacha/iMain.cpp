#include "iGraphics.h"
#include <ctime>
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int cur_x = 0, cur_y = 200, cur_size = 200, amog_pos_x = -20, amog_pos_y = 100, amog_size_x, amog_size_y;
time_t now = time(0);
time_t now_index_check = time(0) * 21;
//time_t now2 = time(0);
//time_t now5 = time(0) * now * now * now * now;
//time_t now6 = time(0) * now * now * now * now * now;
int random1 = rand() % 1000, random2 = rand() % 1000, random3 = rand() % 1000, random4 = rand() % 1000, random5 = rand() % 1000, random6 = rand() % 1000, random7 = rand() % 1000, random8 = rand() % 1000, random9 = rand() % 1000, random10 = rand() % 1000;
int rarity_check[10] = { (now * random1), (now * random2), (now * random3), (now * random4), (now * random5), (now * random6), (now * random7), (now * random8), (now * random9), (now * random10) };

typedef struct Pull Pull;

struct Pull{
	/*pic1 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic2 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic3 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic4 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic5 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic6 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic7 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic8 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	pic9 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	int pic[3] = { iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg"),
	iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Chermogus.jpg"),
	iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Walking Shrimogus.jpg") };
	*/
};

void iDraw()
{
	iClear();
	int cursor = iLoadImage("Assets\\selector.png");
	
	int Three[9] = { iLoadImage("3stars\\Goosemogus.jpg"),
		iLoadImage("3stars\\Amogus with Cat.jpg"),
		iLoadImage("3stars\\Amogus like a ball.jpg"),
		iLoadImage("3stars\\Sparkly Amogus.jpg"), 
		iLoadImage("3stars\\Walking Shrimogus.jpg"), 
		iLoadImage("3stars\\Chermogus.jpg"),
		iLoadImage("3stars\\Lemogus.jpg"),
		iLoadImage("3stars\\Napstablookmogus.jpg"), 
		iLoadImage("3stars\\Dumogus.jpg") };
	
	
	int Four[9] = { iLoadImage("4stars\\Spagghetmogus.jpg"),
		iLoadImage("4stars\\Eggmogus with Eggshells.jpg"),
		iLoadImage("4stars\\Cheesemogus.jpg"),
		iLoadImage("4stars\\Looking Shrimogus.jpg"),
		iLoadImage("4stars\\Teamogus.jpg"),
		iLoadImage("4stars\\Bormagmogus.jpg"),
		iLoadImage("4stars\\Sleeping Breadmogus.jpg"),
		iLoadImage("4stars\\Yellow Pizzamogus.jpg"),
		iLoadImage("4stars\\Pancakemogus.jpg") };
	
	
	int Five[10] = { iLoadImage("5stars\\Walking Eggmogus.jpg"),
		iLoadImage("5stars\\Bananamogus.jpg"),
		iLoadImage("5stars\\Sweet Potatomogus.jpg"),
		iLoadImage("5stars\\Breadmogus Group.jpg"),
		iLoadImage("5stars\\Red Pizzamogus.jpg"),
		iLoadImage("5stars\\Dumogus with mini Dumogus.jpg"),
		iLoadImage("5stars\\Shrimogus Riding a Shrimp.jpg"),
		iLoadImage("5stars\\Undymogus.jpg"),
		iLoadImage("5stars\\Sansamogus (Crossover).jpg"),
		iLoadImage("5stars\\Papyramogus.jpg") };


	int Six[7] = { iLoadImage("6stars\\Basket Breadmogus.jpg"), 
		iLoadImage("6stars\\Breakfastmogus.jpg"),
		iLoadImage("6stars\\Pancakemogus (Impostor).jpg"),
		iLoadImage("6stars\\Sitting Eggmogus.jpg"),
		iLoadImage("6stars\\Vegimogus.jpg"),
		iLoadImage("6stars\\Duo Pizzamogus.jpg"),
		iLoadImage("6stars\\Eating Sansamogus.jpg") };
	//iText(0, 100, This is a text, GLUT_BITMAP_HELVETICA_18);
	//iFilledRectangle(10, 10, 100, 100);
	//iSetColor(255, 255, 255);
	//pic1 = iLoadImage("G:\\academics\\CSE\\gittywitty\\Amogacha\\Amogus Gacha\\Amogus Gacha\\Goosemogus.jpg");
	
	
	//srand(time(0));
	//int pull = rand() % 8;

	//int rarity_check = now % 100;
	int x1 = 0;
	
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			int probability = rarity_check[i] % 100;
			if (probability < 1)
			{
				int index6 = (rarity_check[i] * 1000) % 7;
				iShowImage(0 + (i * 200), 200, 100, 200, Six[index6]);
			}
			else if (probability < 21)
			{
				int index5 = (rarity_check[i] * 1000) % 10;
				iShowImage(0 + (i * 200), 200, 200, 200, Five[index5]);
			}
			else if (probability < 61)
			{
				int index4 = (rarity_check[i] * 1000) % 9;
				iShowImage(0 + (i * 200), 200, 200, 200, Four[index4]);
			}
			else
			{
				int index3 = (rarity_check[i] * 1000) % 9;
				iShowImage(0 + (i * 200), 200, 200, 200, Three[index3]);
			}
		}
		else
		{
			int probability = rarity_check[i] % 100;
			if (probability < 5)
			{
				int index6 = (rarity_check[i] * 1000) % 7;
				iShowImage(0 + (x1 * 200), 0, 200, 200, Six[index6]);
			}
			else if (probability < 15)
			{
				int index5 = (rarity_check[i] * 1000) % 10;
				iShowImage(0 + (x1 * 200), 0, 200, 200, Five[index5]);
			}
			else if (probability < 65)
			{
				int index4 = (rarity_check[i] * 1000) % 9;
				iShowImage(0 + (x1 * 200), 0, 200, 200, Four[index4]);
			}
			else
			{
				int index3 = (rarity_check[i] * 1000) % 9;
				iShowImage(0 + (x1 * 200), 0, 200, 200, Three[index3]);
			}
			x1++;
		}
		
	}


	
	iShowImage(cur_x, cur_y, cur_size, cur_size, cursor);
	
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
	if (key == 'w')
	{
		if (cur_y == 200){
			cur_y += 0;
		}
		else{
			cur_y += 200;
		}
	}
	else if (key == 's')
	{
		if (cur_y == 0){
			cur_y -= 0;
		}
		else{
			cur_y -= 200;
		}
	}
	else if (key == 'd')
	{
		if (cur_x == 800){
			cur_x += 0;
		}
		else{
			cur_x += 200;
		}
	}
	else if (key == 'a')
	{
		if (cur_x == 0){
			cur_x -= 0;
		}
		else{
			cur_x -= 200;
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

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1000, 400, "Amogus Gacha");
	///updated see the documentations
	iStart();
	return 0;
}