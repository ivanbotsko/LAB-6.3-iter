#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

// Функція для генерації масиву
std::vector<int> generateArray(int size, int min, int max) {
    std::vector<int> array;
    for (int i = 0; i < size; i++) {
        int randomValue = rand() % (max - min + 1) + min;
        array.push_back(randomValue);
    }
    return array;
}

// Функція для виведення масиву
void printElements(const std::vector<int>& array) {
    std::cout << "--------------------------------" << std::endl;
    for (int i = 0; i < array.size(); i++) {
        const int element = array[i];
        std::cout << element << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;
}

// Функція для перетворення масиву в вектор
std::vector<int> arrayToVector(const std::vector<int>& array) {
    std::vector<int> elements;
    for (int i = 0; i < array.size(); i++) {
        elements.push_back(array[i]);
    }
    return elements;
}

int main() {
    srand(static_cast<unsigned>(time(0)));  // Ініціалізувати генератор випадкових чисел

    std::vector<int> array = generateArray(10, 1, 100);
    std::cout << "Formed array:";
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i];
        if (i < array.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    printElements(array);

    std::vector<int> elements = arrayToVector(array);
    std::cout << "--------------------------------" << std::endl;
    for (int i = 0; i < elements.size(); i++) {
        std::cout << elements[i] << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;

    return 0;
}
