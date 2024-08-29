#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void display(void);
};
void shop::setPrice(void)
{
    cout << "enter the item Id " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter the item Price " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of Item " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop s;
    s.initcounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.display();
    return 0;
}
