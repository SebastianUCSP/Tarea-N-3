#include <iostream>

using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void invertir(int arr[], const int len){
    int temp;
    for(int i = 0; i < len/2; i++){
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
}

bool Palindrome(const int arr[], const int len){
    for(unsigned int i = 0; i < len/2; i++){
        if(arr[i] != arr[len-1-i]){
            cout << "No es palindrome";
            return false;
        }
    }
    cout << "Si es palindrome";
    return true;
}

void ordenar(int arr[], const int len){
   for(int i = 0; i < len-1; i++){
      for(int j = 0; j < len-i-1; j++){
         if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
         }
      }
    }
}


int main()
{
    int x = 0;
    while(true){
        if(x++ >=10)
            break;
        if(x%2)
            continue;
        cout << "x is " << ++x << "\n";
    }

    cout << endl;

    int arr[6] = {1,2,3,4,5,6};
    invertir(arr, 6);
    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    cout << endl;

    int arr2[] = {1,2,3,2,1};

    Palindrome(arr2, 5);

    cout << endl;

    int arr3[] = {1,3,5,2,7,8,2,1,6,11};

    ordenar(arr3, 9);
    for(int i = 0; i < 9; i++)
        cout << arr3[i] << " ";

    cout << endl;
    return 0;
}
