#include <iostream>


using namespace std;

int Sum(int* a);
double Avarg(int* a);

int main()
{
    setlocale(LC_ALL, "ukr");

    int arr[10];
    double aver;
    cout << "Введіть елементи масиву (10 цілих чисел) в одному рядку" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Сумма елементів масиву: " << Sum(arr) << endl;
    aver = Avarg(arr);
    cout << "Середньо арефметичне значення ненульових елементів: " << aver << endl;
}

int Sum(int* a) {
    int sum=0;
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    return sum;
}

double Avarg(int* a) {
    double avarg = 0;
    int  nonzero_count = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] != 0) {
            nonzero_count++;
            avarg += a[i];
        }
    }
    avarg = avarg / nonzero_count;
    cout << "Кількість ненольових елементів: " << nonzero_count << endl;
    return avarg;

}