Задача №1 (10т.):

Направете програма, в която потребителят въвежда от stdin цяло число n. След това да се създаде масив от символи от n на брой елементи в динамичната памет. 
Елементите на масива да се инициализират с произволни стойности малки латински букви между ‘a’ и ‘z’.
След това се въвежда ново число m и масивът се да се разшири с нови m елемента. Новите елементи да се инициализират с главни латински букви между ‘А’ и ‘Z’.
След това се въвежда ново число k и масивът се да се разшири с нови k елемента. Новите елементи да се инициализират с произволни специални символи от следния списък - ‘!’, ‘?’, ‘$’, ‘@’, ‘*’, ‘%’, ‘-’. 
Накрая да се сложи терминиращ символ като последен елемент на масива. Да се следи дали всяка функция успешно заделя памет. 
В противен случай да се прекрати програмата с код за грешка и да се изведе подходящо съобщение в stderr. Да се разработят:

* Функция, която извежда в stdout елементите на масива.
* Функция, която намира броя на малките букви в масива.
* Функция, която намира най-често срещания символ в масива.

Програмата да се раздели на два .c файла и един хедърен файл с декларациите на функциите.  Вторият .c файл да е с дефинициите на трите функции.