// operators overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Box{
	public:
		double getVolume(void){
			return length*breadth*height;
		}
		void setLength(double len){
			length=len;
		}
		void setBreadth(double bre){
			breadth=bre;
		}
		void setHeight(double heg){
			height=heg;
		}
		Box operator+(const Box& b){
			Box box;
			box.length= this->length+b.length;
			box.breadth= this-> breadth+b.breadth;
			box.height= this-> height+b.height;
			return box;
		}

	private:
		double length;
		double height;
		double breadth;
};

int _tmain(int argc, _TCHAR* argv[])
{
	Box box1;
	Box box2;
	Box box3;
	double volume = 0.0;
	//box1
	box1.setBreadth(3.0);
	box1.setHeight(4.0);
	box1.setLength(5.0);

	//box2
	box2.setBreadth(4.3);
	box2.setHeight(5.4);
	box2.setLength(6.5);

	//volume of box 1
	volume=box1.getVolume();
	cout << "Volume of box 1 is: " << volume << endl;

	//volume of box 2
	volume=box2.getVolume();
	cout << "Volume of box 2 is :" << volume << endl;

	box3=box1+box2;

	//volume of box 3
	volume=box3.getVolume();
	cout << "Volume of box 3 is: " << volume << endl;

	system("pause");
	return 0;
}

