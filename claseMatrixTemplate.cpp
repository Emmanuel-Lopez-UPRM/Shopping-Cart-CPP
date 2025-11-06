#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

class Matrix {
public:
    Matrix(int filasValue, int columnasValue) : filas(filasValue), columnas(columnasValue), m(nullptr) {
        if (filas <= 0 || columnas <= 0) {
            cout << "Dimensiones deben ser > 0" << endl;
            exit(1);
        }
        m = new IntArrayPtr[filas];
        for (int i = 0; i < filas; i++)
            m[i] = new int[columnas];
    }

    Matrix() : Matrix(1, 1) {}

    Matrix(const Matrix& other) {
        filas = other.filas;
        columnas = other.columnas;
        m = new IntArrayPtr[filas];
        for (int i = 0; i < filas; i++) {
            m[i] = new int[columnas];
            for (int j = 0; j < columnas; j++)
                m[i][j] = other.m[i][j];
        }
    }

    Matrix& operator=(const Matrix& other) {
        if (this != &other) {
            for (int i = 0; i < filas; i++)
                delete[] m[i];
            delete[] m;
            filas = other.filas;
            columnas = other.columnas;
            m = new IntArrayPtr[filas];
            for (int i = 0; i < filas; i++) {
                m[i] = new int[columnas];
                for (int j = 0; j < columnas; j++)
                    m[i][j] = other.m[i][j];
            }
        }
        return *this;
    }

    ~Matrix() {
        for (int i = 0; i < filas; i++)
            delete[] m[i];
        delete[] m;
    }

    void fill() {
        for (int i = 0; i < filas; i++)
            for (int j = 0; j < columnas; j++)
                cin >> m[i][j];
    }

    void output() const {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++)
                cout << m[i][j] << " ";
            cout << endl;
        }
    }

    void set(int r, int c, int value){
        value = m[r][c];
    }
   int get(int r, int c)const{
     return m[r][c];
    }
    friend Matrix operator+(const Matrix& m1, const Matrix& m2);
    friend Matrix operator-(const Matrix& m1, const Matrix& m2);
    friend Matrix operator*(const Matrix& m1, const Matrix& m2);
    friend bool operator == (const Matrix& m1,const Matrix& m2);
    friend ostream& operator<<(ostream& out, const Matrix& m1);

private:
    int filas;
    int columnas;
    IntArrayPtr* m;
};

Matrix operator+(const Matrix& m1, const Matrix& m2) {
    Matrix C(m1.filas, m1.columnas);
    for (int i = 0; i < C.filas; i++)
        for (int j = 0; j < C.columnas; j++)
            C.m[i][j] = m1.m[i][j] + m2.m[i][j];
    return C;
}

Matrix operator-(const Matrix& m1, const Matrix& m2) {
    Matrix C(m1.filas, m1.columnas);
    for (int i = 0; i < C.filas; i++)
        for (int j = 0; j < C.columnas; j++)
            C.m[i][j] = m1.m[i][j] - m2.m[i][j];
    return C;
}

Matrix operator*(const Matrix& m1, const Matrix& m2) {
    if (m1.columnas != m2.filas) {
        cout << "No se pueden multiplicar las matrices" << endl;
        exit(1);
    }
    Matrix C(m1.filas, m2.columnas);
    for (int i = 0; i < C.filas; i++)
        for (int j = 0; j < C.columnas; j++) {
            C.m[i][j] = 0;
            for (int k = 0; k < m1.columnas; k++)
                C.m[i][j] += m1.m[i][k] * m2.m[k][j];
        }
    return C;
}

 bool operator == (const Matrix& m1, const Matrix&m2) {
    for (int i = 0; i < m1.filas; i++){
        for (int j = 0; j < m1.columnas; j++){
            if (m1.m[i][j] != m2.m[i][j]){
            return false;
            }
        
        } 
    }
    return true;
 }
ostream& operator<<(ostream& out, const Matrix& m1){ 
    for (int i = 0; i < m1.filas; i++){
        for (int j = 0; j < m1.columnas; j++)
        {
            out << m1.m[i][j] << " ";
        }
        out << '\n';

     }
return out;
}
int main() {
    Matrix A(2, 3), B(3, 2), C;
    A.fill();
    B.fill();
    C = A * B;
   cout << C;
    return 0;
}
