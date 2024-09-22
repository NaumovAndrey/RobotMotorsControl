Создан репозиторий на github.com\
Создан файл task.md\
На ps создан публичный ключ ```ssh-keygen -t 4096 -C "naumov.a.n@mail.ru"```\
На портале github добавлен публичны ключ файл id_rsa.pub\
Склонирован репозиторий через ssh соединение: ```git clone git@github.com:NaumovAndrey/RobotMotorsControl.git```\
Создан файл README.md ```touch README.md```\
Добавлен файл README.md как отслеживаемый ```git add README.md```\
Создан коммит 'create README.md' ```git commit -m'create README.md'```\
Создан файл RobotMotorsControl.cpp ```touch RobotMotorsControl.cpp``` (с ипользованием приложения VSC)\
Добавлен файл RobotMotorsControl.cpp как отслеживаемый ```git add RobotMotorsControl.cpp```\
Создан коммит ```git commit -m'create RobotMotorsControl.cpp'```\
Работа в приложении VSC\
Реализация приложения...\
Сохранены изменения в репозитории и отправлены на github\
Создана новая ветка для внесения изменения ```git branch smoothSpeed```\
Передти на ветку smoothSpeed ```git checkout smoothSpeed```\
Реализация улучшения\
Сохранение изменений и отправка на github ```git add .``` ```git commit -m 'update file RobotController.cpp' ```\
```naumov@pc-home:~/Documents/skillbox/git/git_/RobotMotorsControl/RobotMotorsControl$ git push --set-upstream origin smoothSpeed
Перечисление объектов: 11, готово.
Подсчет объектов: 100% (11/11), готово.
При сжатии изменений используется до 4 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (6/6), 829 байтов | 829.00 КиБ/с, готово.
Всего 6 (изменения 4), повторно использовано 0 (изменения 0)
remote: Resolving deltas: 100% (4/4), completed with 4 local objects.
remote: 
remote: Create a pull request for 'smoothSpeed' on GitHub by visiting:
remote:      https://github.com/NaumovAndrey/RobotMotorsControl/pull/new/smoothSpeed
remote: 
To github.com:NaumovAndrey/RobotMotorsControl.git
 * [new branch]      smoothSpeed -> smoothSpeed
Ветка «smoothSpeed» отслеживает внешнюю ветку «smoothSpeed» из «origin».```\


naumov@pc-home:~/Documents/skillbox/git/git_/RobotMotorsControl/RobotMotorsControl$ git checkout main
M       README.md
D       RobotMotorsControl.cpp
Переключились на ветку «main»
Эта ветка соответствует «origin/main».
naumov@pc-home:~/Documents/skillbox/git/git_/RobotMotorsControl/RobotMotorsControl$ git branch
* main
  smoothSpeed
naumov@pc-home:~/Documents/skillbox/git/git_/RobotMotorsControl/RobotMotorsControl$ git merge smoothSpeed
Обновление 854e2dd..75c675f
Fast-forward
 RobotMotorsControl/src/Motor.cpp           | 13 +++++++++++++
 RobotMotorsControl/src/RobotController.cpp |  8 ++++++--
 2 files changed, 19 insertions(+), 2 deletions(-)
naumov@pc-home:~/Documents/skillbox/git/git_/RobotMotorsControl/RobotMotorsControl$ git status
Текущая ветка: main
Ваша ветка опережает «origin/main» на 1 коммит.
  (используйте «git push», чтобы опубликовать ваши локальные коммиты)

Изменения, которые не в индексе для коммита:
  (используйте «git add/rm <файл>...», чтобы добавить или удалить файл из индекса)
  (используйте «git restore <файл>...», чтобы отменить изменения в рабочем каталоге)
        изменено:      ../README.md
        удалено:       ../RobotMotorsControl.cpp

Неотслеживаемые файлы:
  (используйте «git add <файл>...», чтобы добавить в то, что будет включено в коммит)
        ../.vscode/

индекс пуст (используйте «git add» и/или «git commit -a»)
naumov@pc-home:~/Documents/skillbox/git/git_/RobotMotorsControl/RobotMotorsControl$ git commit -am'merge branch'
[main f8dc3ea] merge branch
 2 files changed, 33 insertions(+), 16 deletions(-)
 rewrite README.md (69%)
 delete mode 100644 RobotMotorsControl.cpp
```
 
 Теперь можно удалить ветку smoothSpeed\
 ```git push origin --delete smoothSpeed ``` на сервере git hub
 ```git branch -d smoothSpeed``` локально