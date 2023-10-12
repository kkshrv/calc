#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

void sum(double a, double b);
void sub(double a, double b);
void multiply(double a, double b);
void division(double a, double b);
void power(double a, double b);
void factorial(int a);
unsigned long long fact(int a);
void matrixSum(); // по-хорошему, надо бы разбить эту процедуру на отдельные функции инициализации и суммы


int main()
{
    cout << "Calculator v. 1.0" << endl << endl;
    while(true)
    {
        int operationA;
        cout << "Choose an operation you want to use:" << endl;
        cout << "1: Main operations" << "\n" << "2: Exponentiation" << endl;
        cout << "3: Factorial computation" << "\n" << "4: Matrix sum" << endl;
        cin >> operationA;
        switch(operationA)
        {
            double a, b;
            case 1:
                char sign;
                cout << "Input your math expression:" << endl;
                cin >> a >> sign >> b;
                switch(sign)
                {
                    case '+': sum(a, b); break;
                    case '-': sub(a, b); break;
                    case '*': multiply(a, b); break;
                    case '/': division(a, b); break;
                    default: break;
                }
                break;
            case 2:
                cout << "Input a num and its power:" << endl;
                cin >> a >> b;
                power(a, b);
                break;
            case 3:
                int f;
                cout << "Input a num whose factorial you want to compute:" << endl;
                cin >> f;
                factorial(f);
                break;
            case 4:
                matrixSum();
                break;
            default: break;
    }
    } 
}

void sum(double a, double b)
{
    cout << "Result equals " << a + b << endl << endl;
}

void sub(double a, double b)
{
    cout << "Result equals " << a - b << endl << endl;
}

void multiply(double a, double b)
{
    cout << "Result equals " << a * b << endl << endl;
}

void division(double a, double b)
{
    if (b == 0){ 
         cout << "ZeroDivisionError" << endl << endl;
         return;
    }
    cout << "Result equals " << a / b << endl << endl;
}

void power(double a, double b)
{
    cout << "Result equals " << pow(a, b) << endl << endl;
}

unsigned long long fact(int a)
{
    if (a > 1) return a * fact(a - 1);
    else return 1;
}

void factorial(int a)
{
    if (a > 65) cout << "Sorry, this is too large" << endl << endl;
    else cout << "Result equals " << fact(a) << endl << endl;
}

void matrixSum()
{
    int rows, cols;
    cout << "Input size of matrices separated by a space, please" << endl;
    cin >> rows >> cols;
    double** matrix1 = new double*[rows];
    double** matrix2 = new double*[rows];
    for (int i = 0; i < rows; i++)
        matrix1[i] = new double[cols];
    for (int i = 0; i < rows; i++)
        matrix2[i] = new double[cols];

    cout << "Inputing values of the first matrix..." << endl;

    for (int i = 0; i < cols; i++)
    {
        cout << "Input values of current column separated by enter" << endl;
        for (int j = 0; j < rows; j++)
            cin >> matrix1[i][j];
    }
    
    cout << "Inputing values of the second matrix..." << endl;

    for (int i = 0; i < cols; i++)
    {
        cout << "Input values of current column separated by enter" << endl;
        for (int j = 0; j < rows; j++)
            cin >> matrix2[i][j];
    }
    
    cout << "Summing matrices..." << endl;
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << matrix1[i][j] + matrix2[i][j] << "\t";
        cout << endl;
    }
}
