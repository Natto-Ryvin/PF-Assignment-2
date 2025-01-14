#include <iostream>
using namespace std;
int main() 
{
    int Apple=10;
    int Mango=15;
    int Pomegranate=30;  
    int apple_quantity,mango_quantity,pomegranate_quantity,customer_type;
    double total_with_shipping,total,discount,net_total,shipping_charges,payment_method;
    cout<<"Enter the quantity for Apples in kg: ";
    cin>>apple_quantity;
    cout<<"Enter the quantity for Mangoes in kg: ";
    cin>>mango_quantity;
    cout<<"Enter the quantity for Pomegranate in kg: ";
    cin>>pomegranate_quantity;
    net_total=(Apple*apple_quantity)+(Mango*mango_quantity)+(Pomegranate*pomegranate_quantity);
    cout<<"The total bill is: $"<<net_total;
    shipping_charges = (total < 700) ? 15.0 : 0.0;
    cout<<"shiping fee is: $"<<shipping_charges<<endl;
    total_with_shipping = net_total + shipping_charges;
    cout<<"Payment Methods:\n1. Credit Card\n2. Paypal\n3. Cash\nChoose payment option: ";
    cin>>payment_method;
    double transaction_charges = (payment_method==1)? total_with_shipping *0.02 : (payment_method==2)? total_with_shipping *0.03 : 0.0;
    double total_after_payment = total_with_shipping + transaction_charges;
    cout<<"\nTotal after applying transaction charges: $"<<total_after_payment<<endl;
    cout<<"Enter your customer type:\n1. Normal\t2. VIP";
    cin>>customer_type;
    double finalbill = (customer_type == 2)? total_with_shipping * 0.95 : total_with_shipping;
    cout<<"Final bill after customer discount is: $"<<finalbill;
}
