#include <iostream>

using namespace std;

// fibonacci with sum
void fibonacci(int term) {

    cout << "Jumlah term : " << term << endl;

    int before = 0;
    int now;
    int temp;
    int total = 0;

    term--;

    for(int i=0;i<term;i++) {

        if(i == 0) {
            now = 1;
            cout << before << now;
        }
        else {
            cout << before + now;
            temp = before;
            before = now;
            now = temp + now;
        }
        total = total + now;
    }
    cout << "Total : " << total;
}
int main()
{
    int term;

    cout << "Masukkan jumlah term fibonacci yang ingin dikeluarkan : ";
    cin >> term;

    fibonacci(term);
}
