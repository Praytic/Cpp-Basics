﻿### 103. Покрашенный граф

<pre>ограничение времени на тест: 0.25 сек.
ограничение памяти на тест: 2048 KB.</pre>

Дан ориентированный граф, у которого каждая дуга покрашена в один из трех цветов. Требуется найти длину кратчайшего пути из 1й вершины в N-ую, если в пути не могут идти подряд две дуги одного цвета.

**Входные данные**

В первой строке записаны N и M (2 <= N <= 200, 0 <= M <= N*N). Далее идет M строк с описанием дуг. Каждая дуга описывается тремя целыми числами X, Y, C - дуга из вершины X в вершину Y покрашена в цвет C (1 <= X, Y <= N, 1 <= C <= 3). Между каждой парой вершин не может быть более одной дуги в одном направлении.

**Выходные данные**

Выходные данные. Выведите длину кратчайшего пути из 1й вершины в N-ую. Если пути не существует, то выведите -1.

**Пример(ы)**

<pre>Ввод
4 4 
1 2 1 
2 3 2 
3 4 3 
2 4 1 

Вывод
3</pre>

<pre>Ввод
3 2 
1 2 1 
2 3 1 

Вывод
-1</pre> 