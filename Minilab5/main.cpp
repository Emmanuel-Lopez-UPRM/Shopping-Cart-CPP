#include <iostream>
#include "LinkedList.h"

using namespace std;

void procesarComandos() {
    LinkedList lista;
    char comando;
    int value;
    
    while (cin >> comando) {
        if (comando == 'A') {
            cin >> value;
            lista.insertHead(value);  // o insertSorted si se implementa
        }
        else if (comando == 'R') {
            cin >> value;
            bool removed = lista.removeFirst(value);
            if (!removed)
                cout << "Paciente " << value << " no estaba en la lista.\n";
        }
        else if (comando == 'P') {
            cout << "Lista de pacientes: ";
            lista.print(cout);
            cout << endl;
        }
        else if (comando == 'Q') {
            break;
        }
    }
}

int main() {
    procesarComandos();
    return 0;
}
