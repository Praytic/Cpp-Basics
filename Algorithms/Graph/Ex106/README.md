﻿### 106. Точки сочленения

<pre>ограничение времени на тест: 0.25 сек.
ограничение памяти на тест: 32768 KB.</pre>

Вам задан неориентированный граф с N вершинами и M ребрами (1 <= N <= 200). В графе отсутствуют петли и кратные ребра. Известно, что граф связный. 
Найдите все точки сочленения в заданном графе, т.е. такие вершины, удаление которых ведет к увеличению числа компонент связности.

**Входные данные**

Граф задан во входном файле следующим образом: первая строка содержит числа N и M. Каждая из следующих M строк содержит описание ребра - два целых числа из диапазона от 1 до N - номера концов ребра.

**Выходные данные**

На первой строке выведите число C - количество точек сочленения в заданном графе. На следующей строке выведите C целых чисел - номера вершин, которые являются точками сочленения, в возрастающем порядке.

**Пример**

<pre>Ввод
5 6 
1 2 
2 3 
1 3 
3 4 
3 5 
4 5

Вывод
1 
3</pre>