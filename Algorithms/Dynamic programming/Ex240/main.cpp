#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <ctime>
#include <memory>
#include <unordered_map>

using namespace std;

#define forn(i, n) for(size_t i = 0; i < n; i++)
typedef long long ll;

string line;
// Массив вариантов
ll arr[26];

// Функция подсчета количества подстрок
ll pre_calc (int p) {
// Если указатель p находится на заполненной
// ячейке, то обновляем её значение
	if (arr[p] != -1 && p > -1)
		return arr[p];
// Нулевая строка также считается подстрокой
	ll res = 1;
// Запускаем цикл от всех букв латинского алфавита
// и проверяем, есть ли эта буква в строке.
// Если есть, то запускаем функцию от нее и так далее.
// В итоге для буквы в строке в тойже позиции
// массива вариантов будет хранится количество
// вариантов подстрок, которые можно образовать,
// исходя из этой буквы.
	for (int i = 0; i < 26 && (p + 1 < line.size()); i++)
		for (int j = p + 1; j < line.size(); j++)
			if (line[j] == i + 'A') {
				res += pre_calc (j);
				break;
			}
	arr[p] = res;
	return res;
}

int main () {
	cin >> line;
// Массив вариантов заполняется -1
	for (int i = 0; i < line.size(); i++)
		arr[i] = -1;
	cout << pre_calc(-1) << endl; 
	return 0;
}