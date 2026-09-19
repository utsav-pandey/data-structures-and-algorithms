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

/*
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
*/

/*
      3)    1234
            1234
            1234
*/

/*
int main()
{
    int n, i, j;
    cout <<"Enter the Number: ";
    cin >> n;

    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;

    }

}
*/

/*
      4)    4321
            4321
            4321
*/
/*
int main()
{
    int n, i, j;
    cout <<"Enter the Number: ";
    cin >> n;

    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << n-j+1 << " ";
        }
        cout << endl;

    }

}
*/

/*
      5)    123
            456
            789
*/
/*
int main()
{
    int n = 3, i, j, k = 1 ;
    cout <<"Enter the Number: ";
    cin >> n;

    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << k << " ";
            k++; 
        }
        cout << endl;

    }

}
*/

/*
      6)    *
            **
            ***
            ****
*/
/*
int main()
{
    int n, i=1, j=1;
    cout<<"Enter the number: ";
    cin >> n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<< "* ";
            j++;
        }
        cout << endl;
        i++;

    }
}
*/

/*
      7)    1
            22
            333
            4444
*/
/*
int main()
{
    int n, i, j;
    cout<< "Enter the value of N: ";
    cin >> n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl; 
    }
}
*/


/*
      8)    1
            2 3
            4 5 6
            7 8 9 10
*/

/*
int main()
{
    int n, i, j, count = 1;
    cout<< "Enter the value of N: ";
    cin >> n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl; 
    }
}
*/



/*
      9)    1
            2 3
            3 4 5
            4 5 6 7
*/

/*
// Method 1
int main()
{
    int n, i, j, count = 1;
    cout<< "Enter the value of N: ";
    cin >> n;
    for(i=1; i<=n; i++){
        count = i;
        for(j=1; j<=i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl; 
    }
}
*/

/*
// Method 2
int main()
{
    int n, i, j;
    cout<< "Enter the value of N: ";
    cin >> n;
    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            cout << i+j << " ";
        }
        cout << endl; 
    }
}
*/

/*
     10)    1
            2 1
            3 2 1
            4 3 2 1
*/
/*
int main()
{
    int n, i, j;
    cout << "Enter N: ";
    cin >> n;

    for (i=1; i<=n; i++){
        for(j=i; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}
*/

/*
     11)    A A A
            B B B
            C C C
*/
/*
int main() 
{
    int n, i, j;
    char ch = 'A';
    cout << "Enter N: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
*/

/*
     12)    A B C
            A B C
            A B C
*/
/*  
int main() 
{
    int n, i, j;
    char ch = 'A';
    cout << "Enter N: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        ch = 'A';
        for (j=1; j<=n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
*/
/*
     13)    A B C
            D E F 
            G H I
*/

/*
int main() 
{
    int n, i, j;
    char ch = 'A';
    cout << "Enter N: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
*/

/*
     13)    A B C
            B C D 
            C D E
*/
/*
int main()
{
    int n, i, j;
    cout << "Enter N: ";
    cin >> n;
    char ch = 'A';
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << (char)(ch + i + j) << " ";
        }
        cout << endl;
    }
}
*/

/*
     14)    A 
            B B
            C C C
*/
/*
int main()
{
    int n, i, j;
    cout << "Enter N: ";
    cin >> n;

    for (i=1; i <= n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << (char)('A'+i-1 )<< " ";
        }
        cout<<endl;
    }
}
*/

/*
     15)    A 
            B c
            D E F
*/
/*
int main()
{
    int n, i, j;
    cout << "Enter N: ";
    cin >> n;
    char ch = 'A';
    for (i=1; i <= n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << ch << " ";
            ch++ ;
        }
        cout<<endl;
    }
}
*/

/*
     16)    A 
            B c
            C D E
            D R F G H
*/
/*
int main()
{
    int n, i, j;

    cout << "Enter N: ";
    cin >> n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i ; j++)
        {
            cout << (char)('A'+i+j)<< " ";

        }
        cout<<endl;
    }
}
*/

/*
     17)    D 
            C D
            B C D
            A B C D
*/

/*
int main()
{
    int n, i, j;

    cout << "Enter N: ";
    cin >> n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i ; j++)
        {
            cout << (char)('A' + n - i + j - 1) << " ";

        }
        cout<<endl;
    }
}
*/

/*
     18)          *
                * *
              * * *
            * * * *
*/

int main()
{
    int n, i, j, space;
    cout<< "Enter N: ";
    cin >> n;

    for(i=1; i<=n; i++){
        space = n-i;
        while(space > 0){
            cout << "  ";
            space -- ;
        }
        for(j=1; j<=i; j++)
        {
            cout<< "* ";
        }
        cout << endl;
    }
}

