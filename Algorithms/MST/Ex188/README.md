### 188. Алгоритм Краскала

<pre>ограничение времени на тест: 0.5 сек.
ограничение памяти на тест: 65536 KB.</pre>


Дан связный взвешенный неориентированный связный граф из N вершин и M ребер. Требуется найти в нем каркас минимального веса (т.е. такой каркас, сумма ребер которого минимальна).

**Входные данные**

В первой строке записаны N и M (2 <= N <= 10000, N-1 <= M <= 100000). Дальше идет M строк с тройками целых чисел X, Y, L - ребро из X в Y имеет вес L (1 <= X,Y <= N, 1 <= L <= 100000). В графе могут присутствовать кратные ребра.

**Выходные данные**

В первой строке выведите вес минимального каркаса. В следующих N-1 строках выведите ребра этого каркаса.
Выводите тот каркас, который получается, если в алгоритме Краскала сортировать ребра сначала по длине, затем по первой вершине ребра, затем по второй (первая и вторая -- как во входных данных). Порядок ребер при выводе сохраните (то есть выводите их в таком порядке, как они получаются).

**Пример**

<pre>Ввод
10 15
4 8 90
9 4 100
2 4 39
8 3 19
7 8 38
7 1 52
5 3 15
6 1 20
10 4 64
6 8 31
9 5 32
4 6 1
5 2 10
9 3 71
5 2 58

Вывод
230
4 6
5 2
5 3
8 3
6 1
6 8
9 5
7 8
10 4</pre>
