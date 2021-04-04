#include<iostream>

using namespace std;


int BoxVolume(int length=2, int width=1, int height=1);

int main()
{
	cout<<"The default volume is : "<<BoxVolume()<<endl;
	
	cout<<" Volume of a box with int length=10, int width=1, int height=1 is :  "<<BoxVolume(10)<<endl;
	
	cout<<" Volume of a box with int length=10, int width=5, int height=1  is : "<<BoxVolume(10,5)<<endl;
	
	cout<<" Volume of a box with int length=10, int width=1, int height=3 is :  "<<BoxVolume(10,5,3)<<endl;	
	
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
