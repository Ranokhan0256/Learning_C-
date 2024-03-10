/*#include <iostream>
using namespace std;

int main()
 {
 	int n;
 	cout<<"enter a number for finding its factorial:";
 	cin>>n;
 	int fact=1;
 	for(int i=n;i>0 ; i--)
 		fact*=i;  //fact=fact*i;
	 
 	cout<<"factorial of a given num is: "<<n<<"!="<<fact;
	return 0;
}
*/



/*#include<iostream>
using namespace std;
int main()
{
	string num;
	cout<<" Enter Course Name : ";
	cin>>num;
	cout<<num + " fundemantals";
}
*/






/*#include<iostream>
#include<iomanip>
using namespace std;
 int main ()
 {
 	int obt = 969;
 	int total = 1150;
 	
 	float per =(float) obt / total;
 	per = (float)per * 100;
 	cout<<"per = "<<per;
 	return 0 ;
 }
 */








/*#include<iostream>
using namespace std;
int main()
{
	string book;
	string auther= "robert lafore";
	int price=1000;
	
	cout<<"Enter Book Name  : ";
	getline(cin,book);
	cout<<"\n";
	
	cout<<"The Book Name Is :"<<book;
	cout<<"\nAuther Name Is : "<<auther;
	cout<<"\n Price Is : "<<price;
	
	}
*/



/*#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	string book;
	string auther;
	string price;
	 cout<<"Enter Book Name : ";
	 getline(cin,book);
	 cout<<"\n";
	 cout<<"Enter Auther Name : ";
	 getline(cin,auther);
	 cout<<"\n";
	 cout<<"Enter Price : ";
	 getline(cin,price);
	 cout<<"\n";
	 
	 
	 cout<<"Book Name is : "<<book;
	 cout<<"\nAuther Name is : " << auther;
	 cout<<"\nPrice Is : "<<price;	 
}
*/


/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string book;
	int auther=lafore;
	
	int price = 1000;
	
	cout<<"Enter book Name : ";
	getline(cin,book);
	cout<<"\n";
	
	cout<<" The Book Name Is : "<<book;
	cout<<"\nAuther Name Is : "<<auther;
	cout<<"\nPrice Is : "<<price;
	
	
}
*/




/*#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	cout<<"The maximun limit of int data type : "<<INT_MAX<<endl;
	cout<<"The minimun limit of int data type : "<<INT_MIN<<endl;
	cout<<"The maximun limit of Unsigned int data type : "<<UINT_MAX<<endl;
	return 0 ;
}
*/




/*#include <iostream>

using namespace std;
int main()
 {
    //PROGRAM TO FIND THAT ENTERED NUMBER IS PRIME NUMBER OR COMPOSITE NUMBER
 	
 	int n;
	cin>>n;
	bool flag=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"composite number ";
			flag=1; 
			 break;
		}
			}
 	
 	if(flag== 0){
 		cout<<"prime number ";
	 }
 		return 0;
}
*/




/*#include <iostream>

using namespace std;
int main()
 {
    //PROGRAM TO FIND THAT ENTERED NUMBER IS PRIME NUMBER OR COMPOSITE NUMBER
 	
 	int n;
	cin>>n;
	bool flag=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"composite number ";
			flag=1; 
			 break;
		}
			}
 	
 	if(flag== 0){
 		cout<<"prime number ";
	 }
 		return 0;
}
*/



/*#include <iostream>
using namespace std;

int main()
 {
 	      //take array input from the user nd display the sum 
 	int sum=0;
 	int arr[5][5];
 	for(int r=0;r<5;r++){
 		for(int c=0;c<5;c++){
 			cin>>arr[r][c];
		 }cout<<endl;
	 }
	 for(int r=0;r<5;r++){
	 	for(int c=0;c<5;c++){
	 	sum+=arr[r][c];	
		 }
	 }
 	cout<<"sum of the array is:"<<sum<<endl;
 	
	return 0;
}
*/



/*#include <iostream>
using namespace std;


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
using namespace std;

int main()
 {
 	int temp;
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 cout<<endl;
 	for(int i=0;i<n;i++){
 		for(int j=i+1;j<n;j++){
 			
 			if(arr[i]>arr[j]){
 				temp=arr[i];
 				arr[i]=arr[j];
 				arr[j]=temp;
			 }
		 }
	 }
	 for(int i=0;i<n;i++){
	 	cout<<arr[i];
	 	
	 	
	 }	
	return 0;
} */

/*int main(){
 	int n,temp;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int k=1;
	while(k<n)
	{
		for(int i=0;i<n-k;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;				
			}
		}k++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	} 
	return 0;
} */
 
 
 /*
 	int mx=-1999999;
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
 	for(int i=0;i<n;i++){
 		mx=max(mx,arr[i]);
 		cout<<mx<<endl;
	 }
 	return 0;	
 }
 
 */



/*#include <iostream>
using namespace std;  

                             //longest arithmatic subarrays;


int main()
 {
 int n;	
 	cin>>n;
 	int a[n];
 	for(int i=0;i>n;i++){
 		cin>>a[i];
	 }
 	int ans = 2;
 	int pd = a[1]-a[0];
 	int j=2;
 	int curr = 2;
 	while(j<n){
 		if(pd==a[j]-a[j-1]){
 			curr++;
		 }
		 else{
		 	pd=a[j]-a[j-1];
		 	curr=2;
		 }
	
		 ans=max(ans,curr);
		 j++;
	 }
	 cout<<ans<<endl;
 	
 	
 	
	return 0;
}
*/




/*#include <iostream>
using namespace std;
int main()
 {
 	
 	   //CHECK A GIVEN NUMBER IS PRIME OR NON-PRIME
 	int n;
 	cin>>n;
 	int i;
 	for(i=2;i<n;i++){
 		if(n%i==0){
 			cout<<"non prime\n";
 		break;
		 }
	 }
	 if (i==n){
	 	cout<<"prime num"<<endl;
	 }
	 return 0;
}
*/




/*#include <iostream>
using namespace std;


int main()
 {
 	
 	 int n;
 	 cin>>n;
 	 for( int i=1;i<=n;i++){
 	 	for( int j=1;j<=n;){
 	 		cout<<" ";
 	 		
		  }
	 {
		  	cout<<" * ";  
		  cout<<endl;
 	 	  }}
 	
 	
	return 0;
}

*/



/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
    bool a=false , b=false , c=true , d=false , e=false , f=true, output;
	output= !((!(a && b) || c || ! d || e ) && ! f); 
	cout<<"VALUE OF LOGIC CIRCUIT ="<<output;       
	return 0;
}
*/



/*#include <iostream>
using namespace std;

int main()
 {
 	
 	int x;
 	float y;
 	cin>>x;
 	if (x>5){
 		y=(x*x-9)/(x*x-5);
	 }
	 else if (x>1 && x<5){
	 	y=(x*x-9)/(x*x-1);
	 }
	 else if(x<1){
	 	y=-1;
	
	 }
	 cout<<"y="<<y;
	return 0;
}
*/



/*#include <iostream>
using namespace std;

int main() 
{
	int num[6];
	for( int i=0; i<6 ; i++){
		 cout<<" enter the num : ";
		 cin>>num[i];
	} 
	cout<<"the table of "<< num[i]<<endl;
	for( int j=1; j<=10;j++){
		
		cout<<num[i]<< " x  "<< j <<" = "<<num[i]*j<<endl;
		
	}
cout<<endl;
		return 0;
}
*/



/*nclude <iostream>

using namespace std;

/*write a program in c++ that asks the user input of three numbers nd display the largest number
int main()
 {
 	int value1, value2 , value3;
 	cout<<"enter the first number: ";
 	cin>>value1;
 	cout<<"enter the second number: ";
 	cin>>value2;
 	cout<<"enter the third number: ";
 	cin>>value3;
 	 
 	 if(value1>value2 && value1>value3){
 	 	cout<<"first number is greater";
	  }
 	else if(value2>value1 && value2>value3){
 		cout<<"second number is greater";
	 }
 	else
 	cout<<"third number is greater";
 	
 	
	return 0;
}

*/




/*#include <iostream>
using namespace std;
                       // print all prime no bet a and b;

int main() 
{
	for(int i=0 ; i<5 ; i ++){
		
		for( int j =5 ; j>i ; j --){
			
			cout<< j;
		}
		cout<<endl;
	}	
	return 0;
	}
*/	
	
	
	
	
	
	/*#include<iostream>
#include<iomanip>
using namespace std;
 int main ()
 {
 	int obt = 969;
 	int total = 1150;
 	
 	float per =(float) obt / total;
 	per = (float)per * 100;
 	cout<<"per = "<<setprecision(4)<<per;
 	return 0 ;
 }
 */
 
 
 
 /*#include <iostream>
using namespace std;

int main()
 {
 	/*write a c++ progrm that takes an integer value from the user at run tym and finds that value in the given array .if the 
 	value is found display message "number iis found" else display mesage "number is not foumd" 
		 
		 
		 int arr[10]={1,2,3,5,8,10,12,23,28,15};
		 int kash;
		 cout<<"enter a number: ";
		 cin>>kash;
		 bool found=false;
	for(int i=0;i<10;i++){
		if(kash==arr[i]){
			found=true;
	}
	}	 
	 if(found){
	 	cout<<"number is found :";
	 }else{
	 	cout<<"number is not found:";
	 } 	 
	return 0;
}*/



/*#include<iostream>
//#include<iomanip>
using namespace std;
int main()
{
	int classes = 6;
	int perstudent = 10;
	int total = classes * perstudent;
	
	cout << " Classes : "<< classes << endl;
	cout<< " Perstudent : "<< perstudent<< endl;
	cout << " Total : "<<total;
	return 0 ;
}*/


/*#include <iostream>

using namespace std;

/*write a program in c++ that asks the user input of three numbers nd display the largest number
int main()
 {
 	int value1, value2 , value3;
 	cout<<"enter the first number: ";
 	cin>>value1;
 	cout<<"enter the second number: ";
 	cin>>value2;
 	cout<<"enter the third number: ";
 	cin>>value3;
 	 
 	 if(value1>value2 && value1>value3){
 	 	cout<<"first number is greater";
	  }
 	else if(value2>value1 && value2>value3){
 		cout<<"second number is greater";
	 }
 	else
 	cout<<"third number is greater";
 	
 	
	return 0;
}*/




/*#include <iostream>
using namespace std;


int main()
 {
 	float height , base ,area;
 	cout<<"enter the height of the triangle: ";
 	cin>>height;
 	cout<<"enter the base of the triangle: ";
 	cin>>base;
 	area =(base*height)/2;
 	cout<<"area of the triangle= "<<area;
 	
 	
 	
 	
 	
	return 0;
}*/




/*#include <iostream>
using namespace std;
int main()
 {
 	 float capacity,mileage,distance;
 	 cout<<"Input Fuel Tank Capacity(Gallons)=";
 	 cin>>capacity;
 	 cout<<"Input Mileage(Miles Per  Gallons)=";
 	 cin>>mileage;
 	 distance=mileage*capacity;
 	 cout<<"\n Total Distance Without Refulling(Miles)=";
 	 cout<<distance;
	return 0;
}
*/


/*#include<iostream>
using namespace std;
int main()
{
	char word;
	cout<<" letter : "<<word;
	cin>>word;
	cout<<word;
	return 0 ;
}
*/



/*#include <iostream>
using namespace std;

int main()
 {
 	      //CONVERSION OF RUPEES INTO DOLLARS
 	float pkr;
 	cout<<"Input Amount in Rupees:=";
 	cin>>pkr;
 	cout<<"Amount In Dollar:";
	 cout<<pkr/230<<"$";
	   	return 0;
}
*/



/*#include<iostream>
using namespace std;
int main()
{
	string line;
	cout<<" Enter The Line : ";
	cin>>line;
	cout<<"The First Word is :"<<line;
	return 0;
}
*/




/*#include<iostream>
using namespace std;
int main()
{
	string line;
	cout<<" Enter The Line : ";
	cin>>line;
	cout<<"The First Word is :"<<line;
	return 0;
}
*/




/*#include <iostream>
using namespace std;
int main()
 {
 		float bmi,h,w;
 		cin>>h;
 		cin>>w;
 		bmi=w/(h*h);
 		cout<<"input weight(kg)";
 		cout<<"input height(m)";
 		cout<<"/n body mass indes(bmi):"<<bmi;
 		
 		
	 
	  	return 0;
}
*/




/*#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	float m1=7;
	float m2=8;
	float d=5;
	float k=6.67*pow(10,-11) ;
	float f=k*m1*m2/d*d;
	cout<<f;
	return 0;
} */




#/*include<iostream>
#include<iomanip>
using namespace std;
int main()
       //SWAP THE VALUES
{
	int x = 5;
	int y = 10;
	cout<<" before swapping ";
	cout<<"\n X = "<<x << " : Y = "<<y;
	
	cout<<"\n   after swapping ";
	int temp= x;
	x=y;
	y=temp;
	cout<<"\n X = "<<x<<" Y = "<<y;
	return 0 ;
	
} */





/*#include<iostream>
#include<iomanip>
 using namespace std;
 int main()
 {
 	string s1= "fundementals";
 	string s2= " progaming";
 	string s3= s1+s2;
 	cout<<s3;
 	return 0 ;
 }
 */
 
 
 
 /*#include<iostream>
#include<iomanip>
 using namespace std;
 int main()
 {
 	string s1= "fundementals";
 	string s2= " progaming";
 	string s3= s1+s2;
 	s3+=" \nEnd of program ";
 	
 	cout<<s3;
 	return 0 ;
 }*/
 
 
 
 /*#include <iostream>
using namespace std;
 
           //FIND THE AREA OF THE CIRCLE
int main() 
 {
 	
 	float  rad ;  
 	const float PI= 3.147 ;
	 
	 cout<<"  enter the radius of circle : ";
	 cin>> rad ;
	 int area = PI * rad *rad ;
	  
	  cout<<"  area of the circle =" ;
	 cout<< area; 
 	
 	
	return 0;
}*/



/*#include <iostream>
using namespace std;

               //FIND THE AREA OF THE TRIANGLE
int main()
 {
 	int base,height;
 	float area;
 	cout<<"enter the base of the triangle: ";
 	cin>>base;
 	cout<<"enter the height of the triangle : ";
 	cin>>height;
 	area=(base * height)/2;
 	cout<<"area of the triangle= "<<area;
	return 0;
}
*/



/*#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
	   //PRINT THR ARRAY
	int num[6];
	
	for(int i=0; i<7; i++ ){
		cout<<" enter any number :";
		cin>>num[i];
		cout<<endl;
		
	}
	for(int i=0 ; i<7; i++){
		
		cout<<" u have entered this num; : ";
		cout<<num[i]<<endl;
		
		
	}
	getch;
		return 0;
}*/




*#include <iostream>
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
{ //write a c++ program that asks the user to input the 10 num in array nd display them in increasing order
	int num[10];
	int kash , temp;
	for(int i=0;i<10 ; i++){
		cout<<" enter the num: ";
		cin>>num[i];
	}
	for( int i=0;i<10 ; i++){
		
		for(int j=i+1;j<10;j++){
		if(num[i]> num[j]){
			
			temp=num[i];
			num[i]=num[j];
			num[j]=kash;
		} 	
	}
	}
	cout<<"the increasing order of numbers: "<<endl;
	for(int i=0;i<10; i++){
		cout<<num[i];
		cout<<endl;
	}
	return 0;
}	
*/




/*#include <iostream>
using namespace std;


int main()
 {
 	float avg=0;
 	int sum=0;	
 	int num[3];
 	for(int k=0; k<3; k++){
 		cout<<" enter the number :";
 		cin>>num[k];
	 }
	 for(int k=0; k<3; k++){
	 	sum=+num[3]; 
	 	
	 	
	 }
 	avg=sum/num[3];
 	cout<<" average of  the numbers are :  "<<avg;
	return 0;
}*/





/*#include <iostream>
#include <conio.h>
   using namespace std;
int main()

 {                 
                    //CHECK THAT ENTERED NUMBER IS EVEN OR ODD 
 	int num;
 	
 	cout<<" enter the any number : ";
 	
 	cin>>num ;
 	
 	if ( num%2!=0)
 	{ 
 	cout<<"  number is 0dd ";
	 }
 	else 
 	cout<<" number is even";
 	
 	getch();
	return 0;
}*/




/*#include <iostream>
using namespace std;

int main()
{
	//write a progran in c++ that asks the user to input the 2 num and then exchange their values;

 	int a ,b,temp; //declaring the variables  
 	cout<<" enter 2 numbers : ";
 	cin>> a >> b;      //taking input of the 2 numbers from the user
 	 
 	 temp=a;  // num1=a is stored in the temp
 	 a=b;     //num2=b is stored in num1 
 	 b=temp;  // the value of temp that is of a(num1) is stored in num2(b)
 	 
 	 
 	 //diplay the swipped values
 	 cout<<" after swipping the values are : "<<endl;
 	 cout<<" first number = "<<a<<endl;
 	 cout<<"second number = "<<b<<endl;
 	
	return 0;
} */




/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	int input = 0;
	int sum = 0;
	cin>>num;
	sum = num;
	input = ++input;
	cin>>num;
	sum = sum + num;
	input = ++input;
	cin>>num;
	sum = sum +num;
	input= ++input;
	cin>>num;
	sum= sum+num;
	input= ++input;
	cout<<"Total Sum is :  "<<sum;
	cout<<"\n Total Input :   "<<input;
	return 0;
	
}*/






/*#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	
 /*	int num;
 	cout<<"enter the number:";
 	cin>>num;
 	if(num>0)
 	cout<<"num is +ve.";*/
 	
 	
 	
 	/*int num;
 	cout<<"enter the number:";
 	cin>>num;
 	if(num%5==0){
 		num=num+1;
 		cout<<num;
	 }*/
	 
 	/*write a c++ program that if num is even make it odd else double it:2
 	int num;
 	cout<<"enter the number:";
 	cin>>num;
 	if(num%2==0){
 		num=num+1;
 		cout<<num;
 		
	 }
	 else{
	 	num=num*2;
	 	cout<<num;
	 }   */
 	
 	
 	//compare three num and display ehich number is greater:
 	
 /*	int num1,num2,num3;
 	cout<<"enter the 1st number:";
 	cin>>num1;
 	cout<<"enter the 2nd number:";
 	cin>>num2;
 	cout<<"enter the 3rd num:";
 	cin>>num3;
 	
 	if(num1>num2 && num1>num3){
 		cout<<"1st number is greater";
	 }
	 else if(num2>num1 && num2>num3){
	 	cout<<"2nd number is greater!";
	 }
	 else
	 cout<<"third number is greater!";  */
	 
	 
	 //give remarks to the student according to mrks he got in sesssional out of 5:
	 /*int marks;
	 cout<<"enter the marks:";
	 cin>>marks;
	 switch(marks)
	 case 0:
	 	{
		 cout<<"too bad!";
	 	break;
	case 1:
	 	cout<<"not satisfactory!";
		break;
	case 2:
		cout<<"slightly satisfactory!";
		break;
	case 3:
		cout<<"satisfactory!";
		break;
	case 4:
		cout<<"good!";
		break;
	case 5:
		cout<<"excellent!"; 	
		break;
	 
}  */
	 
	/* int FE,BEE,CP,IICT,AC;
	 int tot_mrks,obt_mrks;
	 float per;
	 cout<<"enter marks obt in FE:";  cin>>FE;
	 cout<<"enter mrks obt in BEE:";  cin>>BEE;
	 cout<<"enter mrks obt in CP:";   cin>>CP;
	 cout<<"enter marks obt in IICT:"; cin>>IICT;
	 cout<<"enter mrks obt in AC:";    cin>>AC;
	 
	 obt_mrks= FE+BEE+CP+IICT+AC;
	 cout<<"obtained marks="<<obt_mrks<<endl;
	 per=(obt_mrks/500.0)*100;
	 cout<<"percentage is="<<per<<"%"<<endl;
	 
	 if(per>=90){
	cout<<"Grade A+!";
	 }
	 else if(per>=85 && per<90)
	 cout<<"Grade A!";
	 else if(per>=80 && per<85)
	 cout<<"Grade B+";
	 else if (per>=75 && per<80)
	 cout<<"grade B";
	 else if (per>=70 && per<75)
	 cout<<"grade C+";
	 else if (per>=65 && per<70)
	 cout<<"grade C!";
	 else if (per>=60 && per<65)
	 cout<<"grade D+";
	 else if(per>=55 && per<60)
	 cout<<"grade D!";
	 else if(per>=50 && per<55)
	 cout<<"grade U!";
	 else
	 cout<<"fail!";
	 cout<<endl;
	 cout<<"THANK YOUUUU SOOOOO MUCH !!!"; */
	 
	 
	 
	 
	 /*int dA=15,dB=20,TA,TB;
	 float speedA, speedB;
	 int const  PI=3.147;
	 cout<<"enter the time taken by mohsin:";
	 cin>>TA;
	 cout<<"enter the time taken by neteesh:";
	 cin>>TB;
	 speedA= (2*PI*(dA/2)/TA);
	 speedB=(2*PI*(dB/2)/TB);
	 if(speedA>speedB){
	 	cout<<"mohsin is running faster!";
	 }
	 else
	 cout<<"neteesh is running faster!";      */
	 //whether the traingle is acute , obtuse,right angle triangle:
/*	 int angle1,angle2,angle3;
	 cout<<"enter the three angles of triangle:"<<endl;
	 cout<<"angle1= ";
	 cin>>angle1;
	 cout<<"angle2= ";
	 cin>>angle2;
	 cout<<"angle3= ";
	 cin>>angle3;
	 if(angle1==90 || angle2==90 || angle3==90)
	 cout<<"this is a right angle triangle!";
	 else if( angle1<90 || angle2<90 || angle3<90)
	 cout<<"this is acute angle triangle!";
	 else
	 cout<<"thix is obtuse angle triangle!"; */
	 
	 
	 //whether entered character is vowel or consonant:
	 char ch;
	 cout<<"enter any character:";
	 //ch= getche(); for taking  input of any  character:
/*
	 cin>>ch;
	 switch(ch)
	 {
	case 'a':
	case 'e':
	case'i':
	case'o':
	case'u':
	cout<<endl<<"entered character is vowel!";
	break;
	default:
	cout<<endl<<"entered character is consonant!";
	break;		
}
getche;
	return 0;
}

*/

/*#include <iostream>
#include<conio.h>
using namespace std;


int main()
 {
 	//program stops when user inter num out of range nd dispaly the sum of entered numbers:
 /*	int sum=0;
 	int num;
 	cout<<"enter the number:";
 	cin>>num;
 	while(num>=100 && num<=200){
 		cout<<"enter the number in the range: ";
 		sum+=num;
 		cin>>num;
 		
	 }
	 cout<<"sum of the entered numbers is= "<<sum;  */
	 
	 
	 //the progrm stops when user enter the variable "Q" and displays the number of characters entered:
	 
/*	 char ch;
	 int charcount=0;
	 do{
	 	cout<<"enter the variable except q : ";
	// 	ch =getche(); taking input of variable:
	 	cin>>ch;
	 	charcount++;
	 	cout<<endl;
	 }
	 while(ch!='q'&& ch!='Q');
 	cout<<"number of entered characters:"<<charcount;    */
 	
 	//wnt pattern like this 
 /*	1
 	1 2
 	1 2 3
 	1 2 3 4 
 	1 2 3 4 5
 	for(int i=1;i<=5;i++){
 		for(int j=1;j<=i;j++){
 			cout<<j<<" ";
		 }
		 cout<<endl;
	 }  */
 	
 	
 	//program which displys odd multiples of 5 in the range of 1 nd 100 nd sum nd average:
 	/*int num;
 	int count=0;
 	int sum=0;
 	int avg;
 	for(int i=1;i<=100;i++){
 		if(i%5==0 && i%2!=0){
 			cout<<i<<" ";
 			sum+=i;
 			count++;
		 }
	 }
	 avg=sum/count;
	 cout<<endl;
	 cout<<"number of odd multiples of 5 :  "<<count<<endl;
 	cout<<"the sum of odd multiples of five = "<<sum<<endl;
 	cout<<"average is= "<<avg;  */
 	
 	
 	
 	
 /*	int sum=0;
 	for(int i=1;i<=60;i++){
 	if(i%3==0 && i%2!=0){
 		cout<<i<<" ";
 		sum=sum+i;
	 }	
	 }
	 cout<<endl<<"sum of first ten odd multiples of three = "<<sum;
 	return 0;
}

*/



/*#include <iostream>
#include<conio.h>
using namespace std;


int main()
 {
 	//program stops when user inter num out of range nd dispaly the sum of entered numbers:
 /*	int sum=0;
 	int num;
 	cout<<"enter the number:";
 	cin>>num;
 	while(num>=100 && num<=200){
 		cout<<"enter the number in the range: ";
 		sum+=num;
 		cin>>num;
 		
	 }
	 cout<<"sum of the entered numbers is= "<<sum;  */
	 
	 
	 //the progrm stops when user enter the variable "Q" and displays the number of characters entered:
	 
/*	 char ch;
	 int charcount=0;
	 do{
	 	cout<<"enter the variable except q : ";
	// 	ch =getche(); taking input of variable:
	 	cin>>ch;
	 	charcount++;
	 	cout<<endl;
	 }
	 while(ch!='q'&& ch!='Q');
 	cout<<"number of entered characters:"<<charcount;    */
 	
 	//wnt pattern like this 
 /*	1
 	1 2
 	1 2 3
 	1 2 3 4 
 	1 2 3 4 5
 	for(int i=1;i<=5;i++){
 		for(int j=1;j<=i;j++){
 			cout<<j<<" ";
		 }
		 cout<<endl;
	 }  */
 	
 	
 	//program which displys odd multiples of 5 in the range of 1 nd 100 nd sum nd average:
 	/*int num;
 	int count=0;
 	int sum=0;
 	int avg;
 	for(int i=1;i<=100;i++){
 		if(i%5==0 && i%2!=0){
 			cout<<i<<" ";
 			sum+=i;
 			count++;
		 }
	 }
	 avg=sum/count;
	 cout<<endl;
	 cout<<"number of odd multiples of 5 :  "<<count<<endl;
 	cout<<"the sum of odd multiples of five = "<<sum<<endl;
 	cout<<"average is= "<<avg;  */
 	
 	
 	
 	//peogram which displays sum of 1st ten odc multiples og three:
/* 	int sum=0;
 	for(int i=1;i<=60;i++){
 	if(i%3==0 && i%2!=0){
 		cout<<i<<" ";
 		sum=sum+i;
	 }	
	 }
	 cout<<endl<<"sum of first ten odd multiples of three = "<<sum;  	
	return 0;
}
*/



/*#include <iostream>

using namespace std;
int main()
 {
   WRITE A PROGRAM THAT TAKES MARKS FROM THE USER AND ND GIVE COMPLEMENTS ACCORDING TO REZULT
 	int marks;
 	cout<<"Enter the sessional marks of students: ";
 	cin>>marks;
 	
 	switch(marks)
	 {
	 	case 0;
	 	cout<<"poor rexlt: ";
	 	break;
	 	case 1;
	 	cout<<"very bad:";
	 	break;
	 	case 2;
	 	cout<<"Bad";
	 	break;
	 	case 3;
	 	cout<<"satisfactory Rezult";
	 	break;
	 	case 4;
	 	cout<<"good rezult";
	 	break;
	 	case 5;
	 	cout<<"excellent rezult:";
	 	break;	
	 }
	return 0;
}
*/



/*#include <iostream>
#include<conio.h>
using namespace std;
     //create a function that recieves two integers numbers nd returns the maximum number out of them::::
 	/*int max(int ,int);
 	int max(int num1,int num2)
	 {
 		if(num1>=num2)
 		return num1;
 		else 
 		return num2;
	 }
	 int main()	 
 {
 	int n1,n2;
	 cout<<"enter the number 1: ";
	 cin>>n1;
	 cout<<"enter the number2: ";
	 cin>>n2;
	 cout<<"maximum number is= "<<max(n1,n2); */
	 
 /*void max(int ,int);
	 void max(int num1,int num2){
	 	if(num1>=num2)
	 	int max=num1;
	 	else 
	 	num2;
	 }
	 int main()
	 {
	 	int n1,n2;
	 	cout<<"enter the number 1: ";
	 	cin>>n1;
	 	cout<<"enter the number 2:";
	 	cin>>n2;
	 	cout<<max(n1,n2);  return 0;
	 }  */
  	 	
		/*void swap(int , int);
	void swap(int& num1,int& num2){
	 		if(num1>=num2){
	 			int temp=num1;
	 			num1=num2;
	 			num2=temp;
			 }
		 }
		 int main()
		 {
		 	int n1,n2;
		 	cout<<"enter the number 1: ";
		 	cin>>n1;
			 cout<<"enter the number 2: ";
		 	cin>>n2;
		 	cout<<"after swapping variables are:"<<endl;
			 cout<<"n1="<<n1<<endl<<"n2= "<<n2; 	
	 	/*/
/*	 	int swap(int , int);
	 	int swap(int num1,int num2){
	 		int temp=num1;
	 		num1=num2;
	 		num2=temp;
	 		return num1,num2;
		 }
		 int main(){
		 	int n1,n2;
		 	cout<<"enter 2 nums:"<<endl;
		 	cin>>n1;cout<<endl;
		 	cin>>n2;cout<<endl;
		 	cout<<"after swapping:"<<endl;
		 	cout<<"n1="<<n1<<endl<<"n2= "<<n2;
	 	
	 	
*/    
    /*   float cal(float,float,char);
       float cal(float num1,float num2,char op){
       	float ans;
       	switch(op){
       		case'+':
       			ans=num1+num2;
       			break;
       		case'-':
			   ans=num1-num2;
			   break;
			case'*':
			ans=num1*num2;
			break;
			case'/':
			ans=num1/num2;
			break;   	
       			
		   }
		   return ans;
	   }
	   int main(){
	   	
	   	int n1,n2;
	   	char pr;
	   	cout<<"enter the number1 : ";cin>>n1;
	   	cout<<"enter the number2 : ";cin>>n2;
	   	cout<<"enter any operator(+,-,*,/) : ";pr=getche();
	   	cout<<"the rezlt is= "<<cal(n1,n2,pr); 	
	return 0;

}*/
    
   /* int max(int[]);
    int min(int[]);
    
    int max(int arr[]){
    	int maxitem=arr[0];
    	for(int i=0;i<10;i++){
    		if(arr[i]>maxitem){
    			maxitem=arr[i];
			}
		}return maxitem;
	}
    
    int min(int arr[]){
    	int minitem=arr[0];
    	for(int i=0;i<10;i++){
    		if(arr[i]<minitem){
    			minitem=arr[i];
			}
		}
		return minitem;
	}
	int main(){
	
     int array1[10]={2,4,6,8,3,5,7,11,4,98};
     int array2[10]={88,23,4,67,98,61,11,32,33,43};
     cout<<"maximum item in array 1 = "<<max(array1)<<endl;
     cout<<"minimum item in array 1 = " <<min(array1)<<endl;
     cout<<"maximum item in array 2 = "<<max(array2)<<endl;
     cout<<"minimum item in array 2 = "<<min(array2)<<endl;
     return 0;
 }
 */
 
 
 
 
 /*#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	
 /*	int num;
 	cout<<"enter the number:";
 	cin>>num;
 	if(num>0)
 	cout<<"num is +ve.";*/
 	
 	
 	
 	/*int num;
 	cout<<"enter the number:";
 	cin>>num;
 	if(num%5==0){
 		num=num+1;
 		cout<<num;
	 }*/
	 
 	/*write a c++ program that if num is even make it odd else double it:2
 	int num;
 	cout<<"enter the number:";
 	cin>>num;
 	if(num%2==0){
 		num=num+1;
 		cout<<num;
 		
	 }
	 else{
	 	num=num*2;
	 	cout<<num;
	 }   */
 	
 	
 	//compare three num and display ehich number is greater:
 	
 /*	int num1,num2,num3;
 	cout<<"enter the 1st number:";
 	cin>>num1;
 	cout<<"enter the 2nd number:";
 	cin>>num2;
 	cout<<"enter the 3rd num:";
 	cin>>num3;
 	
 	if(num1>num2 && num1>num3){
 		cout<<"1st number is greater";
	 }
	 else if(num2>num1 && num2>num3){
	 	cout<<"2nd number is greater!";
	 }
	 else
	 cout<<"third number is greater!";  */
	 
	 
	 //give remarks to the student according to mrks he got in sesssional out of 5:
	 /*int marks;
	 cout<<"enter the marks:";
	 cin>>marks;
	 switch(marks)
	 case 0:
	 	{
		 cout<<"too bad!";
	 	break;
	case 1:
	 	cout<<"not satisfactory!";
		break;
	case 2:
		cout<<"slightly satisfactory!";
		break;
	case 3:
		cout<<"satisfactory!";
		break;
	case 4:
		cout<<"good!";
		break;
	case 5:
		cout<<"excellent!"; 	
		break;
	 
}  */

/*	 
	 int FE,BEE,CP,IICT,AC;
	 int tot_mrks,obt_mrks;
	 float per;
	 cout<<"enter marks obt in FE:";  cin>>FE;
	 cout<<"enter mrks obt in BEE:";  cin>>BEE;
	 cout<<"enter mrks obt in CP:";   cin>>CP;
	 cout<<"enter marks obt in IICT:"; cin>>IICT;
	 cout<<"enter mrks obt in AC:";    cin>>AC;
	 
	 obt_mrks= FE+BEE+CP+IICT+AC;
	 cout<<"obtained marks="<<obt_mrks<<endl;
	 per=(obt_mrks/500.0)*100;
	 cout<<"percentage is="<<per<<"%"<<endl;
	 
	 if(per>=90){
	cout<<"Grade A+!";
	 }
	 else if(per>=85 && per<90)
	 cout<<"Grade A!";
	 else if(per>=80 && per<85)
	 cout<<"Grade B+";
	 else if (per>=75 && per<80)
	 cout<<"grade B";
	 else if (per>=70 && per<75)
	 cout<<"grade C+";
	 else if (per>=65 && per<70)
	 cout<<"grade C!";
	 else if (per>=60 && per<65)
	 cout<<"grade D+";
	 else if(per>=55 && per<60)
	 cout<<"grade D!";
	 else if(per>=50 && per<55)
	 cout<<"grade U!";
	 else
	 cout<<"fail!";
	 
	 cout<<"THANK YOUUUU SOOOOO MUCH !!!";
	return 0;
}
*/


/*#include <iostream>

using namespace std;
int main()
 {
 	//WRITE A PROGRAM TO PRINT THE TABLE OF 9/*
 	int start =90;
 	int term;
 	int a=9;
 	for(int i=0;i<10;i++){
 		
 		cout<<start<<" ";
 		start=start-a;
 		
	 }
	return 0;
}
*/



/*#include <iostream>
using namespace std;


//asks the userv to provide 2 numbrs nd swapps thier values without using 3rd variable;
int main()
 {
 	int num1=54;
 	int num2=45;
 	cout<<"1st number:"<<num1;
 	 
 	cout<<endl;
 	cout<<"2nd number:"<<num2;
 	
 	cout<<endl;
 	num1=num1+num2;
 	num2=num1-num2;
 	num1=num1-num2;
 	cout<<"       after swapping:"<<endl;
 	
 	cout<<"num1= "<<num1<<endl;
 	cout<<"num2="<<num2<<endl;
 	return 0;
}
*/


/*#include <iostream>
using namespace std;
int main() 
{
	//PROGRAM TO FIND THE AVERAGE OF THE NUMBER ENTERED BY THE USER
	
	int num[5];          // size of arrays
	int avg;
	int sum=0;
	for( int k=0; k<=5 ; k++){
		cout<<" enter num : ";
		cin>>num[k];
		cout<<endl;
		
		sum=sum+num[k];
	}
	avg= sum/num[5];
	cout<<" average of entered numbers is : "<<avg;
		return 0;
}
*/
