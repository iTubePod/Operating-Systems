#include <stdio.h>
#include <string.h>

/*
	Hector Mauricio Gonzalez Coello 	A01328258
	Rafael Diaz Medina 					A01024592
*/

struct Student
{
	char Name [255];
	char EnrollmentId[255];
	char Program[5];
	int Semester;
};
void printStudent(struct Student *x)
{
	printf("Name: %s\n", x->Name);
	printf("Enrollment: %s\n", x->EnrollmentId);
	printf("Program: %s\n", x->Program);
	printf("Semester: %d\n\n", x->Semester);
}

int main()
{
	struct Student stud1, stud2, stud3;

	strcpy( stud1.Name, "Mauricio G. Coello");
	strcpy( stud1.EnrollmentId, "A01328258"); 
	strcpy( stud1.Program, "ITC");
	stud1.Semester = 9;

	strcpy( stud2.Name, "Rafael Diaz");
	strcpy( stud2.EnrollmentId, "A01021010"); 
	strcpy( stud2.Program, "ITC");
	stud2.Semester = 5;

	strcpy( stud3.Name, "Martin Perez");
	strcpy( stud3.EnrollmentId, "A01025612"); 
	strcpy( stud3.Program, "ITC");
	stud3.Semester = 6;

	printStudent(&stud1);
	printStudent(&stud2);
	printStudent(&stud3);
}