//How to set getters and setter
// Encapsulations
#include<iostream>
using namespace std;
// Sets of rules and principale to solve different problems
// real objexts ko explain
// to represent the objects in program

class AbstractEmploye{
    // Abstract class
  virtual void  AskForPromotion()= 0 ;
    
    



};

class Employee:AbstractEmploye{
    // member data and function 
    // This classs is blue print not an objexct 
    // we need object or instentiation
    private:
    //These three properties are now encapsulated 
    string name;
    string company;
    int age ; 
    public:

    void setName(string aname)
    {
        name=aname;


    }
    string getname()
    {
        return name;

    }
    void setCompany(string acompany)
    {
        company=acompany;
    }
    string getCompany()
    {
        return company;
        
    }
    void setAge(int aage )
    {
        if (aage>=18)
        age= aage;

}
    int  getAge()
    {
        return age;
        
    }

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
    void  AskForPromotion()
    {
        if ( age >30 )
        cout<<name<<"Got promoted "<<endl;
        else
        cout<<"Sorry "<<name<<" no promotion for you ";
    }
};


int main()
{
    Employee employe1=Employee("Najam","Amazon",20);
    employe1.AskForPromotion();
    cout<<endl;
    //constructor is invoked
    //  employe1.introduce();
    
    Employee employe2=Employee("Trina ","NCA",18);   
    employe2.AskForPromotion();
    cout<<endl;
    //  employe2.introduce();

    Employee employe3=Employee("Tela ", "NSA",31);
    employe3.AskForPromotion();

    // employe3.introduce();




    return  0 ;
}