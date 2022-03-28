#include <iostream>
#include <math.h>


using namespace std;
#define STUDENT 10

int main()
{
	double score[STUDENT],average=0.0;

    cout << "Please enter 10 scores"<<endl;

    for (int i=0;i<STUDENT;i++){
        cin>>score[i];
    }

    for (int i=0;i<STUDENT;i++){
        average+=score[i];
    }
    average/=STUDENT;
    cout<<"Average:"<<average<<endl;
	
	return 0;
}
