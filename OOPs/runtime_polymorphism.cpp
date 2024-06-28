#include<iostream>
using namespace std;


class human{

    public:
    int age;
    int height;
    int weight;

    public:
    int getage(){
        return this ->age;
    }
    void setweight(int w){
        this->weight=w;
    }
    void sleep(){
        cout<<" human sleeping "<<endl;
    }
};
class male:public human{
    public:
    string color;


    void sleep(){
        cout<<"male sleeping "<<endl;
    }

};
int main(){

    
    male object1;
    cout<<object1.age<<endl;
    object1.sleep();
    human object2;
    object2.sleep();
    return 0;

}