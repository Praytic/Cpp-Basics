### 409. Студенческие советы

<pre>ограничение времени на тест: 0.75 сек.
ограничение памяти на тест: 262144 KB.</pre>

Задано число k. Каждый студенческий совет должен состоять из k студентов. Важное правило — каждый совет состоит из студентов из разных групп. То есть никакие два студента из одной группы не могут оказаться в одном совете.
Конечно, каждый студент должен входить не более чем в один совет (возможно, что некоторые студенты не входят ни в один).
Задан массив a<sub>1..n</sub>, где a<sub>i</sub> — количество студентов в i-ой группе. Какое максимальное число советов может быть образовано?

**Входные данные**

В первой строке задано k (2 ≤ k ≤ 20). Далее задано n (k ≤ n ≤ 50). Затем заданы элементы a<sub>1</sub>, a<sub>2</sub>,..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 1000000000). Все числа разделяются пробелами и/или переводами строк.

**Выходные данные**

Выведите искомое значение.

**Пример(ы)**

input.txt | output.txt
--- | ---
4 5 4 4 4 4 4  | 5
5 6 1 2 3 4 5 6  | 3 

**Пояснение**

*Во втором примере советы могут быть образованы так: (2,3,4,5,6), (2,3,4,5,6), (1,3,4,5,6), где числа в скобках — номера групп членов совета.*
