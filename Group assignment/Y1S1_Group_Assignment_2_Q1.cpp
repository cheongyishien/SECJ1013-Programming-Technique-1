/*
Group assignment 2 Question 1
Group member:
1. Teoh Xin Yee A24CS0307
2. Cheong Yi Shien A24CS0058
*/
#include <iostream>
using namespace std;
int Find_highest(int[],int);//1. Function prototype to find highest
int Find_lowest(int[],int);//2. Function prototype to find lowest array 
int Find_odd(int[],int);//Function prototype to find odd array

int main()
{
    const int NUM1=5;
    const int NUM2=10;
    int array1[NUM1];
    int array2[NUM1];
    int array3[NUM2];
    double total=0;
    
    //Input array1
    cout<<"Enter table array1:"<<endl;
    for(int i=0; i<NUM1; i++)
    {
       cout<<"Please enter an integer: ";
       cin>>array1[i]; 
    }
    cout<<endl;

    //Input array2
    cout<<"Enter table array2:"<<endl;
    for(int i=0; i<NUM1; i++)
    {
       cout<<"Please enter an integer: ";
       cin>>array2[i];
    }
    cout<<endl;

    //Output array3
    cout<<"OUTPUT:\nTable array3:\n";

    int x=0,y=0;
    for(int j=0; j<NUM2; j++)
    {
        if(j<NUM1)
        {
            array3[j]=array1[x];
            x++;
        }
        else
        {
            array3[j]=array2[y];
            y++;
        }
        cout<<array3[j]<<" ";
        total=total+array3[j];
    }
    cout<<endl<<endl;

    int highest_array=Find_highest(array3,NUM2);//1. Function call to find highest array
    int lowest_array=Find_lowest(array3,NUM2);//2. Function call to find lowest array 
    int odd_num=Find_odd(array3,NUM2);//Function call to find odd array

    //Calculate range of values
    int range=highest_array-lowest_array;

    //Calculate average
    double average=total/NUM2;
    
    //Output of the program
    cout<<"The average of ten numbers in array3 = "<<average<<endl;
    cout<<"The range of values in array3 = "<<range<<endl;
    cout<<"The number of odd numbers in array3 = "<<odd_num;


}


//Function definition
//1. Function definition to find highest array
int Find_highest(int array3[],int NUM2)
{
    int highestArrray=array3[0];
    for(int a=0; a<NUM2; a++)
    {
        if(array3[a]>highestArrray)
        {
            highestArrray=array3[a];
        }
    }
    return highestArrray;
}

//2. Function definition to find lowest array 
int Find_lowest(int array3[],int NUM2)
{
    int lowestArrray=array3[0];
    for(int a=0; a<NUM2; a++)
    {
        if(array3[a]<lowestArrray)
        {
            lowestArrray=array3[a];
        }
    }
    return lowestArrray;
}

//Function definition to find odd array
int Find_odd(int array3[],int NUM2)
{
    int odd_array=0;
    for(int a=0; a<NUM2; a++)
    {
        if(array3[a]%2)
        {
            odd_array=odd_array+1;
        }
    }
    return odd_array;
}