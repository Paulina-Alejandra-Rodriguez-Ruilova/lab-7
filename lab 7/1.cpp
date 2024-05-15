#include <iostream>
#include <vector>
#include <list>

int main() {
    setlocale(LC_ALL, "RU");
    // Crear un vector y una lista con un millón de elementos
    std::vector<int> vec(1000000);
    std::list<int> lst(1000000);

    // Imprimir el Tamaño del vector y la lista en bytes
    std::cout << "Vector size: " << sizeof(vec) << " bytes" << std::endl;
    std::cout << "Subscription size: " << sizeof(lst) << " bytes" << std::endl;

    return 0;
}