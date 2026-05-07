
#include <iostream>
using namespace std;

class Laptop
{

private:
    string name;
    int price;
    string processor;

public:
    Laptop(string n, int p, string pro)
    {

        name = n;
        price = p;
        processor = pro;
    }

    void display()
    {

        cout << "Leptop Name      : " << name << endl;
        cout << "Leptop Price     : " << price << endl;
        cout << "Leptop Processor : " << processor << endl;
    }
};

int main()
{

    Laptop l1("Asus", 70000, "Rysen 7");
    Laptop l2("HP", 55000, "Intel i7");

    l1.display();

    cout << endl;
    
    l2.display();

    return 0;
}