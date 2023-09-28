#include <iostream>
using namespace std;

void Test(int a[],int dlina)
{
    int sum = 0;
    float sr=0;
    for (int i = 0; i < dlina; i++) {
        sum += a[i];
    }
    sr = sum / dlina;
    cout << sr;
}

int main()
{
    int a[] = { 10, 13, 14, 56, 78 };
    int dlina = 5;
    Test(a,dlina);
}