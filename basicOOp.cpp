#include<iostream>
using namespace std;
// Sets of rules and principale to solve different problems
// real objexts ko explain
// to represent the objects in program

class Employee{
    // member data and function 
    // This classs is blue print not an objexct 
    // we need object or instentiation
    public:
    string name;
    string company;
    int age ; 
    void introduce()
    {
        cout<<"My name is :"<<name<<endl;
        cout<<"I am "<<age<<" year old "<<endl;
        cout<<"I work at :"<<company<<endl;


    }
    Employee(string aname ,string acompany,int aage )
    {
        // Construct obbject of employee

        name=aname;
        company=acompany;
        age= aage;
 }

};


int main()
{
    Employee employe1=Employee("Najam","Amazon",20);
    //constructor is invoked
     employe1.introduce();
    
    Employee employe2=Employee("Trina ","NCA",18);

    // employe1.name = "Najam ";
    // employe1.age=23;
    // employe1.company= "Amazon ";

    // employe2.name= "trina";
    // employe2.age= 19;
    // employe2.company= "NCA";

   
     employe2.introduce();




    return  0 ;
}