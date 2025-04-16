#include"arithmetic.h"
int main() {
	int select, n, chance,loop;
	loop = 1;
	n = 5;
	chance = 3; 
	while (loop) {
		select = menu();
		switch (select) {
		case 0:
			loop=0;
			load();
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printBlank(60);
			printf("已退出，感谢游玩~\n\n\n");
			for (int a = 1; a <= 2000000000; a++) { ; }
			break;
		case 1:
			proAddtion(n,chance);
			break;
		case 2:
			proSubtraction(n, chance);
			break;
		case 3:
			proMultiplication(n, chance);
			break;
		case 4:
			proDivision(n, chance);
			break;
		case 5:
			n=settingNumber();
			load();
			break;
		case 6:
			chance=settingChance();
			load();
			break;
		}
	}
}
