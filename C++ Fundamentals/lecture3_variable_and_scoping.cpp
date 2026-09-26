#include <iostream>
using namespace std;

int global = 5;

int main() 
{
    int a = 3;

    cout << a<< endl;
    if(true){
        int a = 5;
        cout << a << endl;
    }

    cout << a << endl;
}