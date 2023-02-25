#include "bones_header.h"

int main()
{
start:
	system("chcp 1251>null");
	srand(time(NULL));
	int** player, * colomns, * score, * results;
	int rows = 0, cols = 1, var = 1, result = 0, count = 0, hod = 0, restart = 0, count_max = 0;
	int winner = 0, r = 0, bonus_count = 0, count_bn = 0, sc = 0;
	cout << "\n\n\t\t\t\tВведите количество игроков "; cin >> rows;
	while (rows < 2 || rows > 5)
	{
		cout << "\n\n\t\t\t\tВведите больше игроков(от 2 до 5)\nВведите количество игроков: "; cin >> rows;
	}
	player = (int**)malloc(sizeof(int*) * rows);
	score = (int*)malloc(sizeof(int) * rows);
	results = (int*)malloc(sizeof(int) * rows);
	bool found_duplicates = false;

	while (r <= 500)
	{
		if (game_title(var) == 0)
		{
			cout << "\n\n\t\t\t\tИГРА ОКОНЧЕНА" << "\n\n\t\t" << endl;
			goto end;
		}
		hod++;
		for (int i = 0; i < rows; i++)
		{
			if (hod == 1)results[i] = 0;
			player[i] = (int*)malloc(sizeof(int) * cols);
			for (int j = 0; j < cols; j++)
			{
				player[i][j] = 0;
				cout << "\n\n\t\t\t\tИгрок " << i + 1 << "\n\n\t\t" << endl;
				cout << "\n\n\t\t\t\tХод " << hod << "\n\n\t\t" << endl;
				for (int l = 0; l < 5; l++)
				{
					score[l] = rand() % 6 + 1;
					player[i][j] += score[l];
				}
				for (int l = 0; l < 5; l++)
				{
					count = 0;
					for (int t = 0; t < 5; t++)
					{
						if (score[l] == score[t])
							count++;

					}
					if (count_max < count)
					{
						count_max = count;
						found_duplicates = true;
					}
					if (!found_duplicates)cout << "\n\n\t\t\t\tНет повторяющихся чисел!" << "\n\n\t\t" << endl;
				}
				player[i][j] *= count_max;
				results[i] += player[i][j];
				Grani(score);
				cout << "\n\n\t\t\t\tСумма за ход:  " << player[i][j] << "\n\n\t\t" << endl;
				cout << "\n\n\t\t\tОбщий результат:  " << results[i] << "\n\n\t\t" << endl;
			}
			if (results[i] >= 1000)
			{
				r = results[i]; winner = i + 1; break;
				break;
				for (int j = 0; j < rows; j++)
					free(player[j]);
				free(player);
				free(score);
			}
		}
		cout << "\n\n\t\t\t\tОчки за " << hod << " ход: " << endl;
		for (int i = 0; i < rows; i++)
			cout << "\n\n\t\t\tИгрок " << i + 1 << " - " << results[i] << endl;

	}
	cout << "\n\n\t\t\t\t --- Игра в кости ---\n\n\t\t";
	cout << "\n\n\t\t\tПобeдил игрок " << winner << " с результатом - " << r << " за " << hod << " ходов!" << endl;
	cout << "\n\n\t\t\t\tРейтинг игроков: " << endl;
	for (int i = 0; i < rows; i++)
		cout << "\n\n\t\t\tИгрок " << i + 1 << " - " << results[i] << endl;
	cout << "\n\n\t\t\t\tЖелаете продолжить игру?\n\n\t\t\t\t1 - ДА\n\n\t\t\t\t2 - НЕТ\n"; cin >> restart;
	if (restart == 1) goto start;
	else goto end;
end:
	free(results);
	winner = 0; r = 0;
}