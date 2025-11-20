#include <iostream>
#include <cmath>
using namespace std;

double R(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

double S(double x1, double y1,double x2, double y2,double x3, double y3)
{
    double a,b,c,p;
    a = R(x1,y1,x2,y2);
    b = R(x3,y3,x2,y2);
    c = R(x1,y1,x3,y3);
    p = (a+b+c)/2.;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4;
    cout << "Введите координаты двух точек (x1,y1) и (x2,y2) \n";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Длина отрезка соединяющего эти точки = " << R(x1,y1,x2,y2) << endl;
    cout << "Расстояние от первой точки до начала координат = " << R(x1,y1,0,0) << endl;
    cout << "Расстояние от второй точки до начала координат = " << R(x2,y2,0,0) << endl;
    cout << "Введите координаты третьей точки (x3,y3) \n";
    cin >> x3 >> y3;
    cout << "Площади треугольника с вершинами в данных трёх точках = " << S(x1,y1,x2,y2,x3,y3) << endl;
    cout << "Введите координаты четверой точки (x4,y4) \n";
    cin >> x4 >> y4;
    cout << "Площадь четырехугольника с вершинами в данных четырех точках = " << S(x1,y1,x2,y2,x3,y3)+S(x1,y1,x4,y4,x3,y3) << endl;

    return 0;
}