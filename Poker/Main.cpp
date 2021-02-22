#include <ctime>
#include <cstdlib>

#include "Table.h"

int main()
{
	auto seed = std::time(nullptr);
	std::srand(unsigned(seed));
	const int HANDS = 1;
	Table table(HANDS);
	while (true)
	{
		table.deal();
		table.showCards(std::cout);
		system("pause");
		system("cls");
		table.reset();
	}
}