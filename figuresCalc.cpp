/*
Разработать программное средство для расчета характеристик (площадь, периметр,
длина окружности) геометрических фигур с демонстрацией хода расчета с
формулами
Треугольник
Прямоугольник
Круг
Параллелограмм
Трапеция
*/
#define _CRT_SECURE_NO_WARNINGS
#define STRING_SIZE 500
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
/// <summary>
/// Функция для вычисления параметров окружности
/// </summary>
/// <param name="radius">радиус окружности</param>
void calculate_circle(double radius) {
    printf("Вы выбрали круг.\n");

    //формула площади круга
    double area = 3.14 * pow(radius, 2);
    printf("Формула площади круга: pi * (r * r)\n");
    printf("S = 3.14 * (%.2lf * %.2lf)\n", radius, radius);
    printf("Площадь круга равна %.2lf\n", area);

    //формула длины окружности
    double circumference = 2 * 3.14 * radius;
    printf("Формула длины окружности: 2*pi * r\n");
    printf("Длина окружности равна = 2 * 3.14 * %.2lf\n",radius);
    printf("Длина окружности равна %.2lf\n", circumference);
}

/// <summary>
/// Функция для вычисления параметров трапеции
/// </summary>
/// <param name="base1">Основание1</param>
/// <param name="base2">Основание2</param>
/// <param name="height">Высота</param>
/// <param name="side_a">Сторона1</param>
/// <param name="side_b">Сторона2</param>
void calucalate_trapezoid(double base1, double base2, double height, double side_a, double side_b)
{
    printf("Вы выбрали трапецию.\n");

    //формула площади трапеции
    double area = 0.5 * (base1 + base2) * height;
    printf("Формула площади трапеции: ((основание1 + основание2)/2) * h\n");
    printf("S = ((%.2lf + %.2lf)/2) * %.2lf\n",base1,base2,height);
    printf("S = %.2lf\n", area);

    //формула периметра трапеции
    double perimetr = base1 + base2 + side_a + side_b;
    printf("Формула периметра трапеции: a + b + c + d\n");
    printf("P = %.2lf + %.2lf + %.2lf + %.2lf\n", base1, base2, side_a, side_b);
    printf("P = %.2lf\n", perimetr);
}

/// <summary>
/// Функция для расчёта параметров параллелограмма
/// </summary>
/// <param name="base">Основание</param>
/// <param name="height">Высота</param>
/// <param name="side_a">Сторона a</param>
/// <param name="side_b">Сторона b</param>
void calculate_parallelogram(double base, double height, double side_a, double side_b)
{
    printf("Вы выбрали параллелограмм.\n");

    //формула для площади параллелограмма
    printf("\nФормула для расчета площади параллелограмма: S = a * h\n");
    printf("S = %.2lf * %.2lf\n", base, height);

    double area = base * height;
    printf("Площадь параллелограмма: %.2lf квадратных единиц.\n", area);

    //формула для периметра параллелограмма
    printf("\nФормула для расчета периметра параллелограмма: P = 2 * (a + b)\n");
    printf("P = 2 * (%.2lf + %.2lf)\n", side_a, side_b);

    double perimeter = 2 * (side_a + side_b);
    printf("Периметр параллелограмма: %.2lf единиц.\n", perimeter);

}

/// <summary>
/// Функция для вычисления параметров прямоугольника по его ширине и высоте
/// </summary>
/// <param name="width">Ширина прямоугольника</param>
/// <param name="height">Высота прямоугольника</param>
void calculate_rectangle(double width, double height) {
    printf("Вы выбрали прямоугольник.\n");

    //формула площади прямоугольника
    double area = width * height;
    printf("Формула площади прямоугольника: a x b\n");
    printf("S = %.2lf * %.2lf\n", width, height);
    printf("Площадь прямоугольника равна %.2lf\n", area);

    //формула периметра прямоугольника
    double perimeter = 2 * (width + height);
    printf("Формула периметра прямоугольника: 2(a + b)\n");
    printf("P = 2 * (%.2lf + %.2lf)\n", width, height);
    printf("Периметр прямоугольника равен %.2lf\n", perimeter);
}

/// <summary>
/// Функция для вычисления параметров треугольника по его основанию и высоте
/// </summary>
/// <param name="base">Основание треугольника</param>
/// <param name="height">Высота треугольника</param>
void calculate_triangle(double base, double side_a, double side_b) {
    printf("Вы выбрали треугольник.\n");

    //формула периметра треугольника
    double perimeter = side_a + side_b + base;
    printf("Формула периметра треугольника: a + b + c\n");
    printf("P = %.2lf + %.2lf + %.2lf\n", side_a, side_b, base);
    printf("Периметр треугольника равен %.2lf\n", perimeter);

    //формула площади треугольника
    double semi_perimeter = 0.5 * perimeter;
    double area = sqrt(semi_perimeter * (semi_perimeter - side_a) * (semi_perimeter - side_b) * (semi_perimeter - base));
    printf("Формула площади треугольника: (P/2 * ((P/2) - a) * ((P/2) - b) * ((P/2) - c))^(1/2)\n");
    printf("Полупериметр = %.2lf / 2\n", perimeter);
    printf("S = (%.2lf * (%.2lf - %.2lf) * (%.2lf - %.2lf) * (%.2lf - %.2lf))^(1/2)\n", semi_perimeter, semi_perimeter, side_a,semi_perimeter,side_b, semi_perimeter,base);
    printf("Площадь треугольника равна %.2lf\n", area);

    
}
//функция для очистки буфера ввода
void clearInputBuffer(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

//проверяет, что строка содержит только числа с плавающей запятой
bool isValidDouble(const char* str) {
    if (*str == '-' || isdigit(*str))
        ++str;
    else
        return false;

    bool hasDecimalPoint = false;
    while (*str) {
        if (*str == '.') {
            if (hasDecimalPoint)
                return false;  // Больше одного десятичного знака
            hasDecimalPoint = true;
        }
        else if (!isdigit(*str)) {
            return false;  // Нецифровой символ
        }
        ++str;
    }
    return true;
}

//функция для безопасного считывания вещественного числа
double readDouble(const char* prompt) {
    char input[STRING_SIZE];
    double value;

    do {
        printf("%s", prompt);
        fgets(input, sizeof(input), stdin);  // Читаем строку целиком
        input[strcspn(input, "\n")] = '\0';   // Удаляем символ новой строки

        if (strlen(input) > 0 && isValidDouble(input)) {
            value = atof(input);
            if (value >= 0) {  // Проверим значение на неотрицательность
                return value;
            }
            else {
                printf("Отрицательные значения недопустимы. Повторите ввод.\n");
            }
        }
        else {
            printf("Некорректный ввод. Пожалуйста, введите положительное число.\n");
        }
    } while (true);
}


bool isNumber(char* input) {
    for (int i = 0; input[i] != '\0'; i++)
        if (isalpha(input[i]))
            return false;
    return true;
}

void ShowMenu() {
    printf("Выберите фигуру:\n");
    printf("1. Круг\n");
    printf("2. Прямоугольник\n");
    printf("3. Треугольник\n");
    printf("4. Параллелограмм\n");
    printf("5. Трапеция\n");
    printf("6. Выход из программы\n");

    printf("Ваш выбор: ");
}
int main() {

    setlocale(LC_ALL, "Russian");
    double base, base2, height, width, radius, side_a, side_b, side_c;
    char* input = (char*)malloc(STRING_SIZE * sizeof(char));
    int choice;
    bool check = true;
    do
    {
        ShowMenu();

        scanf("%s", input);
        
        while (atof(input) - atoi(input) != 0 || !isNumber(input))
        {
            
            printf("Некорректный ввод. Попробуйте ещё раз.\n");
            ShowMenu();
            scanf(" %s", input);
        }
        choice = atoi(input);
        clearInputBuffer();

        switch (choice) {
        case 1:

            radius = readDouble("Введите радиус круга: \n");
            calculate_circle(radius);
            break;

        case 2:
            width = readDouble("Введите ширину прямоугольника: \n");
            height = readDouble("Введите высоту прямоугольника: \n");
            calculate_rectangle(width, height);
            break;

        case 3:
            base = readDouble("Введите основание треугольника: \n");
            side_a = readDouble("Введите длину первой стороны треугольника(которая не является основанием): \n");
            side_b = readDouble("Введите длину второй стороны треугольника(которая не является основанием): \n");
            calculate_triangle(base, side_a, side_b);
            break;
        case 4:
            side_a = readDouble("Введите первую сторону параллелограмма(не явл. основанием): \n");
            side_b = readDouble("Введите вторую сторону параллелограмма(не явл. основанием): \n");
            base = readDouble("Введите основание параллелограмма: \n");
            height = readDouble("Введите высоту параллелограмма: \n");
            calculate_parallelogram(base, height, side_a, side_b);
            break;
        case 5:
            base = readDouble("Введите верхнее основание трапеции: \n");
            base2 = readDouble("Введите нижнее основание трапеции: \n");
            height = readDouble("Введите высоту трапеции: \n");
            side_a = readDouble("Введите первую сторону трапеции(не основание): \n");
            side_b = readDouble("Введите вторую сторону трапеции(не основание): \n");
            calucalate_trapezoid(base, base2, height, side_a, side_b);
            break;
        case 6:
            printf("Завершение работы программы...\n");
            break;

        default:
            printf("Неверный ввод. Попробуйте еще раз.\n");
            break;
        }
    } while (choice != 6);
    

    return 0;
}

