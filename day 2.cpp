#include <iostream>
using namespace std;
int main() 
{
    int Apple=10;
    int Mango=15;
    int Pomegranate=30; 
    int apple_quantity,mango_quantity,pomegranate_quantity;
    double total,discount,net_total;
    cout<<"Enter the quantity for Apples in kg: ";
    cin>>apple_quantity;
    cout<<"Enter the quantity for Mangoes in kg: ";
    cin>>mango_quantity;
    cout<<"Enter the quantity for Pomegranate in kg: ";
    cin>>pomegranate_quantity;
    net_total=(Apple*apple_quantity)+(Mango*mango_quantity)+(Pomegranate*pomegranate_quantity);
    cout<<"The total bill is: $"<<net_total;
    //For discount
    if(net_total>100)
    {
        total=(net_total>150)? net_total*0.9 : net_total; 
        discount=net_total-total;
        cout<<"The discount you have is: "<<discount<<endl;
        cout<<"Total amount after discount is: "<<total<<endl;
    }
    else 
    cout<<"You have no discount, The total bill is: $"<<net_total;
}
