#include <iostream>
using namespace std;

void result(int a, int b, int c){
    int marks = a - b;
    if(marks < c){
        cout<<"FAIL"<<endl;
    }
    else{
    cout<<"PASS"<<endl;
    }
}
int main() {
	int number_of_tests,number_of_questions,correct,cutoff;int a = 0;
	cin >> number_of_tests;
	while(a<number_of_tests){
	cin >> number_of_questions >> correct >> cutoff ;
	int correct_marks = 3*correct;int incorrect = number_of_questions-correct;
	result(correct_marks,incorrect,cutoff);
	a++;
	}

	return 0;
}
