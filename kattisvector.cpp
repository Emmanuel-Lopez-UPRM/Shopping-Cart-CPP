#include <iostream>
#include <vector>
using namespace std;

class Goombas {
public:
    int goombas;
    int esc_goombas;

    Goombas(int gom, int esc) : goombas(gom), esc_goombas(esc) {}
    Goombas() : goombas(0), esc_goombas(0) {}
};

int main() {
    int rooms;
    cin >> rooms;

    vector<Goombas> p;
    int numgoombas = 0; // total Goombas carried to next room

    for (int i = 0; i < rooms; i++) {
        int goombas, esc;
        cin >> goombas >> esc;
        p.push_back(Goombas(goombas, esc));

        numgoombas += p[i].goombas; // all Goombas move to this room

        if (numgoombas < p[i].esc_goombas) { // check if enough
            cout << "Imposible";
            return 0; // stop immediately
        }
        // All Goombas survive for the next room
    }

    cout << "Posible";
    return 0;
}
