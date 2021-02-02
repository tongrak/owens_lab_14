#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void swap(int in[],int a, int b){
	int holder = in[a];
	in[a] = in[b];
	in[b] = holder;
}

void shuffle(int *a, int *b, int *c, int *d){
	int mo[]={*a,*b,*c,*d},z;
	for(int i=0;i<3;i++){
		if(i==0)z=rand()%4;
		else {z=rand()%3+1;}
		swap(mo,i,z);
	}
	*a=mo[0];
	*b=mo[1];
	*c=mo[2];
	*d=mo[3];
}
