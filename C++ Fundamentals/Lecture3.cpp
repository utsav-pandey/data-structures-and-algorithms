#include <iostream>
using namespace std;

int main()
{

    // ========== Bitwise Operator ==========
    
        //1) AND 
        //2) OR 
        //3) XOR
        //4) NOT
        //5) LEFT SHIFT
        //6) RIGHT SHIFT
    

    int a = 5, b = 7;

    // 1) AND
    cout << "A: "<< "5 (0101)" << "B: 7 (0111)"<< endl;
    cout << "AND: "<< (a & b) << endl;

    // 2) OR 
    cout << "OR: "<< (a | b) << endl;

    // 3) XOR 
    cout << "XOR: "<< (a^b) << endl;

    // 4) NOT
    cout << "NOT(A): "<< ~(a) << endl;

    // 5) LEFT SHIFT
    cout << "LEFT SHIFT(A): "<< (a << 1)<< endl;

    // 6) RIGHT SHIFT
    cout << "RIGHT SHIFT(21): "<< (21 >> 2)<< endl;

    // NOTE: in negative numbers the padding is compailer dependent


    /*
        1) pre 
            1.1) increment (++i) : first increase i and then assing it
            1.2) decrement (--i) : first decrease i and then assing it 
        2) post
            2.1) increment (i++) : first assing i and then increase it
            2.2) decrement (i--) : first assing i and then decrease it     
    */

    int i = 7;
    cout << i;
    cout << ++i;
    cout << i ++;
    cout << i --;
    cout << -- i ;
    // Febonacii series
    int n;
    cout << "\nEnter N: ";
    cin >> n;
    int a1=0, b1=1;
    cout << "The Febonacii series is:\n"<< a1<< " " << b1 << " ";

    for (i = 3; i<= n; i++){
        int nextNumber = a1 + b1;
        cout << nextNumber << " ";
        b1 = a1;
        a1 = nextNumber;
    }
    cout << endl;
}