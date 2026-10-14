#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//comm1 = (a + b)^4
    // mc = microcommand
    // mc1 = 4 * a^3 * b
    // mc2 = 6 * a^2 * b^2
    // mc3 = a^4
    //comm2 = (a^4 + 4 * a^3 * b + 6 * a^2 * b^2)
    //system("chcp 65001");
    //comm3 = 4 * a * b^3 + b^4 
    // res = (comm1 - comm2) / comm3


int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 100;
    float b1 = 0.001;
    double b2 = 0.001;

    float comm1_1 = pow(a + b1, 4);
    cout << fixed << "Вывод в float: (a + b)^4: " << comm1_1 <<endl;
    double comm1_2 = pow(a + b2, 4);
    cout << fixed << "Вывод в double: (a + b)^4: " << comm1_2 << endl;

    float mc1_1 = 4 * a * a * a * b1;
    cout << fixed << "Вывод в float: 4 * a^3 * b: " << mc1_1 << endl;
    double mc1_2 = 4 * a * a * a * b2;
    cout << fixed << "Вывод в double: 4 * a^3 * b: " << mc1_2 << endl;

    float mc2_1 = 6 * a * a * b1 * b1;
    cout << fixed << "Вывод в float: 6 * a^2 * b^2: " << mc2_1 << endl;
    double mc2_2 = 6 * a * a * b2 * b2;
    cout << fixed << "Вывод в double: 6 * a^2 * b^2: " << mc2_2 << endl;

    float mc3_1 = pow(a, 4);
    cout << fixed << "Вывод в float: a^4: " << mc3_1 << endl;
    double mc3_2 = pow(a, 4);
    cout << fixed << "Вывод в double: a^4: " << mc3_2 << endl;

    float comm2_1 = mc3_1 + mc1_1 + mc2_1;
    cout << fixed << "Вывод в float: (a^4 + 4 * a^3 * b + 6 * a^2 * b^2): " << comm2_1 << endl;
    double comm2_2 = mc3_2 + mc1_2 + mc2_2;
    cout << fixed << "Вывод в double: (a^4 + 4 * a^3 * b + 6 * a^2 * b^2): " << comm2_2 << endl;

    float comm3_1 = 4 * a * b1 * b1 * b1 + pow(b1, 4);
    cout << fixed<< setprecision(12) << "Вывод в float: 4 * a * b^3 + b^4: " << comm3_1 << endl;
    double comm3_2 = 4 * a * b2 * b2 * b2 + pow(b2, 4);
    cout << fixed << setprecision(12) << "Вывод в double: 4 * a * b^3 + b^4: " << comm3_2 << endl;

    float res_1 = (comm1_1 - comm2_1) / comm3_1;
    cout << fixed << "Вывод в float: (comm1 - comm2) / comm3: " << res_1 << endl;
    double res_2 = (comm1_2 - comm2_2) / comm3_2;
    cout << fixed << "Вывод в double: (comm1 - comm2) / comm3: " << res_2 << endl;

    cout << "Задание 2" << endl;

    int n, m;
    cin >> n >> m;
    cout << "1. " << (--m - ++n) << endl;
    cout << "2. " << ((m * n) < n++) << endl;
    cout << "3. " << (n-- > m++) << endl;

    return 0;
  }
