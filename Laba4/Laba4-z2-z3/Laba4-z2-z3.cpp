#include <iostream> // Laba4-z2-z3 var18
int main() {
	setlocale(LC_ALL, "Rus");
	int square, cs;
	std::cout << "Введите площадь = ";
	std::cin >> square;
	if (square >= 83000) {
		std::cout << "Площадь не менее 83000 кв.км имеют следующие государства:\n";
		cs = 1;
	}
	else if (square < 83000 && square > 0) {
		std::cout << "Площадь менее 83000 кв.км имеют следующие государства:\n";
		cs = 2;
	}
	else {
		cs = 3;
	}
	switch (cs)
	{
	case 1:
std::cout << "Испания - 504000\nИталия - 301000\nВеликобритания - 244000\n";
std::cout << "Греция - 132000\nБолгария - 110000\nАвстрия - 83000\n";
		break;
	case 2:
std::cout << "Ирландия - 70000\nЛатвия - 65000\nДания - 43000\n";
std::cout << "Бельгия - 30000\nАндорра  - 500\nЛихтенштейн - 200\nВатикан - 100\n";
		break;
	default:
		std::cerr << "Произошла ошибка";
		break;
	}
}