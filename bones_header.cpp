#include "bones_header.h"

void InputDynamicArray(int** a, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) {
		a[i] = (int*)malloc(cols * sizeof(int));
		for (int j = 0; j < cols; j++) {
			cout << "Enter elements of a[" << i << "][" << j << "] = "; cin >> a[i][j];
		}
	}
}

void OutputDynamicArray(int** a, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;;
		}
	}
}

int game_title(int pl)
{
	int pos;
	cout << "\n\n\t\t\t\t --- Èãðà â êîñòè ---\n\n\t\t";
	cout << "\n\t\t\t 1 - Áðîñèòü êîñòè                 2 - Âûõîä \n\n\t\t";
	cin >> pos;
	if (pos == 1)
		return pos;
	else
		return 0;

}

void Grani(int* result)
{
	int res = 0;
	for (int i = 0; i < 5; i++) {
		res = result[i];
		switch (res)
		{
		case 1: {
			cout << "\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |      ##      |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";

			break;
		}
		case 2: {
			cout << "\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |   ##         |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |         ##   |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";

			break;
		}
		case 3:
		{
			cout << "\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |   ##         |\n\t\t\t\t";
			cout << "   |      ##      |\n\t\t\t\t";
			cout << "   |          ##  |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			break;
		}
		case 4:
		{
			cout << "   ----------------\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |   ##     ##  |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |   ##     ##  |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			break;
		}
		case 5:
		{
			cout << "\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			cout << "   |  ##      ##  |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |      ##      |\n\t\t\t\t";
			cout << "   |   ##     ##  |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			break;
		}
		case 6:
		{
			cout << "\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			cout << "   |   ##    ##   |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |   ##    ##   |\n\t\t\t\t";
			cout << "   |              |\n\t\t\t\t";
			cout << "   |   ##    ##   |\n\t\t\t\t";
			cout << "   ----------------\n\t\t\t\t";
			break;
		}
		default:
			break;
		}
	}

}
