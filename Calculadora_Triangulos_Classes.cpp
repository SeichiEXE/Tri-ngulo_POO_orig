#include <iostream>
#include <math.h>
using namespace std;

//inserindo fórmulas de calculo e variaveis para a formula
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //interface de usuario 1
    cout << "Digite as medidas dos lados do triângulo X (separadas por espaço): ";
    cin >> xa >> xb >> xc;
    
    //interface de usuario 2
    cout << "Digite as medidas dos lados do triângulo Y (separadas por espaço): ";
    cin >> ya >> yb >> yc;
    
    //código calculando as variaveis inseridas pelo usuario 
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    //Resultado do calculo das áreas
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    //condição de fator de resultado (triangulo maior ou menor)
    if (areaX > areaY) {
        cout << "O triângulo X tem a maior área." << endl;
    }
    else if (areaY > areaX) {
        cout << "O triângulo Y tem a maior área." << endl;
    }
    else {
        cout << "Os triângulos possuem a mesma área" << endl;
    }
    return 0;
}