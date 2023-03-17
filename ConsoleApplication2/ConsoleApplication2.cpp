#include <iostream>
using namespace std;
enum menuItems
{
	ENTER_DATA = 1,
	OUTPUT_DATA = 2,
	SORT_BY_MOBILE_NUM = 3,
	SORT_BY_TEL_NUM = 4,
	QUIT = 5
};

int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 4;
	int userChoice, mobTel[n], tel[n], temp;
	bool isDataEntered = false;
	do {
		cout << "Your choice:\n";
		cout << "1 — Ввести пользовательские данные\n";
		cout << "2 — Вывести пользовательский данные\n";
		cout << "3 — Отсортировать по номерам мобильных\n";
		cout << "4 — Отсортировать по домашним номерам телефонов\n";
		cout << "5 — Выход\n";
		cin >> userChoice;
		switch (userChoice) {

		case ENTER_DATA:
		{
			cout << "Пожалуйста, введите данные для каждого "
				"клиента\n";
			isDataEntered = true;
			for (int i = 0; i < n; i++)
			{
				cout << "Введите номер мобильного телефона для ";
				cout << i + 1 << " клиента:\n";
				cin >> mobTel[i];
				cout << "Ввод номера телефона для ";
				cout << i + 1 << " клиента:\n";
				cin >> tel[i];
			}

			break;
		}

		case OUTPUT_DATA:
		{
			if (isDataEntered)
			{
				cout << "Customer's data:\n";
				cout << "Cust.ID\tMobile number\tTel."
					"number\n";
				for (int i = 0; i < n; i++)
				{
					cout << i + 1 << " " << mobTel[i];
					cout << " " << tel[i] << "\n";
				}
			}
			else
			{
				cout << "Нет данных!" << "\n";
				cout << "Пожалуйста,сначала введите данные для каждого "
					"Клиента\n";
			}

			break;
		}

		case SORT_BY_MOBILE_NUM:
		{
			if (isDataEntered)
			{
				cout << "Сортировка данных мобильных телефонов ....\n";
				for (int i = 1; i < n; ++i)
				{
					for (int r = 0; r < n - i; r++)
					{
						if (mobTel[r] < mobTel[r + 1])
						{
							temp = mobTel[r];
							mobTel[r] = mobTel[r + 1];
							mobTel[r + 1] = temp;
							temp = tel[r];
							tel[r] = tel[r + 1];
							tel[r + 1] = temp;
						}
					}
				}
			}
			else
			{
				cout << "Нет данных!" << "\n";
				cout << "Пожалуйста,сначала введите данные для каждого "
					"Клиента\n";
			}
			break;
		}


		case SORT_BY_TEL_NUM:
		{
			if (isDataEntered)
			{
				cout << "Сортировка данных по номеру тек ....\n";
			}
			else
			{
				cout << "Нет данных!" << "\n";
				cout << "Пожалуйста,сначала введите данные для каждого "
					"Клиента\n";
			}
			break;
		}
		case QUIT:
		{
			cout << "До свидания!";
			break;
		}

		default:
			cout << "некорректный элемент выбора";
		}
	} while (userChoice != 5);
}