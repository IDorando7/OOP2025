#include "roman.h"

roman::roman(string _nume, string _autor) {
    nume = _nume;
    autor = _autor;
}

string roman::GetInfo() {
    string s("Roman " + nume + " de " + autor);
    return s;
}
