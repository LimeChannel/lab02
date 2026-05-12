# Лабораторная работа №7 — Системы управления версиями (Git)

**Курс:** CASE-средства проектирования БД
**Репозиторий:** [github.com/LimeChannel/lab02](https://github.com/LimeChannel/lab02)

**Авторы:** Лобов Владимир, Андрей Дьяченко, Норайр Геворгян

---

## Цель работы

Освоить практические навыки работы с системой управления версиями Git: создание репозитория, ветвление, разрешение конфликтов, работа с pull request, rebase и настройка стиля кода.

---

## Выполненные задания

### 1. Создание репозитория на GitHub

Создан удалённый репозиторий `lab02` на GitHub. Первоначальный коммит содержит файл `LICENSE`.

4af9315 Initial commit

### 2. Клонирование репозитория и добавление материалов

Репозиторий клонирован локально. Добавлено задание лабораторной работы и исходные файлы из методического пособия:

- `ЛР7.pdf` — методическое пособие
- `sources/print.cpp` — реализация функций вывода
- `include/print.cpp` — заголовочный файл с объявлениями функций `print()`
- `examples/example1.cpp` — пример вывода строки в `stdout`
- `examples/example2.cpp` — пример вывода строки в файл `log.txt`
- `.gitignore` — игнорирование артефактов сборки (`*build*/`, `*install*/`, `*.swp`, `.idea/`)

a64253e added manual
653d04d added cpp files from manual

### 3. Создание файла с ошибкой синтаксиса

Добавлен файл `sources/hello_world.cpp` с намеренными синтаксическими ошибками (для последующего исправления в отдельной ветке).

5dec473 added hello_world with bad syntax

### 4. Доработка функциональности в основной ветке

В файл `hello_world.cpp` добавлен ввод имени пользователя и персонализированное приветствие (`Hello world from <name>`).

46d7b08 added greetings to hello_world

### 5. Работа с веткой и Pull Request

Создана ветка `patch1`. В ней исправлены синтаксические ошибки в `hello_world.cpp`. Затем создан Pull Request из `patch1` в `main`, который был рассмотрен и принят.

29c25e7 fixed syntax in hello_world        ← ветка patch1
fee4c26 Merge pull request #1 from LimeChannel/patch1

### 6. Настройка стиля кода (clang-format)

Добавлен файл конфигурации `.clang-format` и выполнено форматирование всех исходных файлов в соответствии с принятым стилем кодирования:

- `examples/example1.cpp`
- `examples/example2.cpp`
- `include/print.cpp`
- `sources/hello_world.cpp`
- `sources/print.cpp`

aad25c7 updated codestyle

### 7. Добавление комментариев

В файл `hello_world.cpp` добавлены комментарии, поясняющие логику работы программы (в ветке `patch2`).

1b1fbda added comments to hello_world
263d4ed updated codestyle

### 8. Rebase

Выполнена операция `git rebase` для переноса коммитов ветки `patch2` поверх актуальной версии `main`. Конфликты разрешены вручную. Итоговый коммит после rebase:

aa009bb rebase commit

---

## Структура репозитория

lab02/
├── examples/
│   ├── example1.cpp      # Вывод строки в stdout
│   └── example2.cpp      # Вывод строки в файл
├── include/
│   └── print.cpp         # Объявления функций print()
├── sources/
│   ├── hello_world.cpp   # Программа приветствия с вводом имени
│   └── print.cpp         # Реализация функций print()
├── .clang-format         # Конфигурация стиля кода
├── .gitignore            # Исключения для Git
├── LICENSE
└── ЛР7.pdf               # Методическое пособие

---

## Выводы

В ходе лабораторной работы были освоены следующие инструменты и приёмы работы с Git:

- Создание и клонирование репозитория на GitHub
- Фиксация изменений (`git add`, `git commit`)
- Работа с ветками (`git branch`, `git checkout`)
- Создание и принятие Pull Request на GitHub
- Слияние веток (`git merge`)
- Перебазирование (`git rebase`)
- Настройка `.gitignore`
- Форматирование кода с помощью `clang-format`
