#include <bits/stdc++.h>
using namespace std;
void operation(int a, int b)
{
    int opr;
    cout << "Choose precise num for specific number \n "
         << "1: Addition \n 2: Subtraction\n 3: Multiplication \n 4: Division \n 5: Average \n 6: Percentage \n 7: power \n 8: root \n\n Please choose : ";
    cin >> opr;
    switch (opr)
    {
    case 1:
        cout << "The sum of " << a << " + " << b << " is " << a + b;
        break;
    case 2:
        cout << "The subtraction of " << a << " - " << b << " is " << a - b;
        break;
    case 3:
        cout << "The multiplication of " << a << " * " << b << "  is " << a * b;
        break;
    case 4:
        cout << "The division of " << a << " / " << b << " is " << a / b;
        break;
    case 5:
        cout << "The average of " << a << " & " << b << " is " << (a + b) / 2;
        break;
    case 6:
        cout << "The percentage of " << a << " & " << b << " is " <<((a + b) / 200) * 100;
        break;
    case 7:
        cout << "The square of " << a <<" is " << pow(a,b);
        break;
    case 8:
        cout << "The root of " << a <<" is " << sqrt(a)<<endl;
        cout << "The root of " << b <<" is " << sqrt(b);
        break;
    }
}

int main()
{
    int a, b;
    cout << "Enter first element : ";
    cin >> a;
    cout << "Enter second element : ";
    cin >> b;
    operation(a, b);

    return 0;
}