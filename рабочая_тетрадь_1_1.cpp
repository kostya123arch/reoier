//метод половинного деления 
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;



int main()
{
    double a = 0, b = 2;
    double c;
    int counts = 0;
    if ((0.25*pow(a,3) + a -2)*(0.25*pow(b,3) + b - 2) >= 0){
        cout << "no_root"<< endl;
        return 1;
    }
    while (b-a> 0.0001){
        counts++;
        c = (a+b)/2;
        cout << counts << " " << c <<  endl;
        double f_c=(0.25*pow(c,3) + c -2);
        if (fabs(f_c) < 0.0001) break;
        if ((0.25*pow(a,3) + a -2)*f_c < 0) b = c;
        else a = c;
        
    }
        cout << "result: " << c;
    
        return 0;
}
//метод хорды

#include <iostream>
#include <cmath>
using namespace std;

double func(double x)
{
	return 0.25*pow(x, 3) + x - 2;

}

double find(double a, double b, double e)
{
	while (fabs(a - b) > e)
	{
		a = b - (b - a) * func(b) / (func(b) - func(a));
		                                 
		b = a - (a - b) * func(a) / (func(a) - func(b));
		                                 
	}

	return b;
}

int main()
{   	
    double a = 0, b = 2;

    if ((0.25*pow(a,3) + a -2)*(0.25*pow(b,3) + b - 2) >= 0){
        cout << "no_root"<< endl;
        return 1;
    }
	cout << find(a, b, 0.0001) << endl;
	return 0;
} почему выводит разный ответ
