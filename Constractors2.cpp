#include<iostream>
using namespace std;

class Wall {
	
	private:
		double lenght;
		double height;
	
	public:
		Wall(double len,double hgt) {
			
			lenght = len;
			height = hgt;	
		}	
		
		double AreaCalculator() {
			
			return lenght*height;
		}
};

int main()
{
	Wall wall1(10.8,6.98);
	Wall wall2(9.2,9.7);
	
	cout<<" Area of wall1 is = "<<wall1.AreaCalculator()<<endl;
	cout<<" Area of wall2 is = "<<wall2.AreaCalculator()<<endl;
	
	return 0;
}
