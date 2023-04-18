#include <iostream>
#include <cmath>

//inserindo formulas e variaveis da classe triangulo
class Triangulo {
    private:
    double a, b, c;
    public:
    Triangulo(double lado1, double lado2, double lado3 ) {
        a = lado1;
        b = lado2;
        c = lado3;
    }
    
    double calculaArea() {
        double p = (a + b + c) / 2.0;
        double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
    }
    
    double getLado1() { return a; }
    double getLado2() { return b; }
    double getLado3() { return c; }
    
};

int main() {
    double a, b, c;
    //interface de usuario 1
    std::cout << "Digite as medidas dos lados do Triangulo X: ";
    std::cin >> a >> b >> c;
    Triangulo X(a, b, c);
    //interface de usuario 2
    std::cout << "Digite as medidas dos lados do Triangulo Y: ";
    std::cin >> a >> b >> c;
    Triangulo Y(a, b, c);
    
    double areaX = X.calculaArea(); 
    double areaY = Y.calculaArea();
    //area dos triangulos inserida
    std::cout << "Area do Triangulo X: " << areaX << std::endl;
    std::cout << "Area do Triangulo Y: " << areaY << std::endl;
    //condições de resultado (triangulo maior ou menor)
    if (areaX > areaY) {
        std::cout << "Triangulo X tem a maior area. " << std::endl;
    }
    else if (areaY > areaX) {
        std::cout << "Triangulo Y tem a maior area. " << std::endl;
    }
    else {
        std::cout << "Ambos os triangulos tem a mesma area. " << std::endl;
    }
    
    return 0;
}
