//headerFiles
#include <iostream>
using namespace std;
//function declarations
int sum(int, int);
//main section
main()
{
    int a, b;
    cout << "Enter two numbres: ";
    cin >> a >> b;

    int result = sum(a, b);
    cout << "Sum of a and  b is :" << result;

    return 0;
}
//function definitions
int sum(int num1, int num2)
{
    return (num1 + num2);
}