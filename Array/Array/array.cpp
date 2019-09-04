#include <iostream>
#include <string>
using namespace std;
char Calgrade(int score);
void ListStudent(string name[100],int score[100],int time){
	for(int n = 0; n < time ; n++){
		cout << "Student Name : " << name[n] << " Score " <<n+1 <<" = " << score[n];
		char grade =  Calgrade(score[n]);
		cout << " Your grade is " << grade << endl;
	}
}
char Calgrade(int score){
	if(score >= 80)return('A');
	else if(score >=70)return('B');
	else if(score >=60)return('C');
	else return('D');
}
int main(){
	int time;
	cout << "input Number of Student : ";
    cin >> time;
	string name[100];
	int score[100];
	for(int n = 0; n < time ; n++){
			cout << "Input Name : ";
			cin >> name[n];
			cout << "Input score ["<<n+1<<"] : ";
			cin >> score[n];
			cout << endl;
	}
	ListStudent(name,score,time);
    return 0;

}