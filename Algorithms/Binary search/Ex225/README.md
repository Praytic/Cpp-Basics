### 225. Нитки

<pre>ограничение времени на тест: 0.25 сек.
ограничение памяти на тест: 65536 KB.</pre>

Имеется N катушек с нитками. На первой из них A<sub>1</sub> см ниток, на второй - A<sub>2</sub> см,:, на N-ой - A<sub>N</sub> см. Для красивой вышивки требуется K штук кусков ниток равной длины. Требуется узнать какую наибольшую длину может иметь каждый из K кусков, если 
- нитки связывать нельзя, их можно только резать; 
- каждый из K кусков имеет длину равную целому числу сантиметров.

**Входные данные**

В первой строке входного файла записано два целых числа N и K (1 <= N, K <= 1000). Далее, во второй строке, следует N целых чисел A<sub>1</sub>, A<sub>2</sub>, ...,A<sub>N</sub> (1 <= A<sub>i</sub> <= 100000, для всех i=1,..,N), разделенных пробелами и/или переводами строк.

**Выходные данные**

Выведите единственное целое число - наибольшую возможную длину каждого из K равных кусков (возможно, что ответ равен 0).

**Пример**

<pre>Ввод
2 5 
2 4

Вывод
1</pre>
