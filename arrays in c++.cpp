#include <iostream>
using namespace std;
int main()
 {
 	/*#include <iostream>
using namespace std;
int main()
 {
 	//write a program that finds nd prints all odd num in the givwn array
 	
 		int arr[10]={1,2,3,5,8,10,12,23,28,15};
 //	int n=sizeof(arr)/sizeof(arr[0]);    //calculate its length using the sizeof()operator
 	cout<<"odd numbers are:";
 	for(int i=0;i<10;i++){
 		
 		if(arr[i]%2!=0){
 			cout<<arr[i]<<" ";
		 }
 		
	 }
	return 0;
}
*/



/*#include <iostream>
using namespace std;

   
int main()
 {
 	int nums[3][3]={{44,55,66},{33,99,22},{11,36,74}};  //initializing  two dimensional array 
 	for(int r=0;  r<3 ; r++){                           // for rows
 		for(int c=0; c<3 ; c++){                            //for columns
 			cout<<"["<<nums[r][c]<<"]\t";            //outputting the initialized array 
		 }
 		cout<<endl;
	 }
 		return 0;
}
*/













/*#include <iostream>
using namespace std;


int main()
 {
 	//PROGRAM TO PRINT THE ELEMENTS OF 2 DIMENSIONAL ARRAY
 	int num[3][3];
 	for(int r=0; r<3;r++){
 		for(int c=0;c<3;c++){
 			
 			cin>>num[3][3];
 			cout<<"\t";
		 }
		  
	 }
 	return 0;
}
*/
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	//two dimwnsional array:
/*  int num[3][3];
 	int const ROW=3;
 	int const COL=3;
 	int sum=0;
 	int avg=0.0;
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cin>>num[i][j];
		 }
	 }
	 
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<3;j++){
	 		cout<<num[i][j]<<"  ";
	 		sum=sum+num[i][j];
		 }
		 cout<<endl;
	 }
	 avg=(sum/(ROW*COL));
	 cout<<"the sum of the 2D array is = "<<sum<<endl;
	 cout<<"the average of the 2D array is= "<<avg<<endl;  */
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	//SEARCHING AN ELEMENT USING BUBBLE SEARCH:
 /*	 int num;
 	int nums[7];
 	int index;
 	bool found=0;
 	for(int i=0;i<7;i++){
 			cin>>nums[i];
		 }
		 
		 cout<<"enter the element to find inside the array: ";
		 cin>>num;
	 
	 for(int i=0;i<7;i++){
	 		if(num==nums[i]){
	 			found=1;
	 			index=i;
			 }		
		 }
		 if(found ==1){
		 	cout<<"number is found at location !"<<index;
		
		 }
		 else
		 cout<<"number donot dound!";*/
		 
		 int num;
		 int index;
		 bool found=0;
		 int num[5];
		 for(int i=0;i<5;i++){
		 	cin>>num[i];
		 }
		 cout<<"enter the element to find inside the array:";
		 cin>>num;
		 for(int i=0 ;i<5;i++){
		 	if(num==num[i]){
		 		found=1;
		 		index=i;
			 }
		 }
		 if(found==1){
		 	cout<<"number fond at"<<index;
		 }
		 else 
		 cout>>"not";
		 
		 
	return 0;
}





#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
using namespace std;
int main()
 {
/*	const int size=5;
 	
 	int array[5];
 	int sum=0;
 	for(int i=0;i<5;i++){
 		cin>>array[i];
	 }
	 for(int i=0;i<5;i++){
	 	cout<<array[i]<<"  ";
	 	sum+=array[i];
	 }
	 cout<<endl;
 	cout<<sum<<endl;
 	float avg=sum/size;
 	cout<<avg;
	 return 0;
	 
	 
}*/
                     //two dimensional aarray
  /*  int array[3][4]={{4,5,7,6},{2,8,9,7},{33,88,77,99}};
	cout<<array[2][3]; */      //assesing the index                
	
	
	
	            /*  avarge nd sum of 2 dimensional array
	int sum=0;
	const int row=4;
	const int col=3; 
	float avg;
	int array[4][3];
	for(int r=0;r<4.; r++){
		for (int c=0 ;c<3 ; c++){
			cin>>array[r][c];
		}
	}
	for(int r=0; r<4; r++){
		for(int c=0; c<3; c++){
			cout<<"["<<" "<<array[r][c]<<" "<<"]"<<" ";
			sum+=array[r][c];
		}
		cout<<endl;
	}
	cout<<"the sum of the matrix is:"<<sum<<endl;
	avg=sum/(row*col);
	cout<<"average of the matrix is:"<<avg;  
	
return 0;	
} 

*/


#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
using namespace std;
int main()
 {
 	// inputting one dimesnsional array:
 	
 /*	int num[5];
 	for(int i=0;i<5;i++){
 		cin>>num[i];
	 }
	 cout<<"[";
	 for(int i=0;i<5 ; i++){
	 	cout<<num[i]<<" ";
	 }
	 cout<<"]"; */
	 
	 
	 //summing all elements of the array:
	 	 //averaging all the elements in one dimensional array:

	 
	 
/*	 int sum=0;
	 int num[5];
	 float avg=0.0;
 	for(int i=0;i<5;i++){
 		cin>>num[i];
	 }
	 cout<<"[";
	 for(int i=0;i<5 ; i++){
	 	cout<<num[i]<<" ";
	 	sum=sum+num[i];
	 	
	 }
	 avg=(sum/num[5]);
	 cout<<"]"<<endl<<endl;
	 cout<<"the sum of the array is:"<<sum; 
	cout<<"the avrage of the array is:"<<avg<<endl; 
	 
	 
	 
 	return 0;
}
*/



/*#include <iostream>

using namespace std;
        //find the factorial of the number
        
int fac(int);
int fac(int n1){
	int facto=1;
	for(int i=1;i<n1;i++){
		facto*=1;
	}
	return facto;
}


   
int main()
 {
 	int num;
 	cout<<"enter any num: ";
 	cin>>num;
	 cout<<"factorial of thix number is = "<<fac(num)<<endl;
	return 0;
}

*/


/*#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop 
int main()
 {
 	bool a=true,b=true,c=true,d=false,e=false,f=true;
 	bool output;
 	output=  !((!(a || b) c ||  !D || e ) && !f );
 	cout<<" OUTPUT IS = "<<output;
	return 0;
}
/*#include<iostream>
using namespace std;
class name{
	private:
		int size;
	public:
		name(int SIZE)
		{
			size=SIZE;
			int num[size]={1,2,3,4,5,6};
			for(int index=1;index<=5;index++)
			{
				if(index<=10)
				{
					continue;
					cout<<index;
				}
			}
			cout<<"End of program.";
		}
};

int main()
{
	name obj(6);
	return 0;
}
*/






 #include <iostream>
using namespace std;

/* write a program in c++ that displays n three digit numbers where n provided by the user */
/*
int main()
 {
 	int value;
 	cout<<"enter the value: ";
 	cin>>value;
 	for(int i=1;i<value;i++){
 		
 		cout<<(2*i-1)+100<<"\t";
	 }
	return 0;
}

*/



/*#include <iostream>
#include<cmath>

using namespace std;
int main( )
 {
 /*	int temp[7];
 	int maxindex=0;
 	float tem;
 	for(int i=0;i<7;i++){
 		cout<<"enter the temperatur of the day : "<< i+1<< ": "<<i<<"(at index no) =  " ;
 		cin>>temp[i];
	 }
	 for(int i=0;i<7;i++){
	 	if (temp[i]>temp[0]){
	 	maxindex=i;
		 }
	 }
	 cout<<"maximum temperature locate at index = "<<maxindex<<endl;
 	
 */
 
/* int a,b,c;
 int d ;
 float rezlt, q1,q2;
 cout<<"lets find the roots of the quadratic equation nd chek whether the rooots are rreal or imaginary:: "<<endl<<endl;
 cout<<"enter the value of a : ";
 cin>>a;
 cout<<endl;
 cout<<"enter the value  of b : ";
 cin>>b;
 cout<<endl;
 cout<<"enter the value of c :  ";
 cin>>c;
 cout<<endl;
 
  rezlt= ((b*b)-(4*a*c));
 d=sqrt(rezlt);
   q1=((-b-d)/2*a);
  q2=((-b+d)/2*a);
 cout<<"1st root is  = "<<q1<<endl<<endl;
 cout<<"2nd root is = "<<q2<<endl<<endl;
 
 if(rezlt>0){
 	cout<<"roots are real!"<<endl<<endl;
 }
 else
 cout<<"roots are imaginary!";
 
 
 
 	return 0;
}
*/


/*#include <iostream>
using namespace std;
//write a program to find the greater number among all
int main()
 {
 	
 	int num1,num2,num3;
 	cout<<"enter the 1st number:";
 	cin>>num1;
 	cout<<"enter the 2nd num:";
 	cin>>num2;
 	cout<<"enter the 3rd number: ";
 	cin>>num3;
 	if(num1>num2 && num1>3){
 		cout<<"1st number is greater";
 		
	 }
	 else if (num2>num1 && num2>num3){
	 	cout<<"2nd number is greater";
	 }
	 else
	 cout<<"3rd number is greater";
	return 0;
}
*/


/#include <iostream>
//using namespace std;
/* write a program in c++ that creat a function to add 2 numbers*

int sum(int )        //definition of function;
int sum(int a,int b){       //declaration of function;
	int c=a+b;
	return  c;        //value returning function;
}
int main(){
	int num1, num2;
	cout<<"enter the 1st num:";
	cin>>num1;
	cout<<endl;
	cout<<"enter the 2nd number:";
	cin>>num2;
	cout<<endl;
	cout<<"the sum of two numbers are:"<<sum(num1,num2);
	
	return 0; 
	
	
}*/
 
 
 /*#include <iostream>
#include<cmath>
using namespace std;
int main( )
 {
 /*	int temp[7];
 	int maxindex=0;
 	float tem;
 	for(int i=0;i<7;i++){
 		cout<<"enter the temperatur of the day : "<< i+1<< ": "<<i<<"(at index no) =  " ;
 		cin>>temp[i];
	 }
	 for(int i=0;i<7;i++){
	 	if (temp[i]>temp[0]){
	 	maxindex=i;
		 }
	 }
	 cout<<"maximum temperature locate at index = "<<maxindex<<endl;
 	
 */
 
 /*
 int a,b,c;
 int d ;
 float rezlt, q1,q2;
 cout<<"lets find the roots of the quadratic equation nd chek whether the rooots are rreal or imaginary:: "<<endl<<endl;
 cout<<"enter the value of a : ";
 cin>>a;
 cout<<endl;
 cout<<"enter the value  of b : ";
 cin>>b;
 cout<<endl;
 cout<<"enter the value of c :  ";
 cin>>c;
 cout<<endl;
 
  rezlt= ((b*b)-(4*a*c));
 d=sqrt(rezlt);
   q1=((-b-d)/2*a);
  q2=((-b+d)/2*a);
 cout<<"1st root is  = "<<q1<<endl<<endl;
 cout<<"2nd root is = "<<q2<<endl<<endl;
 
 if(rezlt>0){
 	cout<<"roots are real!"<<endl<<endl;
 }
 else
 cout<<"roots are imaginary!";
 	return 0;
}
*/






