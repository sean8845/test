#include <iostream>
using namespace std;
int main() {

	int score[]= {83,61,50,100,90};
	int temp=0;

	cout<<"排序前：";
	for (int i=0; i<5; i++)
		cout<<score[i]<<"   ";

	for (int i=0; i<4; i++) {
		for (int j=i;j<5; j++)

			if(score[i]>score[j]) {
				temp=score[i];
				score[i]=score[j];
				score[j]=temp;
			}

	}
	cout <<"\n排序後：";
	for(int i=0; i<5; i++)
		cout<<score[i]<<"   ";
	return 0;
}
