# Програма для представлення чисел у бінарному вигляді

## 📌 Опис
Ця програма на **C++** дозволяє конвертувати числа та текст у двійковий (бінарний) формат. Вона використовує два методи: **побітові операції** та **таблицю значень** для швидшої обробки.

## 🚀 Можливості
- 🔹 Перетворює **8-бітні, 16-бітні, 32-бітні та 64-бітні числа** у двійковий формат.
- 🔹 Відображає результат **двома методами**: побітовим зсувом та таблицею значень.
- 🔹 Конвертує **текст у двійкове представлення ASCII-кодів символів**.

## 🛠 Опис функцій
### `void initBinaryTable()`
📌 Створює таблицю **8-бітних двійкових значень** для швидкого доступу.

### `void printBinaryBitwise(uint64_t num, int bits)`
📌 Виводить число у двійковому форматі, використовуючи **побітові операції**.

### `void printBinaryTableMethod(uint64_t num, int bits)`
📌 Виводить число у двійковому форматі **за допомогою таблиці значень**.

### `void textToBinary(const string& text)`
📌 Конвертує **текст у двійковий формат** за ASCII-кодами символів.

## 📈 Використання
Програма обробляє задані числа різного розміру та перетворює рядок тексту **"I hate linus torvalds"** у двійковий код.

### 🔍 Приклад виводу
```
8-бітне число
1111 0101
1111 0101

16-бітне число
1111 0101 1010 0011
1111 0101 1010 0011

32-бітне число
1111 0101 1010 0011 1011 0100 1100 0010
1111 0101 1010 0011 1011 0100 1100 0010

64-бітне число
1111 0101 1010 0011 1011 0100 1100 0010 1001 1000 0111 0110 0101 0100 0011 0010
1111 0101 1010 0011 1011 0100 1100 0010 1001 1000 0111 0110 0101 0100 0011 0010

Текст у двійковому коді:
01001001 00100000 01101000 01100001 01110100 01100101 00100000 01101100 01101001 01101110 01110101 01110011 00100000 01110100 01101111 01110010 01110110 01100001 01101100 01100100 01110011
```

## 🏗 Як запустити
Для компіляції та запуску програми виконайте команди:
```sh
# Компіляція
g++ -o binary_converter binary_converter.cpp

# Запуск
./binary_converter
```

## 📌 Залежності
- 📦 **Стандартні бібліотеки C++** (`iostream`, `bitset`, `unordered_map`, `string`, `iomanip`)

## ℹ️ Примітки
- ✅ Метод із таблицею значень **працює швидше** при великій кількості обчислень.
- ✅ Побітові операції надають **більше контролю** над процесом перетворення.
