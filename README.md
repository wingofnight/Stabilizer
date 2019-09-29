[![license](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/wingofnight/Stabilizer/blob/master/LICENSE) [![CodeFactor](https://www.codefactor.io/repository/github/wingofnight/stabilizer/badge)](https://www.codefactor.io/repository/github/wingofnight/stabilizer)
[![github](https://github.githubassets.com/favicon.ico)](https://github.com/wingofnight)

# Stabilizer
![Stabilizer](https://github.com/wingofnight/Stabilizer/blob/master/maxresdefault%20(1).jpg)

***
- **Год выпуска: 2019**
- **Разработчик : © Pitetsky Vladimir, 2019. wingofnight777@gmail.com ; https://vk.com/wizard_entertainment;**
- **Версия: 1; Сентябрь 2019)**
- [<img src=https://github.com/wingofnight/Stabilizer/blob/master/wizard.jpg width="150" height="70"/>](https://vk.com/wizard_entertainment)
***

## СОДЕРЖАНИЕ
- [Описание](#descript)
- [Как использовать](#chu)
- [Обновления](#chang)  
***

### <a name = "descript"> Описание: </a>

Stabilizer - начнем с того, что это не программа, а функция для вашей программы. Цель "Стабилизатора" поправить таблицу ASCII в 
консоли. Ведь в водимые Русские символы, обратно уже не выводятся корректно. Стабилизатор решает эту проблему, и теперь можно пользоваться латиницей, сколь душа просит. 
***
### <a name="chu"> Как пользоваться </a>

Stabilizer - это не целостная программа, а функция - помошник, которую вы используете в своем коде. Закидывайте заголовочный файл, в директорию к своей программе. Далее подключайте заголовок - "Stabilizer.h" Используйте функцию Stabilizer(); 

Вот пример такого ввода:

```cpp
cout << "Введите имя нового сотрудника\n\n";
string name;
cin >> name;
string newWorker = Stabilizer(name);
cout << endl; cout << endl;
cout<< newWorker;
 ```
 ![Stabilizer](https://github.com/wingofnight/Stabilizer/blob/master/Снимок%20экрана%20(194).png)
 
 Как вы можете заметить, данные записаны в переменную "newWorker" уже в исправленном виде. 

***
### <a name="change"> Будущие обновления </a>

• Добавится возможность писать через пробел.

• Добавится возможность выводить текст транскриптом. 
