#include <iostream>
#include "stdafx.h"
#include "pointers.h"

int ArrayAndPointers(){
	int scores[] = [100,200,300];

	int *ptr_scores = nullptr;

	ptr_scores = scores;

	cout<<"Value of scores"<<scores<<endl;

	cout<<"Value of pointer scores"<<ptr_scores<<endl;
	
	cout<<"scores"<<scores[0]<<endl;
	cout<<"scores"<<scores[1]<<endl;
	cout<<"scores"<<scores[2]<<endl<<endl;
	
	cout<<"scores"<<ptr_scores[0]<<endl;
	cout<<"scores"<<ptr_scores[1]<<endl;
	cout<<"scores"<<ptr_scores[2]<<endl<<endl;
	
	
	cout<<"scores"<<*ptr_scores<<endl;
	cout<<"scores"<<*(ptr_scores+1)<<endl;
	cout<<"scores"<<*(ptr_scores+2)<<endl<<endl;
	
	cout<<"scores"<<*scores<<endl;
	cout<<"scores"<<*(scores+1)<<endl;
	cout<<"scores"<<*(scores+2)<<endl<<endl;


	return 0;






}
