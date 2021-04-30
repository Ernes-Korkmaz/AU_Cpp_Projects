#ifndef INCREMENT_H
#define INCREMENT_H

class Increment 
{
	public:
	   Increment( int c = 0, int i = 1 ); //default constructor

		 void addIncrement() //function addIncrement definition
		{ 
		      count += increment; 
		} 
		
		void print() const; //prints count and increment
	
	private:
	   int count;
	   const int increment;
}; 

#endif

#include <iostream>
using namespace std;
	
#include <INCREMENT_H> // include definition of class Increment
 
	Increment::Increment( int c, int i ): count( c ),increment( i ) // initializer for non-const member and required initializer for const member
	{ 
	} 

	void Increment::print() const // print count and increment values
	{
	   cout << "count = " << count << ", increment = " << increment << endl;
	} 
	
	int main()
{
   Increment value( 10, 5 );
	
   cout << "Before incrementing: ";
	   value.print();
	
	   for ( int j = 1; j <= 3; j++ ) 
		{
	      value.addIncrement();
	      cout << "After increment " << j << ": ";
	      value.print();
	    } 
	
	   return 0;
} 


