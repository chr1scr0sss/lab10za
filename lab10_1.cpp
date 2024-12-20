#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int TotalStudents = 0;
	char Grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << TotalStudents +1 << "]: ";
		cin >> Grade; //The loop must be terminated when grade = '0'

		if(Grade == 'A'){ // if grade is A
			count[0]++;//Do something
			TotalStudents++;
		}else if(Grade == 'B'){ // if grade is B
			count[1]++;//Do something
			TotalStudents++;
		}else if(Grade == 'C'){
			count[2]++;
			TotalStudents++;
		}else if(Grade == 'D'){
			count[3]++;
			TotalStudents++;
		}else if(Grade == 'F'){
			count[4]++;
			TotalStudents++;
		}else if(Grade == '0'){
			break;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";//Do something
		} 
	}while(true);
	
	
	cout << "In total "<< TotalStudents <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}

