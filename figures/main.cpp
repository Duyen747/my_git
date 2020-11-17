#include <iostream>
#include "Figure.h"
#include "FigIO.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inputCircleData(istream& inDevice, Circle& cir)//vì là doi tuong nen co &
{
	double Xo, Yo, r;
	inDevice >> Xo >> Yo >> r;
	cir.Set(Xo, Yo, r);
}

void outputCircleinfo(ostream& outDevice, Circle& cir)
{
	outDevice << " + Area of circle = " << cir.Area() << endl;
	outDevice << " + Perimeter of circle = " << cir.Perimeter() << endl;
}

void testCase1(){
	Point2D P;
	P.Set(7.2, 4.3);
	P.Move(2.7, 4.1);
	
	Circle Cir;
	Cir.Set(1.0, 1.0, 3);
	double area = Cir.Area();
	double Perimeter  = Cir.Perimeter();
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << Perimeter << endl;
}

void testCase2(){
	Circle mycir;
	cout << "Input center and radius: ";
	inputCircleData(cin, mycir);
	outputCircleinfo(cout, mycir);
	cin.get();
}
int main(int argc, char** argv) {
	Circle mycir;
	cout << "Input center and radius: ";
	cin >> mycir;
	cout << mycir;
}
