#include <iostream>
#include "stdafx.h"
#include "pointers.h"

using namespace std;

int PointerDMA(){ 
    
    /*****************************************************************************
			Dynamic Allocation is done on the Heap 
    		We can use the Heap's free memory 
		    BUT need to take care of releasing the memory when we are done 
	 *****************************************************************************/
    
    // 1. BASIC INITIALIZATION TO THE POINTER ###############################################
    
    int a;
    a = 10;
    
    int *arr = nullptr;
    arr = &a;
    
    cout<<*arr<<endl; //10
    
    //2. DYNAMIC MEMORY ALLOCATION		############## new keyword ###########################
    
    int *dyarr = new int;	//new keyword used for Dynamic memory location in Heap  
    cout<<dyarr<<endl;		//Displayy the memory address of the created storage in heap to store the int variable .
    cout<<*dyarr<<endl;		// Garbage value from HEAP as nothing is initialized in it. here we are getting 0 
    *dyarr = 10;			//value at the address of dyarr is now 10
    cout<<*dyarr;			// value at dyrr i.e 10
    delete dyarr;			//dealloacte the Pointer dyarr
    
    //3. DML of Array at Run Time.				###############################################
    
    int *arr_ptr = nullptr;
    //int size;
    size_t size;
    cout<<"enter the size of the array ?";
    cin>>size;
    
    arr_ptr = new int[size]; //Allocate Array on the HEAP of size 
    
    cout<<"address pointed by arr_ptr"<<arr_ptr<<endl; //010B4CF0
    
    
    delete [] arr_ptr; //free allocated storage of array 
    // these [] should be empty 
    //it shiuld not have nothing.
    cout<<"address pointed by arr_ptr after deallocation"<<arr_ptr<<endl; //010B4CF0
    
    int *arr_ptr1 = new int[size]; //010B4CF0
    cout<<"address pointed by arr_ptr1"<<arr_ptr1<<endl;
    
    /*****************************************************************************	
		Same Address is allocated to another pointer after the deallocation of the pointer from HEAP
		Deallocation is very IMPORTANT for REUSE of the HEAP MEMORY.......

		If new element is made without deAllocation ---> new mem add is allocated for the newly created Dynamic pointer 
	 *****************************************************************************/
    
    
    
    
    return 0;
    
    
    
}
