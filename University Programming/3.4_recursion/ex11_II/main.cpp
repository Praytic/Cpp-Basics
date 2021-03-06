#include <iostream>
#include <iomanip>

using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define ll long long
#define ini(type, n) \
	type n; \
	cin >> n;

int N;
// Функция заходит в рекурсию с неизмененным значением х N раз.
// Затем, выходя из рекурсии, возвращает вычесления выражения
// и подставляет под х, и так до тех пор, пока функция полностью
// не выйдет из рекурсии.
double calc (int n, double x) {
	if (n != N) {
		return x/(calc(n+1, x) + n);
	}
	else return x/(x + n);
}

int main()
{
	cin >> N;
	ini(double, b);
	cout << fixed << setprecision(10) << b/calc(0, b) << endl;
}
