#include<iostream>
using namespace std;

class Boy{
    public:
    int health;
    int level;
    
};
int main(){
    Boy sunny;
    sunny.health=70;
    sunny.level='A';
    cout<<"health  "<<sunny.health<<endl;
    cout<<"level  "<<sunny.level<<endl;
}