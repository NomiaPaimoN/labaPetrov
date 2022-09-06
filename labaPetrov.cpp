//#include <iostream>
//#include <math.h> 
//using namespace std;
//int main()
//{
	//double x, y, z, a, b, c, h;
	//cout << "Vvedite x: ";
	//cin >> x;
	//cout << "Vvedite y: ";
	//cin >> y;
	//cout << "Vvedite z: ";
	//cin >> z;
	//a = pow(x, 2 * y) + exp(y - 1);
	//b = 1 + x * fabs(y - tan(z));
	//c = 10 * pow(x, 1 / 3.) - log(z);
	//h = a / b + c;
	//cout << "Result h= " << h << endl;
	//return 0;
//}






//#include <iostream>
//#include <math.h> 
//using namespace std;
//int main()
//{
	//double x, y, z, h;
	//cout << "Vvedite x: ";
	//cin >> x;
	//cout << "Vvedite y: ";
	//cin >> y;
	//cout << "Vvedite z: ";
	//cin >> z;
	//h = (2 * cos(x-(2/3.))) / 0.5+pow(sin(y),2) * (1 + i / (3 - ((pow(z, 2))/5.)));
	//cout << "Result h= " << h << endl;
	//return 0;
//}




#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	double x, y, z, h;
	cout << "Vvedite x: ";
	cin >> x;
	cout << "Vvedite y: ";
	cin >> y;
	cout << "Vvedite z: ";
	cin >> z;
	h = (pow(9 + pow((x - y), 2), 1 / 3.)) / (pow(x, 2) + pow(y, 2) + 2) - (exp(abs(x - y)) * pow(tan(z), 3));
	cout << "Result h= " << h << endl;
	return 0;
}