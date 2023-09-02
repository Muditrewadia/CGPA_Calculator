#include <iostream>
#include <stdlib.h>

using namespace std;

void drawLine(int n, char symbol);
void calculateGPA();
void calculateCGPA();
void method();



int main()
{
    system("cls");
    int input;
    drawLine(85,'_');
    cout<<"\n\t\tGPA & CGPA Calculator (Developed by Mudit)\t\t\t\n"<<endl;
    drawLine(85,'_');
    cout<<"\n\t MENU:"<<endl;
    cout<<"\t\t1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"\t\t2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"\t\t3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"\t\t4. Exit Application"<<endl;
    drawLine(85,'_');
    sub:
    cout<<"\nEnter your choice: ";
    cin>>input;
    switch(input)
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
                cout<<"THANKS FOR USING OUR PROGRAM";
                exit(EXIT_SUCCESS);
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;
    }
}

void drawLine(int n, char symbol)
{
        for(int i=0; i<n; i++)
        cout<< symbol;
        cout <<"\n";
}

void calculateGPA()
{
    int q;
    system("cls");
    cout<<"-------------- GPA Calculating -----------------"<<endl;
    cout<<" How many subject's GPA do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float point [q];

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the CGPA of the subject "<<i+1<<": ";
        cin>>point[i];
        drawLine(35,'_');
        cout<<endl;
    }

    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                cout<<"THANKS FOR USING OUR PROGRAM";
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}
void calculateCGPA()
{
    system("cls");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? : ";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                cout<<"THANKS FOR USING OUR PROGRAM";
                exit(EXIT_SUCCESS);
                

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}

void method()
{
    system("cls");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
    cout<<" GPA = Sum of (Credit * Point) / total of credits \n"<<endl;
    cout<<" CGPA =  Sum of GPA / number of semesters "<<endl;
    drawLine(85,'_');

    sub:
    int inmenu;
    cout<<endl;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                cout<<"THANKS FOR USING OUR PROGRAM";
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
};

