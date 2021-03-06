﻿### 113. Строим граф

<pre>ограничение времени на тест: 0.75 сек.
ограничение памяти на тест: 32768 KB.</pre>

Дан ориентированный граф. С ним проводят две операции: 

- добавляют дугу из вершины v<sub>1</sub> в вершину v<sub>2</sub> длины 1 или 2; 
- запрашивают длину кратчайшего пути из вершины v<sub>1</sub> в вершину v<sub>2</sub>. 

В начальный момент времени данный орграф пустой (то есть не содержит ни одной дуги). Ваша задача для каждой операции второго типа выдать искомое число или -1, если пути из v<sub>1</sub> в вершину v<sub>2</sub> не существует. 
Между данной парой вершин может быть более одной дуги.

**Входные данные**

В первой строке записано число N (1 <= N <= 40) - количество вершин в орграфе и число M (1 <= M <= 50000) - количество проводимых операций. Описание операции первого типа имеет вид "1 v<sub>1</sub> v<sub>2</sub> L" (L - длина дуги, 1 <= L <= 2), операции второго типа - "2 v<sub>1</sub> v<sub>2</sub>".

**Выходные данные**

Для каждой операции второго типа выведите искомое число в отдельную строку.

**Пример**

<pre>Ввод
4 3 
2 1 2 
1 1 2 1 
2 1 2

Вывод
-1 
1</pre>