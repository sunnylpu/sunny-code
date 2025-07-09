#include <iostream>
#include <vector>
using namespace std;

void buy_sell(vector<int> arr){
    int n = arr.size();
    int profit=0;
    int min_price=arr[0];
    for(int i = 0; i < n; i++){
        
    }
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    buy_sell(arr);
}