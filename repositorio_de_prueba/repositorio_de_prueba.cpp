#include <iostream>
using namespace std;

int repeticion(int i) {
    if (i <= 5) {
        cout << "Hellooo" << endl;
        repeticion(i + 1);
    }
    else {
        return 0;
    }
}

int main()
{
    repeticion(1);
    return 0;
}