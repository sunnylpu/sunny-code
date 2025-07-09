#include <iostream>
#include <vector>
using namespace std;
void sort(vector <int> &num){
    int a_0=0;
    int b_1=0;
    int c_2=0;

    for(int i=0;i<num.size();i++){
        if(num[i]==0){
            a_0++;
        }
        else if (num[i]==1)
        {
            b_1++;
        }
        else{
            c_2++;
        }
        
    }

    for(int i=0;i<a_0;i++){
        num[i]=0;
    }
    for(int i=0;i<b_1;i++){
        num[i]=1;
    }
    for(int i=0;i<c_2;i++){
        num[i]=2;
    }
}
int main(){
    vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}