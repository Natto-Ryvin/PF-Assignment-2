#include <iostream>
using namespace std;
int main() 
{
    string coupon_code;
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
    cout<<"shiping fee is: "<<shipping_charges<<endl;
    total_with_shipping = net_total + shipping_charges;
    cout<<"Payment Methods:\n1. Credit Card\n2. Paypal\n3. Cash\nChoose payment option: ";
    cin>>payment_method;
    double transaction_charges = (payment_method==1)? total_with_shipping *0.02 : (payment_method==2)? total_with_shipping *0.03 : 0.0;
    double total_after_payment = total_with_shipping + transaction_charges;
    cout<<"\nTotal after applying transaction charges: "<<total_after_payment<<endl;
    cout<<"Enter your customer type:\n1. Normal\t2. VIP";
    cin>>customer_type;
    double customer_discount = (customer_type == 2)? total_with_shipping * 0.95 : total_with_shipping;
    cout<<"Total after customer type: "<<customer_discount;
    cout<<"\nEnter coupon code (if any): ";
    cin>>coupon_code;
    double coupon_discount = (coupon_code == "SAVE10")? 10.0 : 0.0;
    double total_bill = customer_discount - coupon_discount;
    cout<<"\nEnter your location: ";
    int location;
    cin>>location;
    double tax_rate = (location == 1) ? 0.05 : (location == 2) ? 0.10 : (location == 3) ? 0.08 : 0.0;
    cout<<"Final bill after tax is: $"<<total_bill+tax_rate;
    //Summary
    cout<<"\n\n\t\t\t\tOrder Summary:" <<endl;
    cout<<"\n\n\t\tApples (x"<<apple_quantity<<"): $"<<Apple*apple_quantity;
    cout<<"\n\n\t\tMangoes (x"<<mango_quantity<<"): $"<<Mango*mango_quantity;
    cout<<"\n\n\t\tPomegranate (x"<<pomegranate_quantity<<") $"<<Pomegranate*pomegranate_quantity;
    cout<<"\n\n\t\tSub Total: $"<<net_total;
    cout<<"\n\n\t\tDiscount: $"<<discount;
    cout<<"\n\n\t\tCustomer type discount: $"<<customer_discount;
    cout<<"\n\n\t\tShipping Charges: $"<<shipping_charges;
    cout<<"\n\n\t\tCoupon Discount: $"<<coupon_discount;
    cout<<"\n\n\t\tAmount to pay: $"<<total_bill+tax_rate;
}
