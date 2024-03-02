#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;


             /*  int add(int num1,int num2){
               int sum=num1+num2;
               return sum;

               }

               int main(){
                              int a=5;
                              int b=6;
                             cout<< add(a,b);
                             return 0;


               }
*/
/*int product(int a,int b){
int mul=a*b;
return mul;
}
int main(){
int num1,num2;
cout<<"enter 1st number:";
cin>>num1;
cout<<"enter 2nd number:";
cin>>num2;
cout<<product(num1,num2);
return 0;




}
*/



         //use a function to print a number

      /*   void print(int num){
         cout<<num;
         }
         int main(){
         int a;
         cin>>a;
         print(a);
         return 0;
         }
*/
/*void display(string num1,string num2){
cout<<num1<<endl;
cout<<num2<<endl;
}


int main(){
               string a,b;
               cout<<"enter strings:";
               cin>>a>>b;
               display(a,b);

}*/

 /*void print(int num){
cout<<num<<endl;
return;
}
int add(int num1,int num2){
print(num1);
print(num2);
int sum=num1+num2;
return sum;
}
int main(){
int a =76;
int b=8;
cout<<add(a,b);
return 0;

}*/

//create a function that recieves the radiuss of the circle and returns u the area of the circle

/*void print( float num){
cout<<num<<endl;
}
float area(float r){
float const PI=3.147;
print(r);
float a=PI*r*r;

return a;
}
int main()
{

cout<<area(4);
return 0;
}
*/






      // create a function that recieves two stringgs and display the both the strings after concatenating

    /*   string display(string n1,string n2){
       string n3=n1+ " " +n2;
       return n3;


       }



       int main(){

       string a ,b;
       cin>>a;
       cin>>b;
       cout<<display(a,b);

       return 0;
       }*/

                  //update the values:
                  //passing values by refrence

  /*                 void update(int& val1,int& val2){
                   val1++;
                   val2++;


                   }

                   void print(int num){
                   cout<<num<<endl;}





                   int main(){
                   int a=10;

                   int b=15;

                   update(a,b);
                   print(a);
                   print(b);


                   return 0;
                   }

*/



                  //write a function that returns the product of 2 numbers entered by user
           /*       int product(int n1,int n2)
                  {
                                 int mul=n1*n2;
                                 return mul;
                  }

                  void print(int num){
                                 cout<<num<<endl;


                  }
                  int main(){
                                 cout<<"enter any two numbers:";
                                 int a,b;
                                 cin>>a>>b;
                                 print(a);
                                 print(b);
                                 cout<<product(a,b);
                                 return 0;


                  }


*/

      //define two functions to print the maximum nd minimum number respectively among 3 numbers entered by user



/*      int maximumNum(int n1,int n2,int n3){
      if(n1>n2 ||n1>n3 )
               return n1;

      else if(n2>n3 )
               return n2;
      else
               return n3;


      }
      int minimumNum(int v1,int v2,int v3){
                     if(v1<v2 || v1<v3)
                              return v1;
                     else if(v2<v3)
                              return v2;
                              else
                              return v3;

      }




      int main(){
                     int a,b,c;
                     cout<<"enter the three numbers:";
                     cin>>a>>b>>c;
                     cout<< "maximum number is"<<maximumNum(a,b,c)<<endl;
                     cout<<"minimum number is:"<<minimumNum(a,b,c)<<endl;









      return 0;
      }

*/



                         //a person is elligible to vote if his/her age is greater then or equal to18
   /*                      void vote(int n1){
                              if(n1>=18)
                              cout<<"person is eligible"<<endl;
                              else
                                             cout<<"person is not eligible";




                         }

                         int main(){
                              int n;

                              cout<<"enter the age of the person:";
                              cin>>n;
                              vote(n);




                         return 0;
                         }

*/


                 //create a function that recieves 2 integer num and swaps them;
 /*                  void swap(int n1,int n2){
                                  int temp=n1;
                                  n1=n2;
                                  n2=temp;





                   }



                   int main(){
                              int num1,num2;
                              cout<<"enter 1st integers:";
                              cin>>num1;
                              cout<<"enter 2nd integer:";
                              cin>>num2;


                                  swap(num1,num2);
                                  cout<<"inegers after swapping:"<<endl;
                                  cout<<"1st integer is:"<<num1<<endl;
                                  cout<<"2nd integer is:"<<num2;



                   return 0;
                   }
*/


      //create 2 functions ,first recieve integer array and returns maximum item.the 2nd recieves integer array nd returns minimum item.

    //  int max(int arr[]){
/*                     int maxItem=arr[0];
                     for (int i=0;i<9;i++){
                              if(arr[i]>maxItem){
                                             maxItem=arr[i];

                              }
                     }
                     return maxItem;

      }

      int min(int arr[]){
                     int minItem=arr[0];
                     for(int i=0;i<9;i++){
                              if (arr[i]<minItem){
                                             minItem=arr[i];
                              }
                     }


                 return minItem;
      }


      int main(){
                     int array1[19]={1,2,44,3,6,2,69,30,4};
                     int array2[9]={1,2,44,3,66,2,6,55,4};
                     cout<<"maximum num from array is:"<<max(array1)<<endl;
                     cout<<"minimum number from array is:"<<min(array2)<<endl;

                           return 0;
      }

*/                                       //print all prime numbers between two numbers


/*              bool isprime(int num){
                  for(int i=2;i<=sqrt(num);i++){

                   if(num%i==0){
                        return false;

                   }
                  }
                       return true;}

             void printPrimes(int start,int end){
                for(int i=start;i<=end;i++){
                     if(isprime(i)){
                              cout<<i<<endl;
                     }
                }
             }


           int main(){
              int start_num, end_num;
              cout<<"enter any 2 numbers:";
              cout<<"enter 1st number:";
              cin>>start_num;
              cout<<"enter 2nd number:";
              cin>>end_num;
              printPrimes(start_num,end_num);


          return 0;}
*/


                                         //TO FIND A FACTORIAL OF A NUMBER:

/*
               int fact(int n){
                    int factorial=1;
                    for(int i=2;i<=n;i++){
                              factorial*=i;
                    }
                    return factorial;}


               int  main(){
                    int num;
                    cout<<"ENTER THE NUMBER TO FIND A FACTORIAL:";
                    cin>>num;
                    cout<<endl;
                    cout<<fact(num)<<endl;




               return 0;}

*/
                                 //FIBENACCI SEQUENCE:the nextTerm is the sum of two previous terms


/*                 int fibenacci(int n){
                      int T1=0;
                      int T2=1;
                      int nextTerm=T1+T2;
                      for(int i=1;i<=n;i++){
                           cout<<T1<<endl;
                           nextTerm=T1+T2;
                           T1=T2;
                           T2=nextTerm;


                      }
                      return T1; }



                 int main(){

                     int num;
                     cout<<"enter the number:";
                     cin>>num;
                     cout<<fibenacci(num)<<endl;





                 return 0;}
*/





                                 //TO FIND THE COMBINATIONS nCr=n!/((n-r)!*r!) of the number


/*               int fact(int n){
                   int factorial=1;
                   for(int i=2;i<=n;i++){
                              factorial*=i;
                   }
                   return factorial;
                   }


               int main(){
                   int num,r,nCr;
                   cout<<"ENTER THE 1st NUMBER: ";
                   cin>>num;
                   cout<<"enter the 2nd number: ";
                   cin>>r;

                   cout<<"factorial of 1st number is:"<<fact(num)<<endl;
                   cout<<"factorial of r is:"<<fact(r)<<endl;

                   nCr= fact(num)/(fact(num-r)*fact(r));
                   cout<<"number of combinations: "<<nCr;


                   return 0;}

*/




                       //sum of first n natural numbers
/*               int sum(int num){
                       int val=0;
                       for(int i=1;i<=num;i++){
                           val+=i;
                       }
                       return val;


               }

               int main(){

                   int n;
                   cout<<"enter  the number:";
                   cin>>n;
                   cout<<sum(n);
                   return 0;}
*/






/*                                        //CCHECK PHYTHOGORIAN TRIPLET


              bool check(int x,int y,int z){
                    int a=max(x,max(y,z));
                    int b,c;

                    if(a==x)
                    {
                       b=y;
                       c=z;
                    }
                    else if(a==y)
                    {
                       b=x;
                       c=z;
                    }
                    else
                    {
                        b=x;
                        c=y;
                    }

                    if(a*a==b*b+c*c)
                    {
                        return true;
                    }
                    else
                              return false;
                    }




             int main(){
                 int x,y,z;
                 cout<<"enter any three integers: ";
                 cin>>x>>y>>z;
                 if(check(x,y,z)){
                              cout<<"phythpgorean triplet";
                 }
                 else
                              cout<<"not phythogorean triplet:";



             return 0;}

*/
































































