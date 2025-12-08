#include <iostream>
#include <vector>
using namespace std;

int r, c;
vector<string> grid;
vector<vector<bool>> visited;

//Direcciones para explorar. 
int df[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//
void decode(int x, int y) {
    visited[x][y] = true;
    for (int d = 0; d < 8; ++d) {
        int nx = x + df[d];
        int ny = y + dc[d]; // Llamamos los arreglos fijos de arriba para poder movernos como si fuera en un plano (x,y).
        if (nx >= 0 && nx < r && ny >= 0 && ny < c) { //Parametros que no se salga de los limites del arreglo.
            if (!visited[nx][ny] && grid[nx][ny] == '#') {
                decode(nx, ny);//la recursion.
            }
        }
    }
}

int main() {
    if (!(cin >> r >> c)) return 0;
   //Adjustamos el size con .resizes(x) de <vector>
    grid.resize(r);
    for (int i = 0; i < r; ++i)
        cin >> grid[i];
    //Inicializo toda la filas como falsas 
    visited.assign(r, vector<bool>(c, false));
    int loops = 0;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (grid[i][j] == '#' && !visited[i][j]) { //Miramos que sea igual el elemento a '#' y so no lo hemos visitado marque un loop.
                ++loops;
                decode(i, j); // y lo corremos otravez para buscar los otros circulos.
            }
        }
    }

    cout << loops << "\n";
    return 0;
}
