//------------------------
// 简答计算器v1.10
// date:2017-11-03
//------------------------
#include <iostream>
#include<string>

using namespace std;

void help();
/*
int calculator(int a, char op, int b);//整数四则运算
double calculator(double a, char op, double b);//浮点数
double calculator(double a, char op, int b);
double calculator(int a, char op, double b);

*/
template<typename T>
T calculator(T a, char op, T b)
{
    T result;
    switch(op)
    {
        case '+':
			result = a + b;
		break;
		case '-':
			result = a - b;
		break;
		case '*':
			result = a * b;
		break;
		case '/':
			result = a / b;
		break;
		default:
		break;
    }
    return result;
}
int main()
{
    help();
    cout<<"Please input the expression:"<<endl;
    int a, b;
    char op;
    cin>>a;
    cin>>op;
    cin>>b;
    int result = calculator(a, op, b);
    cout<<result<<endl;
    return 0;
}

void help()
{
    cout<<"简单计算器："<<endl;
}


