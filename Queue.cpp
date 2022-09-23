#include <iostream>

using namespace std;

class Queue{

    private:

    int q[100],f=-1,r=-1; 

    public:

      bool isfull()

        {

            if(r==99)

            {

                return true;

            }

            else

            {

                return false;

            }

        }

    void enque(int value)

    {

       

        if(isfull())

        {

            cout<<" Queue overflow ";

            

        }

        else

        {

           if(f==-1)

           {f++;

               r++;

               q[r]=value;

           }

           else

           {

                r++;

               q[r]=value;

           }

        }

       

    }

    bool isempty()

    {

        if(f==r)

        

            return true;

          else  

        

        return false;

    }

   int deque()

   {

       int value;

       if(isempty())

       {

           return -1;

       }

       else

       {

           value=q[f];

           f++;

           return value;

       }

   }

   void display()

   {

       cout<<"The queue is :"<<endl;

       for(int i=f;i<=r;i++)

       {cout<<q[i]<<" ";}

       cout<<endl;

   }

};

int main()

{

    Queue s;

     int ch;   

    do{

        cout<<"  \n Enter your choice:"<<endl;

        cout<<"1 for enque"<<endl;

    cout<<"2 for deque"<<endl;

    cout<<"3 for display"<<endl;

    cout<<"4 for exit"<<endl;

 

        cin>>ch;

        switch(ch)

        {

            case 1:

            {   

                 int value;

                 cout<<"Enter the value to  insert in queue"<<endl;

                 cin>>value;

                s.enque(value);

                break;

            }

            case 2:

            {s.deque();

                break;

            }

            case 3:

            {s.display();

                break;

            }

            case 4:

            {

                cout<<"you are out of the program"<<endl;

                break;

            }

            default:

            {cout<<"invalid choice "<<endl;}

        }

    }while(ch!=4);

    return 0;

}

queue
