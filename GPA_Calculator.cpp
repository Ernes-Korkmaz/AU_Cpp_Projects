	#include<iostream>   
	#include<cstring>        	//preprocessors for code.
	#include <limits>    

	using namespace std;  	    //means code uses standart operation.
	
	
	struct Student       		//defining Structure called Student.
	{
		string Name;			
		int mid;
		int final;             //elements of structure.
		double GPA;
	};
	

	double Calculator(int x, int y) 	//defining Calculator function which calculates the GPA.
	{		
		return ( x*0.30) + (y*0.70);
	}
	
	int check_note(int note,string exam){    //definig note checker function for propriate grades.
		while(true){
			if (note>=0 && note<=100){
				break;
			}else{
				cout << "  Please enter "+exam+" grade between 0-100: ";
				cin >> note;
			}
		}
		return note;
	}
	
	int main()      		//defining main function.
	{
		struct Student stud[5];   //defining structure array for students.
		
		int i;					//definig counter.
		int midterm;        	//defining midterm veriable.
		int final;				//defining final veriable.
		double general = 0; 	//general GPA veriable.
		int S = 3;				//number of students.
		
		for(i=0;i<S;i++) {		//loop for counter.
			
			cout << "Student " << i + 1 << endl;       //gaining students' name.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "  Enter name: ";
			getline(cin,stud[i].Name);
			
			cout << "  Enter the midterm grade: ";         //gaining students' midterm grade.
			int temp=0;
			cin >> temp;                                      
			stud[i].mid=check_note(temp,"Midterm");       //calling check_note function to check garde if it's propriate.
			
			cout << "  Enter the final grade:  ";			//gaining students' final grade.
			cin >> temp;
			stud[i].final=check_note(temp,"Final");			//calling check_note function to check garde if it's propriate.
			
			double avg = Calculator(stud[i].mid,stud[i].final);  //defining avarage via calling GPA calculator.
			
			general = general + avg;  		//addition of all grades.
			
			cout<<"\n\t GPA of "<<stud[i].Name<<" is :  "<<avg;  //printing student's GPA.
			
			if(avg<60) {							//checking if student passed or failed in class.
				cout<<" (FAILED) "<<endl;
			} else {
				cout<<" (PASSED) "<<endl;
			}
			
			cout<<"\n";     //printing next line for other students.
			
		}
		
		cout<<"***!! General GPA of this class is :  "<<general/S<<endl;		//Calculating GPA of class students.
		
		return 0;			//returning 0 if code worked with no problem.
	}
