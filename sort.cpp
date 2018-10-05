/*Comment:
          Write C++ program to enter 3 integer number , sort them, then display the sorted numbers.
*/

//Header:
         #include<iostream>
         using namespace std;
         
//Global Variables:
         int temp;
         void sort(int,int,int);
         
         
//Main:
       int main()
       {
           //local variables    
           int num1, num2, num3;
           
           
           //code
           
           //Enter 3 numbers
           cout<<"Enter three integer numbers==>: ";
           cin>>num1>>num2>>num3;
           
           //Sort the 3 numbers
           sort(&num1,&num2,&num3);
           
           
           //display
           

           
           system ("pause");
           return 0;
       }
       
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void sort(int n1,int n2,int n3)
{
     
              if(n1>n2)
              {
              temp=n1;
              n1=n2;
              n2=temp;
              cout<<n1" "<<n2" "<<n3" ";
              return;                 
              }
              
              if(n2>n3)
              {
              temp=n2;
              n2=n3;
              n3=temp;
              cout<<n1" "<<n2" "<<n3" ";
              return;                 
              }   
              
              
              if(n3>n1)
              {
              temp=n3;
              n3=n1;
              n1=temp;
              cout<<n1" "<<n2" "<<n3" ";
              return;                 
              }             
}//sort ends
