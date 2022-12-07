#include <iostream>
using namespace std;

class test1
{
private:
    int* data;
public:
    test1(int size)
    {
        this->data = new int[size];
    }
  
    void zapolni(int size)
    {
        for (int i = 0; i < size; i++)
        {
            data[i] = rand() % 100;
        }
    }
    
    void vike(int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << "\t";
        }
    }

    ~test1()
    {
        delete[]data;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    system("color 02");
    int num = 5;
    test1 g(num);
    g.zapolni(num);
    g.vike(num);
}
