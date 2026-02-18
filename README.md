# Sin Array

Задание:
- Заполнить массив значениями sin(x)
- Один период синуса на весь массив
- Размер массива: 10^7
- Посчитать сумму элементов
- Возможность выбора типа массива (`float` или `double`)

## Сборка

# Для double
```bash
mkdir build
cd build
cmake -DUSE_DOUBLE=ON ..
cmake --build .
```

# Для float
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Запуск

После сборки запускаем программу:
```bush
Debug/sin_array.exe
```

## Результаты
# Float
Array type: float
Sum: 0.0754669

# Double
Array type: double
Sum: 4.89582e-11
