#include <iostream>
using namespace std;
int main()
{
    char sign,decision;
    float num1, num2, result;
    do{
        cout<<"Enter a operator.";
        cin>>sign;
        cout<<"\n Enter number 1 and number 2:";
        cin>>num1;
        cin>>num2;

        cout<<num1<<sign<<num2<<endl;
        cout<<"Number 1:"<<num1<<endl;
        cout<<"Number 2:"<<num2<<endl;
        cout<<"Operator:"<<sign<<endl;

        switch(sign){
            case '+' : cout<<"Result="<<result=num1+num2;
                        break;
            case '-' : cout<<"Result="result=num1-num2;
                        break;
            case '*' : cout<<"Result="result=num1*num2;
                        break;
            case '/' : cout<<"Result="result=num1/num2;
                        break;
            default : cout<<"Error!";
                        break;
        }while(decision=='C');

        cout<<"If you want to continue, enter C:";
        cin>>desicion;
    }
    


    
}