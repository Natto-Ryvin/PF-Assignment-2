#include<iostream>
using namespace std;
int main()
{
    double soap=70.0;
    double flour=120.0;
    double eggs=35.0;
    int soap_quantity, flour_quantity, eggs_quantity;
    cout<<"Enter the quantity of soap: ";
    cin>>soap_quantity;
    cout<<"Enter the quantity of flour: ";
    cin>>flour_quantity;
    cout<<"Enter the quantity of eggs: ";
    cin>>eggs_quantity;
    double total = (soap*soap_quantity) + (flour*flour_quantity) + (eggs * eggs_quantity);
    cout<<"The total bill is: $"<<total;
}
