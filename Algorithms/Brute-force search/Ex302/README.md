### 302. Судоку

<pre>ограничение времени на тест: 0.25 сек.
ограничение памяти на тест: 65536 KB.</pre>

В игре Судоку игроку дается квадратное поле 9 на 9, разбитое на 81 клеток и 9 квадратов 3 на 3. В некоторых клетках поля уже записаны числа от 1 до 9. Задача игрока - заполнить остальные клетки числами от 1 до 9 таким образом, что: 
- Все числа в пределах одной строки различны. 
- Все числа в пределах одного столбца различны. 
- Все числа в пределах одного квадрата 3 на 3 различны. 
Ваша задача - заполнить поле по заданной начальной конфигурации.

**Входные данные**

В девяти строках содержится по 9 цифр: начальная конфигурация поля. В случае, если в клетке ничего не записано, на соответствующем месте стоит 0.

**Выходные данные**

Выведите решенное Судоку в том же формате. Гарантируется, что решение существует. Если решений несколько, выведите любое.

**Пример**


<pre>Ввод
567823941 
931764582 
824951360 
048315796 
679248135 
153607824 
782136450 
395472618 
406589273

Вывод
567823941 
931764582 
824951367 
248315796 
679248135 
153697824 
782136459 
395472618 
416589273</pre>

