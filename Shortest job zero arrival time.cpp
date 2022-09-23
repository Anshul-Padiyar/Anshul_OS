





#include <bits/stdc++.h>

using namespace std;

struct process

     {

         int id,bursttime,completion,wait ,tat; 

     };

     

     bool cmp(process x,process y)

     {

         return (x.bursttime<y.bursttime);

     }

void turnaround_time( int n,process array[])

{

   array[0].tat=array[0].bursttime;

    for(int i=1;i<n;i++)

    {

       array[i].tat=array[i-1].tat+array[i].bursttime;

    }

}

void waiting_time(process array[],int n)

{

    array[0].wait=0;

    for(int i=1;i<n;i++)

    {

        array[i].wait=array[i-1].wait+array[i-1].bursttime;

    }

}

/*void completion(int procesid[],int n,int bursttime[],int comp[])

{

   

    for(int i=1;i<n;i++)

    {

        comp[i]=;

    }

}*/

void display(int n,process array[])

{

    cout<<"p_ID     burst   TAT           Waiting"<<endl;

    for(int i=0;i<n;i++)

    {

        cout<<array[i].id<<"       "<<array[i].bursttime<<"         "<<array[i].tat<<"          "<<array[i].wait<<endl;

    }

}

int main()

{

      int n;

      float avftat,avgwait;

     long long int totaltat=0,toalwait=0;

    

      cout<<"Enter the number of process:";

      cin>>n;

      

      process array[n];

      

      for(int i=0;i<n;i++)

      {

          cout<<"Enter the process ID and burst time (arrival time is  zero) :";

          cin>>array[i].id>>array[i].bursttime;

      }

      sort(array,array+n,cmp);

      

     

      

      turnaround_time( n, array);

   waiting_time( array, n);

 //  completion( procesid, n, bursttime,comp);

  display( n,array);

  for(int i=0;i<n;i++)

  {

      totaltat+=array[i].tat;

  }

   for(int i=0;i<n;i++)

  {

      toalwait+=array[i].wait;

  }

  cout<<"The average TAT is :"<<totaltat/n;

  cout<<"\n The averageWaiting time is "<<toalwait/n;

    return 0;

}
