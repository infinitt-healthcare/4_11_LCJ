#include <iostream>
#include <vector>
using namespace std;

class Calc
{
public:
    virtual double calc(const double a, const double b) = 0;

};
class DivCalc : public Calc
{
public:
    virtual double calc(const double a, const double b)
    {
        return a / b;
    }
};

int main()
{
    int stop = 1;
    double  a, b, result;

    DivCalc divCalc;
    Calc& obj = divCalc;

    do {
        cout << endl;
        cout << " 0 이 아닌 정수 두 개를 입력해주세요. \n";
        cin >> a;
        cin >> b;
        if (!cin.fail() /*&& a > 0*/ && b > 0)
        {
            cin.ignore();
            stop = 0;

            result = obj.calc(a, b);
        }
        else
        {
            cin.clear();
            cin.ignore();
        }
    } while (stop);
    
    cout << a << " / " << b << " 를 나눈 결과는 " << result << " 입니다. \n";

    return 0;
}
