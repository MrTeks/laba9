#include <iostream>
#include <string>

using namespace std;

// Структура для представления растения
struct Plant {
    string nasvanie;            // Вид растения
    string posadka;       // Дата высадки
    string cveten;  // Дата последнего цветения
    int poliv;     // Периодичность полива (сколько раз в неделю)
};

int main() {
    setlocale(LC_ALL, "ru");
    int numPlants;            // Количество растений
    Plant plants[100];        // Массив структур для хранения данных о растениях

    // Ввод количества растений
    cout << "Введите количество растений: ";
    cin >> numPlants;

    // Ввод информации о растениях
    for (int i = 0; i < numPlants; i++) {
        cout << "Введите вид растения: ";
        cin >> plants[i].nasvanie;
        cout << "Введите дату высадки: ";
        cin >> plants[i].posadka;
        cout << "Введите дату последнего цветения: ";
        cin >> plants[i].cveten;
        cout << "Введите периодичность полива (сколько раз в неделю): ";
        cin >> plants[i].poliv;
    }

    // Вывод списка растений, которые нужно поливать каждый день
    cout << "Список растений, которые нужно поливать каждый день:" << endl;
    for (int i = 0; i < numPlants; i++) {
        if (plants[i].poliv = 7) {
            cout << plants[i].nasvanie << endl;
        }
    }
}