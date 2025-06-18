#include <iostream>
#include <vector>
#include <algorithm>

class Poste {
private:
    int altura;
    float diametro;

public:
    Poste(int h, float d) : altura(h), diametro(d) {}

    int getAltura() const { return altura; }
    float getDiametro() const { return diametro; }

    void mostrar() const {
        std::cout << "Altura: " << altura << " m, Diametro: " << diametro << " cm" << std::endl;
    }
};

bool compararAltura(const Poste &a, const Poste &b) {
    return a.getAltura() < b.getAltura();
}

int main() {
    std::vector<Poste> postes;

    postes.push_back(Poste(8, 25.4));
    postes.push_back(Poste(5, 30.2));
    postes.push_back(Poste(10, 28.0));
    postes.push_back(Poste(6, 22.5));
    postes.push_back(Poste(7, 26.1));

    std::cout << "Postes antes de ordenar:" << std::endl;
    for (size_t i = 0; i < postes.size(); ++i)
        postes[i].mostrar();

    std::sort(postes.begin(), postes.end(), compararAltura);

    std::cout << "\nPostes después de ordenar por altura:" << std::endl;
    for (size_t i = 0; i < postes.size(); ++i)
        postes[i].mostrar();

    return 0;
}