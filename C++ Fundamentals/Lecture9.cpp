//Arrays in C++

#include <iostream>
using namespace std;

void printArray (int *arr, int size){
    cout << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
/*
int main()
{
    // Declearing an array
    int number[10] = {10,2,3,4,5,6,7,8,9,1};

    //printArray(number,10);

    // accesing value out of range
    //cout << "vlaue at 21 index is "<< number[21]<< endl;

    // initialising an array
    int second[3] = {3,5,7};
    //printArray(second, 3);

    // initialising an array
    int third[10] = {1,2,3}; // the vlaues at remaining index are initialised to 0
    //printArray(third, 3);

    // initialising all lication with 0
    int forth[8] = {0};
    //printArray(forth, 8);

    char ch[5] = {'a', 'b','c', 'd','e'}
    
}
*/

int getMax(int *arr, int size){
    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        maxi = max(maxi, arr[i]);
        //if(arr[i]>max) max = arr[i];
    }
    return maxi;
}


int getMin(int *arr, int size){
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        mini = min(mini, arr[i]);
        //if(arr[i]<min) min = arr[i];
    }
    return mini;
}
//Max and Min of arr
/*
int main()
{
    int arr[5] ;
    int max = arr[1], min = arr[1];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    cout << "max :"<< getMax(arr,5)<< "\nmin : "<< getMin(arr,5)<< endl;
}
*/

// Scope of array and it's values Pass By referance : it makes the permanent change at the base address
void update (int arr[] , int n){
    arr[0] = 120;
    cout<< "inside the arrar";
    printArray(arr, n);
    cout << "Going out side the array";
}

void inputArray(int arr[], int size){
    cout << "Enter the elements in array: "<< endl;
    for(int i=0; i<size; i++){
        cout<< "arr["<< i << "]: ";
        cin >> arr[i];
    }
}

int sum (int arr[], int n){
    int sum =0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int linearSeardh(int arr[], int value, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == value) return i;
    }
    return -1;
}

void reversArray (int arr[], int size){
    int i =0 , j = size-1;
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    inputArray(arr, n);
    printArray(arr,n);

    int sumvalue = sum(arr, n);

    cout << "The sum of elements is " << sumvalue<< endl;

    int find;
    cout << "Enter the number you want to search : ";
    cin >> find;

    int index = linearSeardh(arr, find, n);

    if(index == -1){
        cout << "The number is not present "<< endl;
    }

    if(index != -1)
        cout << "The index of the number is : "<< index<< endl;

    
    cout << "Array before reversing is :-";
    printArray(arr, n);

    reversArray(arr, n);

    cout << "Array after reversing is :- ";

    printArray(arr, n);



}



