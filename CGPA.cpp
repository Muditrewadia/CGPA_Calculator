// GPA & CGPA calculator project

#include <iostream>
#include <stdlib.h>
using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("cls");
    int option;

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                        CGPA Calculator (Develop by Mudit)                    "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                 CHOOSE ANY OPTION THAT YOU WOULD LIKE TO PERFORM             "<<endl;
    cout<<"                        1. Calculate GPA                                      "<<endl;
    cout<<"                        2. Calculate CGPA                                     "<<endl;
    cout<<"                        3. Method that is applied to calculate CGPA           "<<endl;
    cout<<"                        4. Exit Application                                   "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    
    sub :

    cout<<"Enter your choice: ";
    cin>>option;

    switch (option)
    {
        case 1:
            calculateGPA();    
            break;

        case 2:
            calculateCGPA();
            break;

        case 3:
            method();
            break;

        case 4:
            exit(EXIT_SUCCESS);
            break;

        default :
            cout<<"You have entered wrong input. Please try again !!"<<endl;
            goto sub;
            break;
    }

}

void calculateGPA()
{
    int num;
    system("cls");
    cout<<"---------------------- GPA Calculating -------------------------"<<endl;
    cout<<"\nHow many subject's point do you want to calculate? : " <<endl;
    cin>>num;

    float credit[num];
    float point[num];

    cout<<endl;

    for(int i=0; i<num; i++)
    {
        cout<<"Enter the credit of the subject"<< i+1 <<" :"<<endl;
        cin>>credit[i];
        
        cout<<"\nEnter the point of the subject"<< i+1 <<" :"<<endl;
        cin>>point[i];
        cout<<"------------------------------------------------------------"<<endl;
    }

    float sum=0;
    float total;

    for(int j=0; j<num; j++)
    {
        total = credit[j] * point[j];
        sum = sum + total;
    }

    float totalcredit=0;
    
    for(int k=0; k<num; k++)
    {
        totalcredit = totalcredit + credit[k];
    }

    cout<<"\n\n\nTotal Points : "<< sum <<"  Total Credits : "<< totalcredit <<"  Total GPA : "<< sum/totalcredit <<endl;


     sub :
    int imenu;
    cout<<"\n\n\n Calculate Again"<<endl;
    cout<<"Go back to main menu" <<endl;
    cout<<"Exit the app\n\n"<<endl;
    cout<<"Choose one option"<<endl;
    cin>>imenu;

    switch(imenu)
    {
        case 1:
            calculateCGPA();
            break;

        case 2:
            main();
            break;

        case 3:
            exit(EXIT_SUCCESS);
            
        default:
            cout<<"You have choose invalid option ! Please check and try again"<<endl;
            goto sub;
    }

}


void calculateCGPA()
{
    system("cls");
    int num;
    cout<<"---------------------------- CGPA Calculating -----------------------------"<<endl;
    cout<<"\nHow many semester results do you want to calculate? : ";
    cin>>num;

    float semesters[num];
    
    for(int i=0; i<num; i++)
    {
        cout<<"\nEnter Semester "<<i+1<<" Result(GPA)"<<endl;
        cin>>semesters[i]; 

        cout<<"\n"<<endl;
    }

    float semtotal=0;
    for(int j=0; j<num; j++)
    {
        semtotal = semtotal + semesters[j];
    }

    cout<<"********** Your CGPA is : "<<semtotal/num<<" **********"<<endl;

    sub :
    int imenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go back to main menu" <<endl;
    cout<<"3. Exit the app\n\n"<<endl;
    cout<<"Choose one option"<<endl;
    cin>>imenu;

    switch(imenu)
    {
        case 1:
            calculateCGPA();
            break;

        case 2:
            main();
            break;

        case 3:
            exit(EXIT_SUCCESS);
            
        default:
            cout<<"You have choose invalid option ! Please check and try again"<<endl;
            goto sub;
    }
}

void method()
{
    system("cls");
    cout<<"-----------------------Method of calculating GPA & CGPA-----------------------"<<endl;
    cout<<"GPA = Sum of (Credit*Point) / total number of credits"<<endl;
    cout<<"CGPA = Sum of GPA / number of semesters"<<endl;
    cout<<"--------------------------------------------------------------------------\n\n"<<endl;

    sub :
    int iimenu;
    cout<<"1. Go back to Main Menu"<<endl;
    cout<<"2. Exit this app \n\n"<<endl;
    cout<<"Choose any one option"<<endl;
    cin>>iimenu;

    switch(iimenu)
    {
        case 1:
            main();
            break;

        case 2:
            exit(EXIT_SUCCESS);

        default:
            cout<<"You have choose invalid option ! Please check and try again"<<endl;
            goto sub;
            
    }

};



