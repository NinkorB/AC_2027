#include<iostream>
using namespace std;
 
int main(){
    int n, k, tTime = 0, lTime, count = 0;
    cin >> n >> k;
 
    if (n >= 1 && n <= 10 && k >= 1 && k <= 240) {
        lTime = 240 - k;
 
        for (int i = 1; i <= n; i++) {
            tTime += i * 5;
            if (tTime > lTime) {
                break;
            }
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}