#include <iostream>

 

using namespace std;

 

int main()

{

 

       int n;

 

       cout << " Enter number array n = ";

       cin >> n;

 

       int* arr = new int[n];

      

 

       // Введення елементів масиву

       for (int i = 0; i < n; i++)

       {

             cout << " number " << i + 1 << " : ";

             cin >> arr[i];

       }

 

       int maxE = arr[0], minE

= arr[0];

 

       int maxIndex = 0,

minIndex = 0;

 

 

       // Пошук мінімального та максимального

       for (int i = 0; i < n; i++)

       {

             if (arr[i]

> maxE) {

                    maxE = arr[i];

                    maxIndex = i;

             }

             if (arr[i]

< minE) {

                    minE = arr[i];

                    minIndex = i;

             }

       }

       // Заміна елементів

       if (maxIndex == 0

&& minIndex == n - 1)

       {

             // Якщо найбільший елемент на

початку a найменший вкінці

             swap(arr[0], arr[minIndex]);

       }

       else

       {

             swap(arr[0], arr[minIndex]); // Обмін

мінімального елемента з першим

             swap(arr[n - 1], arr[maxIndex]); // Обмін

максимального елемента з останнім

       }

 

       // Виведення масиву після заміни

       cout << "Array after swap:";

       for (int i = 0; i < n; i++)

       {

             cout << arr[i] << " ";

       }

       cout << endl;

 

       // Результат

       cout << " The largest element is :" << arr[n - 1] << endl;

       cout << " The smallest element is :" << arr[0] << endl;

 

       delete[]arr;

       return 0;

}
