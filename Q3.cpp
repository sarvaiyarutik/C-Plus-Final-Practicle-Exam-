
#include <iostream>
using namespace std;

class Shape
{

private:
    string color;
    float area;

public:
    void setColor(string c)
    {

        color = c;
    }

    void setArea(float a)
    {

        area = a;
    }

    string getColor()
    {

        return color;
    }

    float getArea()
    {
        return area;
    }
};

class Circle : public Shape
{

private:
    float radius;

public:
    Circle(float r, string c)
    {
        radius = r;
        setColor(c);
    }

    void calculateArea()
    {

        float a = 3.14 * radius * radius;
        setArea(a);

        cout << "Circle Color : " << getColor() << endl;
        cout << "Circle Area  : " << getArea() << endl;
    }
};

class Reactangle : public Shape
{

private:
    float length, width;

public:
    Reactangle(float l, float w, string c)
    {

        length = l;

        width = w;

        setColor(c);
    }

    void calculateArea()
    {

        float a = length * width;
        setArea(a);

        cout << "Rectangle Color : " << getColor() << endl;
        cout << "Rectangle Area : " << getArea() << endl;
    }
};

int
main()
{

    Circle c1(15,"Black");

    Reactangle r1(10,20,"White");

    c1.calculateArea();

    cout<<endl;

    r1.calculateArea();

    return 0;
}