#include "biblioteca.h"

int main() {
    biblioteca b;
    (b += new roman("DON QUIJOTE", "MIGUEL DE CERVANTES"))
        += new revista("Journal of Artificial Intelligence", 100);
    b += new roman("MACBETH", "WILLIAM SHAKESPEARE");

    for (auto x : b) {
        std::cout << x->GetInfo() << std::endl;
    }

    std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
    std::cout << "Lista doar cu romane:" << std::endl;
    b.PrintFilter([](carte* c) -> bool {
        return dynamic_cast<roman*>(c) != nullptr;
        });

    return 0;
}
