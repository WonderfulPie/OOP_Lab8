// Lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

// Базовий клас Man
class Man {
private:
    string name;
    int age;
    char gender;
    double weight;

public:
    // Конструктор класу Man
    Man(string n, int a, char g, double w) : name(n), age(a), gender(g), weight(w) {}

    // Метод для зміни імені
    void setName(string n) {
        name = n;
    }

    // Метод для зміни віку
    void setAge(int a) {
        age = a;
    }

    // Метод для зміни ваги
    void setWeight(double w) {
        weight = w;
    }

    // Функція для отримання об'єкта класу Man
    Man getMan() {
        return *this;
    }

    // Вивід інформації про людину
    void printInfo() {
        cout << "Ім'я: " << name << endl;
        cout << "Вік: " << age << endl;
        cout << "Стать: " << gender << endl;
        cout << "Вага: " << weight << " кг" << endl;
    }
};

// Похідний клас Student від Man
class Student : public Man {
private:
    int studyYear;

public:
    // Конструктор класу Student
    Student(string n, int a, char g, double w, int y) : Man(n, a, g, w), studyYear(y) {}

    // Метод для збільшення року навчання
    void incrementStudyYear() {
        studyYear++;
    }

    // Функція для отримання об'єкта класу Student
    Student getStudent() {
        return *this;
    }

    // Вивід інформації про студента
    void printInfo() {
        Man::printInfo();
        cout << "Рік навчання: " << studyYear << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Створення об'єкта класу Man
    Man man("Дмитро", 25, 'Ч', 75.5);
    man.printInfo();

    // Створення об'єкта класу Student
    Student student("Вероніка", 20, 'Ж', 55.0, 2);
    student.printInfo();

    // Демонстрація принципу підстановки
    Man* basePtr;
    basePtr = &student;  // Можна використовувати вказівник на базовий клас для похідного об'єкта
    basePtr->printInfo();  // Викликається метод базового класу

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
