/*
    * This is c++ code for conditional statments and loops

*/
#include <iostream>
# include <cmath>
using namespace std;
/*
int main()
{
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout<< "Ente b: ";
    cin >> b;

    
        //cin don't reads " ", "\t", "\n"
        //so we use cin.get()
    

    if(a>b ){
        cout<<"a is greater then b"<<endl;
    
    }
    else if (b>a)
    {
        cout << "b is greater then a"<< endl;
    }
    else {
        cout<< "a and b both are equal"<< endl;
    }





}
*/
/*
int main()
{
    char ch;
    cout << "Enter your character: ";
    cin >> ch;
    
    if(('a'<= ch) && (ch <= 'z') )
    {
        cout << "your character is lower case"<< endl;
    }
    else if (('0'<= ch)&& (ch <= 9)){
        cout << "your character is numeric"<< endl;
    }
    else if(('A'<= ch)&& (ch <= 'Z')){
        cout << "Your character is Upper case"<< endl;
    }
    else {
        cout <<"Special character"<< endl;
    }
}
*/

// Loops
// print number less then n

// while loop
/*
int main() 
{
    int n, i = 1;
    cout << "Ente the number: ";
    cin >> n;
    // while loop
    while (i <= n){
        cout << i << " ";
        i++;
    }
    cout << endl;
}
*/

/*
// for loop
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=1; i<= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}
*/
/*
// sum of all even num from 1 to n
int main() 
{
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 2; i<=n; i = i+2){
        sum += i;
    }

    cout << "The sum of even numbers till n is : "<< sum << endl;
}
*/
/*
// Prime or not

int main()
{
    int n, flag =0;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=2; i< n ; i++){
        if(n%i == 0){
            flag = 1;
            cout << "Not Prime"<< endl;
            break;
        }
    }

    if(flag == 0) cout << "Prime" << endl;

}
*/

// ================== PATTERN =================
/*
      1)    ****
            ****
            ****
            ****
*/

/*
int main() 
{

    int i= 0 , j = 0,n;
    cout << "Enter N: ";
    cin>> n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "* ";
        }
        cout<< endl;
    }

}
*/

/*
      2)    1111
            2222
            3333
            4444
*/


int main() 
{

    int i= 0 , j = 0,n;
    cout << "Enter N: ";
    cin>> n;
    for(i=1; i<=n; i++){
        for(j=0; j<n ; j++){
            cout << i <<" ";
        }
        cout<< endl;
    }

}