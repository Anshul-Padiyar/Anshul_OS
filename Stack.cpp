/******************************************************************************

Welcome to GDB Online.

GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,

C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.

Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>

using namespace std;

class St

{

    private : 

    int stck[100],top=-1;

    public:

    

    

    bool isfull()

    {

        if(top==99)

        return true;

        else

        return false;

    }

    

    bool isempty()

    {

        if(top==-1)

        return true;

        else

        return false;

        

    }

    

    void push(int value)

    {

        if(isfull())

        cout<<"Stack overflow."<<endl;

        else

        {

            top++;

            stck[top]=value;

        }

    }

  int pop()

  {

      if(isempty())

      {

          cout<<"Stack Underflow.";

      }

      else

      {

          return stck[top--];

      }

  }

  

  void display()

  {

      for(int i=0;i<=top;i++)

      {

          cout<<stck[i]<<endl;

      }

  }

    

};

int main()

{

   St obj1;

   int ch;

   

  

   do{

       cout<<"Enter your choice"<<endl;

       cout<<"1. Push"<<endl;

       cout<<"2. Pop"<<endl;

       cout<<"3.Display"<<endl;

       cout<<"4. Exit"<<endl;

     

     cin>>ch;

       switch(ch)

       {

          case 1:

          {

              int val;

               cout<<"enter the value"<<endl;

             cin>>val;

           obj1.push(val);

           break;

           

       }

       

       case 2 : 

       {

           obj1.pop();

           break;

       }

       case 3 :

       

       {

           obj1.display();

           break;

       }

       case 4:

       {

           cout<<"You are out of the program"<<endl;

           break;

       }

       default :

       {

           cout<<"Invalid choice"<<endl;

       }

   }

   }

   while(ch!=4);

   

    return 0;

}
