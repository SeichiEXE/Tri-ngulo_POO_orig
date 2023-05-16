#include <iostream>
#include <math.h>
using namespace std;

// Função para calcular a área de um triângulo
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    // Interface do usuário 1: Solicita as medidas dos lados do triângulo X
    cout << "Digite as medidas dos lados do triângulo X (separadas por espaço): ";
    cin >> xa >> xb >> xc;
    
    // Interface do usuário 2: Solicita as medidas dos lados do triângulo Y
    cout << "Digite as medidas dos lados do triângulo Y (separadas por espaço): ";
    cin >> ya >> yb >> yc;
    
    // Calcula a área dos triângulos X e Y
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    // Exibe as áreas calculadas
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    // Verifica qual triângulo tem a maior área
    if (areaX > areaY) {
        cout << "O triângulo X tem a maior área." << endl;
    }
    else if (areaY > areaX) {
        cout << "O triângulo Y tem a maior área." << endl;
    }
    else {
        cout << "Os triângulos possuem a mesma área." << endl;
    }
    return 0;
}
