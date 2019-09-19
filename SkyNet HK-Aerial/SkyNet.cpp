#include <iostream>

using namespace std;

int main()
{
	string SearchGrid[8][8];
	bool EnemyLocated = false;
	int EnemyLocatedRow = rand() % 7+1;
	int EnemyLocatedColumn = rand() % 7+1;
	SearchGrid[EnemyLocatedRow][EnemyLocatedColumn] = "Enemy is Located Here";
	while(EnemyLocated == false)
	{
		int GuessRow = rand() % 8;
		int GuessColumn = rand() % 8;
		if (GuessRow == EnemyLocatedRow && GuessColumn == EnemyLocatedColumn)
		{
			EnemyLocated = true;
			cout << "Enemy has been located at " << EnemyLocatedRow << "," << EnemyLocatedColumn << ".";
		}
	}

	return 0;
}