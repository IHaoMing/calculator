//------------------------
// 简答计算器v1.0
// date:2017-11-02
//------------------------
#include <iostream>
#include<string>

using namespace std;

void help();
int calculator(int a, char op, int b);//整数四则运算
double calculator(double a, char op, double b);//浮点数
double calculator(double a, char op, int b);
double calculator(int a, char op, double b);

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

int calculator(int a, char op, int b)
{
    int result = 0;
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

double calculator(double a, char op, double b)
{
    double result = 0.0;
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

double calculator(int a, char op, double b)
{
    double result = 0.0;
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

double calculator(double a, char op, int b)
{
    double result = 0.0;
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


