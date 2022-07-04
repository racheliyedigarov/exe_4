#define _CRT_SECURE_NO_WARNINGS
/*#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>*/ //uncomment this block to check for heap memory allocation leaks.
// Read https://docs.microsoft.com/en-us/visualstudio/debugger/finding-memory-leaks-using-the-crt-library?view=vs-2019
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct StudentCourseGrade
{
	char courseName[35];
	int grade;
}StudentCourseGrade;

typedef struct Student
{
	char name[35];
	StudentCourseGrade* grades; //dynamic array of courses
	int numberOfCourses;
}Student;


//Part A
void countStudentsAndCourses(const char* fileName, int** coursesPerStudent, int* numberOfStudents);
int countPipes(const char* lineBuffer, int maxCount);
char*** makeStudentArrayFromFile(const char* fileName, int** coursesPerStudent, int* numberOfStudents);
void printStudentArray(const char* const* const* students, const int* coursesPerStudent, int numberOfStudents);
void factorGivenCourse(char** const* students, const int* coursesPerStudent, int numberOfStudents, const char* courseName, int factor);
void studentsToFile(char*** students, int* coursesPerStudent, int numberOfStudents);

//Part B
Student* transformStudentArray(char*** students, const int* coursesPerStudent, int numberOfStudents);
void writeToBinFile(const char* fileName, Student* students, int numberOfStudents);
Student* readFromBinFile(const char* fileName);

int main()
{
	//Part A
	int* coursesPerStudent = NULL;
	int numberOfStudents = 0;
	char*** students = makeStudentArrayFromFile("studentList.txt", &coursesPerStudent, &numberOfStudents);
	factorGivenCourse(students, coursesPerStudent, numberOfStudents, "Advanced Topics in C", +5);
	printStudentArray(students, coursesPerStudent, numberOfStudents);
	//studentsToFile(students, coursesPerStudent, numberOfStudents); //this frees all memory. Part B fails if this line runs. uncomment for testing (and comment out Part B)

	//Part B
	Student* transformedStudents = transformStudentArray(students, coursesPerStudent, numberOfStudents);
	writeToBinFile("students.bin", transformedStudents, numberOfStudents);
	Student* testReadStudents = readFromBinFile("students.bin");

	
	for (i = 0; i < 35; i++) {
		printf("%c", student[i]);
		free(student[i]);
	}
	free(student);
}

	/*_CrtDumpMemoryLeaks();*/ //uncomment this block to check for heap memory allocation leaks.
	// Read https://docs.microsoft.com/en-us/visualstudio/debugger/finding-memory-leaks-using-the-crt-library?view=vs-2019

	return 0;
}

void countStudentsAndCourses(const char* fileName, int** coursesPerStudent, int* numberOfStudents)
{
	int i = 0;
	int sum = countStudentsAndCourses;
	char strlen(str);
	s->filName;
	s->coursesPerStudent;

	int coursesPerStudent;
	char* ptr = (char*)malloc(i * sizeof(char));
	
	s-> = !NULL;

}

int countPipes(const char* lineBuffer, int maxCount)
{
	int i = 0;
	int numPipes = countPipes;
	char strlen(str);
	s->lineBuffer;
	s->maxCount;
		StringLength = strlen(maxCount);
		Count = 0;

		for (i = 0; i < maxCount; i++)
			if (maxcount[i] == LookFor)
				Count++;

		return Count;
	}
if s->NULL

return -1;
if maxCount <= 0
return 0;
	

}

char*** makeStudentArrayFromFile(const char* fileName, int** coursesPerStudent, int* numberOfStudents)
{
	char* students[10];
	char* name;
	char* course;
	char* grade;
	char* ptr = (char*)malloc(i * sizeof(char numberOfStudents));
	char* ptr = (char*)malloc(i * sizeof(char coursesPerStudent));
	char* ptr = (char*)malloc(i * sizeof(char studentGrades));

	char courseName[3] = { 'infi', 'bdida','advanced topic in C'};
	char grade[i] = {};
}




void factorGivenCourse(char** const* students, const int* coursesPerStudent, int numberOfStudents, const char* courseName, int factor)
{
	int factor = 10;
	int gradeAfterfactor;

	if (gradeAfterfactor < 100 && gradeAfterfactor > 0);
	
	char courseName[3] = { 'infi', 'bdida','advanced topic in C' };
	int students[10] = {};
	char factorGivenCourse = { 'advanced topic in C'};

}

void printStudentArray(const char* const* const* students, const int* coursesPerStudent, int numberOfStudents)
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		printf("name: %s\n*********\n", students[i][0]);
		for (int j = 1; j <= 2 * coursesPerStudent[i]; j += 2)
		{
			printf("course: %s\n", students[i][j]);
			printf("grade: %s\n", students[i][j + 1]);
		}
		printf("\n");
	}
}

void studentsToFile(char*** students, int* coursesPerStudent, int numberOfStudents)
{

	int[] = txt.studentList;
    void* realloc(void* ptr, unsigned int studentList);
	int coursesPerStudent[3]= { 'infi', 'bdida','advanced topic in C' };
	int numberOfStudents[10];

	FILE* pFile;
	char student[10];
	int counter = 1;
	pFile = fopen("myfile.txt", "r");
	if (pFile == NULL) printf("Error opening file");
	else {
		while (fgets(student,10, pFile) != NULL)
			printf("%d%s", counter++, buffer);
		fclose(pFile);

}

void writeToBinFile(const char* fileName, Student* students, int numberOfStudents)
{
	FILE* f = fopen(fileName, access_type);
	
		FILE* f;
	f = fopen(fileName, access_type);
	char students[];
	char numberOfStudents[10] = {};
}

Student* readFromBinFile(const char* fileName)
{
	int size[10];
	FILE* f = fopen(fileName, access_type);

	FILE* f;
	f = fopen(fileName, access_type);

	char* ptr = (char*)malloc(size * sizeof(char));


}

Student* transformStudentArray(char*** students, const int* coursesPerStudent, int numberOfStudents)
{
	int size[10]
	char students[];
	char coursesPerStudent[3] = { 'infi', 'bdida','advanced topic in C' }
	char numberOfStudents[10] = {};
	char* ptr = (char*)malloc(size * sizeof(char));

}
