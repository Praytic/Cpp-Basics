﻿### 114. Обход в ширину

<pre>ограничение времени на тест: 0.25 сек.
ограничение памяти на тест: 8192 KB.</pre>

Задан ориентированный граф из N вершин. Требуется найти путь из вершины v<sub>1</sub> в вершину v<sub>2</sub>, при этом *обязательно* использовать обход в ширину. Обход в ширину нало реализовать таким образом, что для очередной вершины графа в обходе надо просматривать все смежные с ней вершины в порядке увеличения их номера. 
Т.е. требуется реализовать "обычный" обход в ширину.

**Входные данные**

В первой строке через пробел записано три натуральных числа N, v<sub>1</sub>, v<sub>2</sub> (1 <= N <= 100, 1 <= v<sub>1</sub>, v<sub>2</sub> <= N). 
В каждой из следующих N строк записано по N чисел - матрица смежности графа. "1" обозначает, что между соотвествующими вершинами есть дуга, "0" - что нет.

**Выходные данные**

В первую строку выходного файла выведите длину пути (количество дуг графа в пути). Во вторую строку выведите сам путь начиная с вершины v<sub>1</sub> и заканчивая вершиной v<sub>2</sub>. 
Если пути нет, то надо вывести -1.

**Пример**

<pre>Ввод
5 1 5 
0 1 1 0 1 
1 0 0 1 1 
1 0 0 0 1 
0 1 0 0 1 
1 1 1 1 0

Вывод
1 
1 5</pre>