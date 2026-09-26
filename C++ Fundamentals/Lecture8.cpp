# include <iostream>
using namespace std;

//Function of power 
int power (int a, int b){
    int i, ans = 1;
    for(i=1; i<=b; i++){
        ans *= a;
    }
    return ans;
}
int fact(int n){
    int i, fact;
    for(i=1, fact=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr (int n, int r){
    int result;
    result = fact(n)/(fact(r)*fact(n-r));
    return result;
}

bool isEven (int a){
    return (!(a&1));
}

bool isPrime (int n){
    int i=1;
    for(i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


// Switch Case

int main()
{
    char ch = 'a';
    int num = 1;
    switch(ch){
        case 'a' : cout << "First" << endl;
                break;

        case 'b' : cout << "Second" << endl;
        
        default: cout << " It is default case" << endl;
    }

    // Nested switch

    switch ( ch ){
        case 'a': switch(num){
                    case 1: cout << "value of num is "<< num << endl;
                }
    }

    cout << endl;


    // Your are stuck in a infinite while loop with switch. How will you break the loop
/*
    
    // claculator 

    int a, b;
    char op;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the operatio: ";
    cin >> op;

    switch ( op ){
        case '+' :
            cout << a + b << endl;
            break;
        case '-':
            cout<< a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break ;
        default :
            cout << "Please enter the correct operation"<< endl;
    }
    
*/

/*
    int value;
    cout << "Enter the value: ";
    cin >> value;
    
    switch (value){
        default :
            cout << "\nNo of 100₹ Notes: "<< value / 100 << endl;
            value = value % 100;
        case 20:
            cout << "No of 20₹ Notes: "<< value / 20 << endl;
            value = value % 20;
        case 10:
            cout << "No of 10₹ Notes: "<< value / 10 << endl; 
    }
    
    return 0;
*/

/*
    int a, b;
    cout<< "Enter a: ";
    cin>> a;
    if(isEven(a)){
        cout<< "The num is Even"<< endl;
    }
    else {
    cout << "The num is Odd"<< endl;
    }
*/
/*
    int n, r;
    cout<< "Ente n: ";
    cin>> n;
    cout<< "Enter r: ";
    cin>> r;

    float result;
    result = nCr(n,r);
    cout<< "The nCr is: "<< result<< endl;
*/

    int n;
    cout << "Enter N: ";
    cin >> n;
    if(isPrime(n)){
        cout<< "Prime Number "<< endl;
    }
    else {
        cout<< "Not Prime"<< endl;
    }
}
