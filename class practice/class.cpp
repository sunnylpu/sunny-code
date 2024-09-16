#include<iostream>
using namespace std;

class Cart{
    public:
   string shopping_cart;

   void online_delivery(){
    cout<<"at that time cart is empty "<<endl;
   } 
};
int main(){
    Cart shopping;
    Cart sunny;
    sunny.online_delivery();
    shopping.online_delivery();
    return 0;
}
