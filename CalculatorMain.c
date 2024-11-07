#include<stdio.h>
#include "MenuModule.h"
#include "IntModule.h"
#define ERROR "입력오류\n"

int main()
{
	int menu=0;
	int subm=0;
	while(menu!=3)
	{
		menu=MainMenu();
		switch(menu)
		{
			case 1:
				subm=Intmenu();
				switch(subm)
				{
//					case 1:
//						IntSum();
//						break;
//					case 2:
//						IntSub();
//						break;
//					case 3:
//						IntMul();
//						break;
//					case 4:
//						IntDive();
//						break;
					case 5:
						break;
					default:printf(ERROR);
				}
			case 2:
				subm=Doumenu();
				switch(subm)
				{
					case 1:
						DouSum();
						break;
					case 2:
						DouSub();
						break;
					case 3:
						DouMul();
						break;
					case 4:
						DouDiv();
						break;
					case 5:
						break;
					default:
						printf(ERROR);
				}
		}
	}
}
