#include <iostream>
using namespace std;

int a_to_the_power_b(int base,int power){
    if(power==0){
        return 1;
    }
    if(power==1){
        return base;
    }
    return base * a_to_the_power_b(base, power - 1);
}
int main(){
    int base,power;
    cin>>base>>power;
    int answer=a_to_the_power_b(base,power);
    cout<<answer;
}




















































// #include<iostream>
// using namespace std;

// int power(int a,int b){

//     //base case
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     //recursive call

//     int ans=power(a,b/2);
//     if(b%2==0){
//         // for even power
//         return ans*ans;
//     }
//     else{
//         // for odd power
//         return a*ans*ans;
//     }

// }
// int main(){
//     int a , b;
//     cin>>a>>b;
//     int  ans=power(a,b);
//     cout<<" a to the power b is "<<ans;
// }