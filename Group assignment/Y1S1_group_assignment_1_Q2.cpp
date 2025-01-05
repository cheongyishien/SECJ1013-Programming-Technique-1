/*
Group assignment 1 Question 2
Group member:
1. Teoh Xin Yee A24CS0307
2. Cheong Yi Shien A24CS0058
*/

#include <iostream>
#include <cctype>
using namespace std;
double GType ();
double KType ();
double SType(char);
double G_Bcategory(int);
double K_Bcategory(int);
double K_Scategory(int);
void wrongType(char);

int main()
{
    char type, category;
    char name[60];
    int number,overtime=0;
    double total=0;
    cout<<"Enter your name\t\t\t: ";
    cin.get(name,60);
    cout<<"Enter your employee number\t: ";
    cin>>number;
    cout<<endl;
    cout<<"Type of employees:\n\tG-fixed paid employees \n\tK-Contract worker \n\tS-Subcontract worker"<<endl;
    cout<<"Enter your employee code\t: ";
    cin>>type;
    cout<<endl;

    //G-Fixed paid employees part
    if(type=='G')
    {
        cout<<"Hi, Fixed paid employee, "<<name<<" !"<<endl;
        cout<<"Category of fixed paid employees: \n\tP : manager \n\tB : non-manager"<<endl;
        cout<<"Enter your category\t\t: ";
        cin>>category;
        double fixed_salary=GType();//1. Function call G-Fixed paid employees par
        while((category!='B')&&(category!='P'))
        {
            cout<<"Category of fixed paid employees: \n\tP : manager \n\tB : non-manager"<<endl;
            cout<<"Enter your category\t: ";
            cin.ignore();
            cin>>category;
        }

        //Calculate salary for category B:non-manager
        if(category=='B')
        {
            cout<<"Enter hour of overtime\t\t: ";
            cin>>overtime;
            double OTsalary=G_Bcategory(overtime);//(1B) G_Bcategory function call
            total=fixed_salary+OTsalary;
        }
        //Calculate salary for category P:manager
        else if (category=='P')
        {
            total=fixed_salary;
        }
        //Output if wrong category
        else
        {
            cout<<"Error!"<<endl;
        }
    }//End of "G-Fixed paid employees part


    //K-Contract worker part
    if(type=='K')
    {
        int hour;
        cout<<"Hi, Contract worker, "<<name<<" !"<<endl;
        cout<<"Category of contract worker: \n\tB - Recovery \n\tS - Maintenance"<<endl;
        cout<<"Enter your category\t\t\t: ";
        cin>>category;
        hour=KType();//2. Function call K-Contract worker part
        do
        {
            //Calculate salary for category B - Recovery
            if(category=='B')
            {
                total=K_Bcategory(hour);//(2B) K_Bcategory function call  
            }
            //Calculate salary for category S - Maintenance
            else if(category=='S')
            {
                total=K_Scategory(hour);//(2S) K_Scategory function call 
            }
            //Output if wrong category
            else 
            {
                cout<<"Category of contract worker: \n\tB - Recovery \n\tS - Maintenance"<<endl;
                cout<<"Enter your category:";
                cin>>category;
            }
        }while((category!='B')&&(category!='S'));
    }//End of K-Contract worker part


    //S-subcontract worker part
    if(type=='S')
    {   
        char size;
        int num=0;
        cout<<"Hi, subcontract worker, "<<name<<" !"<<endl;
        cout<<"Type of toys assembled: \n\tB - Large size toy\n\tS - Medium size toy\n\tK - Small size toy"<<endl;
        cout<<"Enter type of toys assembled\t: ";
        cin>>size;
        total=SType(size);//3. S-Fixed paid employees part
    }//End of S-Subcontract worker part


    //Output if wrong type of employee
    wrongType(type);

    //Output
    cout<<endl;
    cout<<"Employee's name: "<<name<<endl;
    cout<<"Employee number: "<<number<<endl;
    cout<<"Employee income: RM "<<total<<endl;

}//End of main function


//1. G-Fixed paid employees part
double GType()
{
    double fixed_salary;
    cout<<"Enter amount of fixed salary\t: ";
    cin>>fixed_salary;
    return fixed_salary;
} //1. End of G-Fixed paid employees part


//2. Function call K-Contract worker part
double KType()
{
    int hour;
    cout<<"Enter working hour for contract worker\t: ";
    cin>>hour;
    return hour;
}//2. End of Function call K-Contract worker part


//(1B) G_Bcategory function definition
//Calculate overtime salary for category B:non-manager 
double G_Bcategory(int overtime)
{
    //Calculate overtime salary based on overtime hour
    double OTsalary;
    if(overtime>20)
    {
        OTsalary=(10*15)+(10*12);
    }
    else if(overtime>10)
    {
        OTsalary=(10*15)+((overtime-10)*12);
    }
    else if(overtime>0)
    {
        OTsalary=overtime*15;
    }
    else
    {
        OTsalary=0;
    }
    return OTsalary;
}//(1B) End of G_Bcategory function definition


//(2B) K_Bcategory function definition
//Calculate salary for category B - Recovery
double K_Bcategory(int hour)
{
    //Calculate total salary based on working hour
    double total;
    if(hour>100)
        {
            total=20*100;
        }
    else if (hour>0)
        {
            total=20*hour;
        }
        else
        {
            total=0;
        }
    return total;
}//(2B) End of K_Bcategory function call


//(2S) K_Scategory function definition
//Calculate salary for category S - Maintenance
double K_Scategory(int hour)
{
    //Calculate total salary based on working hour
    double total;
    if(hour>100)
    {
        total=(50*10)+(50*5);
    }
    else if (hour>50)
    {
        total=(50*10)+((hour-50)*5);
    }
    else if(hour>0)
    {
        total=hour*10;
    }
    else
    {
        total=0;
    }
    return total;
}//(2S) End of K_Scategory function call 


void wrongType(char type)
{
    if((type!='G')&&(type!='K')&&(type!='S'))
    {
        cout<<"Invalid type of employee!"<<endl;
    }
}
//3. S-Fixed paid employees part
double SType(char size_)
{
    int num=0;
    double total;
    if(size_=='B')
    {
        cout<<"Enter number of large size toy\t: ";
        cin>>num;
        total=num*8;
    }
    else if (size_=='S')
    {
        cout<<"Enter number of medium size toy\t: ";
        cin>>num;
        total=num*5;
    }
    else if (size_=='K')
    {
        cout<<"Enter number of small size toy\t: ";
        cin>>num;
        total=num*2;
    }
    else 
    {
        total=0;
    }
    return total;
}//3. End of S-Fixed paid employees part