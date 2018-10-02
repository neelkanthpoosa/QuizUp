#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include<sstream>

using namespace std;
class head;
int f;
class user
{
	string entries[5];
	string i;
	static int points,p;//TO MAKE POINTS BE IN SCOPE WHILE IN FUNCTION
	static int v; //to make the answers be in scope while using function,(v is ITERATOR)
	char name[20];
	char as,ch;
	string up;
	char answers[20];//depends on how many answers:TO STORE ANS
	void display()
	{ 
	    
		for(f=0;f<5;f++)
		{
		
		entries[f]=i;
		if(i==up)
		{
			system("cls");
		cout<<"Welcome to quizup\n";
		Sleep(3000);
		break;
}
			else
		{
		cout<<"\nIncorrect password,try again\n";
		i="";
		ip();
		}
}
if(f==0)
cout<<"You attempted to login for "<<f+1<<" time \n";
else
cout<<"You attempted to login for "<<f+1<<" times \n";

Sleep(2000);

}
	public:
		
		user()
		{
			up="1234";
		}
		
		void qs(string q,char a)  //func to pass question and answer
{
	istringstream f(q);
	string qs;
	while(getline(f,qs))
	{
		cout<<qs<<endl;
	}
	int i;
	
	
	 for(i=60;i>=1;i--)
	  {

          system("cls");
	               	   cout<<i<<"\n\n\n";
	               	   cout<<q;
	               	   cout<<"\n\nRESPONSE:";
	               	   if(kbhit())
	               	   {
	               	   	as=getch();
	               	   	cout<<as;
	               	   	
	               	   
	               	   	
	               	   if(as==a)
	               	   {
	               	   	
							  cout<<"\n\nRight answer.";
					
							  points+=10;
							  cout<<"\n\nPOINTS RECEIVED:"<<p;
							  
							  Sleep(2000);
	               	   }
	               	   
	               	   else
	               	   {
					
	               	   cout<<"\n\nWrong answer.";
	               	   Sleep(2000);
	               	   
	               }
	               
	            break;
	               }
	        Sleep(1000);
	}
	answers[v++]=as;
	
	              
	              	 


cout<<"\nYour score is "<<points;
Sleep(2000);


int quit;

cout<<endl<<"\nTo QUIT,enter ZERO(0) else ENTER ANY NUMBER:";
cin>>quit;


if(quit==0)
throw quit; 
else
{

}

}

int pts()
{
	return points;
}
		
		void details()
		{
			cout<<"Enter your name.\n\n\n";
			cin>>name;
			int l=strlen(name);
		
			while(l>15)
			{
				
				cout<<"\nMAX Limit is 15 letters!!!\n\nNO special characters allowed!!\n\n\n\nRe-enter:";
				cin>>name;
				l=strlen(name);
			}
			}
			
	
		
		void ip()  //to take the password after a wrong attempt
		{
			ch = _getch();
   while(ch != 13) //TILL ENTER IS HIT
   {
      i.push_back(ch);
      cout << '*';
      ch = _getch();
   }
		}
		
		
		void entry()
		{
			cout<<"To start the game,please enter the password:\n(NUMERICAL ONLY):\n";
			ch = _getch();
   while(ch != 13) //TILL ENTER IS HIT
   {
      i.push_back(ch);
      cout << "*";
      ch = _getch();
   }
			display();
	

		}
		
		
		int returnf() //returns the number of attempts the user tried to log in
		{
			return f;
		}
		friend class head;
	};
	
	
	
	
	
	
	
	
	
	
	class head //ADMIN 
	{
		int t;
		char ch1,ch2;
		string j;
		
		
		void h_display(user a)
		{
			
			if(j=="1998")
			{
			cout<<"\nAccess granted\n";
			cout<<"User:"<<a.name;
				for(t=0;t<f;t++)
		cout<<endl<<t+1<<" attempt:"<<a.entries[t]<<"\n\n\n";
		
		for(t=0;t<a.v;t++)
		cout<<endl<<"Answer attempted:"<<t+1<<"-"<<a.answers[t]<<endl;
		cout<<"TOTAL SCORE:"<<a.points<<endl;
		
		Sleep(30000);
	
		
		
	}
		
			
		}
	
		
		public:
			void h_entry(user a)
			{
				
				cout<<"Welcome Admin,PASSWORD required:\n";
	l:
						j="";
						ch1 = _getch();
   while(ch1 != 13){//Till enter is hit
      j.push_back(ch1);
      cout << '*';
      ch1 = _getch();
  }
				while(j!="1998")
			{
				cout<<"\nWARNING! RIGHT PASSWORD REQUIRED!\nRE-ENTER:";

j="";			
goto l;
			}
		
				h_display(a);
			}

		};
	
	

int user::p=10;
int user::points=0;
int user::v=0;


main()
 	{
		user a;//USER OBJ
		int a1;
		int i;
		int r=0;
		head h;	//ADMIN OBJ
	int j;
X:
while(1)
	{
	system("cls");
	cout<<"Wanna play?HIT 1!\n\n"<<endl<<"ADMIN,PLEASE ENTER 2.\n\n\n\n\n";
	cin>>j;

switch(j)
{
	case 1://USER PLAY
		{
			
			system("cls");
			a.details();
			system("cls");
			a.entry();
			if(a.returnf()>=5)
			goto X;
			
			int i;
			char as;
			system("cls");
			cout<<"QUIZUP INSTRUCTIONS\n\n";
			Sleep(200);
		
			cout<<"LET'S START";
			Sleep(200);
			cout<<"\n\n\n1-EACH QUESTION SHOULD BE ANSWERED IN 60 SECONDS";Sleep(500);
			cout<<"\n\n2-RIGHT ANSWER CARRIES 10 POINTS and\nWRONG ANSWER CARRIES 0 POINTS";
			Sleep(500);
			cout<<"\n\n3-DO NOT ENTER ANY KEY BY MULTIPLE TIMES WHILE GAME IS ON!";
			Sleep(500);
			cout<<"\n\n\nTO QUIT:PLEASE TYPE ZERO(0) AND HIT ENTER WHILE GAME IS ON!\n";
			Sleep(500);
            cout<<"\n\n\n                           KEEP YOUR CAPS-LOCK OFF\n                           ";
            Sleep(500);
            cout<<"                           \nGAME BEGINS IN 3..2..1";
          
	 	Sleep(15000);
//LEVEL 1
system("cls");
cout<<"THIS IS LEVEL-1\n\n";
cout<<"INORDER TO REACH LEVEL-2,MINIMUM OF 50 POINTS IS REQUIRED.\n\n";
Sleep(4000);
system("cls");	



try
{
	    
a.qs("The average time complexity of bubble sort is _________________.\n\nA.O(1)\nB.O(nlogn)\nC.O(logn)\nD.O(n^2)",'d');
a.qs("The line drawn from node N of tree T to its successor is called as _______.\n\nA.Root\nB.Edge\nC.Path\nD.Arrow",'b');
a.qs("Which of the operations cannot be performed on a stack?\n\nA.Push\nB.Pop\nC.Max\nD.IsFull",'c');
a.qs("In a AVL tree ,what should be the difference between left and right sub trees at any node?\n\nA.-1\nB.1\nC.0\nD.2",'b');
a.qs( "Sorting is not possible by using which of the following methods?\n\nA.Selection\nB.Exchange\nC.Deletion\nD.Insertion",'c');
a.qs("In a stack, if a user tries to remove an element from empty stack it is called _________?\n\nA.Underflow\nB.Empty condition\nC.Null condition\nD.Crash",'a');
a.qs("In tree construction which is the suitable efficient data structure?\n\nA.Linked List\nB.Stack\nC.Queue\nD.None of the above",'a');
a.qs("In the worst case, the number of comparisons needed to search a singly linked list of length n for a given element is?\n\nA.logn\nB.n^2\nC.1\nD.n",'d');
a.qs("In a binary tree a sequence of consecutive edges is called ________.\n\nA.Path\nB.Rotate\nC.2-Way\nD.Connecting lines",'a');
a.qs("Which of the following is not a self-balancing tree?\n\nA.AVL\nB.BST\nC.Heap\nD.Red-Black Tree",'b');
system("cls");
///CONDITION FOR LEVEL 2

if(a.pts()>=50)//if 50 points are earned
{
system("cls");
cout<<"Congratulations!\n\n\nYou're qualified for level-2.";
Sleep(3000);
a.qs("________ level is where the model becomes compatible executable code.\n\nA.Abstract\nB.Implementation\nC.Application\nD.All of the above",'b');
a.qs("To represent hierarchical relationship between elements, Which data structure is suitable?\n\nA.Priority queue\nB.Deque\nC.Graph\nD.Tree",'d');
a.qs("Which data structure is used in breadth first search of a graph to hold nodes?\n\nA.Stack\nB.Queue\nC.Array\nD.Tree",'b');
a.qs("______ is not the operation which can be performed on a queue.\n\nA.Traversal\nB.Insertion\nC.Deletion\nD.Retrival",'a');
a.qs("Which of the following data structure stores homogeneous data elements?\n\nA.List\nB.Stack\nC.Records\nD.Arrays",'c');
a.qs("The postorder travesrsal of a binary tree is DEBFCA.Find out preorder traversal.\n\nA.ABCDEF\nB.FEDACB\nC.ABDECF\nD.BDEFBA",'c');
a.qs("The extra element in the head of the list is called a _______.\n\nA.Sentinal\nB.Antinel\nC.List head\nD.List pointer",'a');
a.qs("Which of the following is a internal sorting?\n\nA.2-Way merge sort\nB.Merge sort\nC.Tape sort\nD.Tree sort",'d');
a.qs("What is the time complexity of Bellman-Ford single-source shortest path algorithm on a complete graph of n vertices?\n\nA.O(n^2)\nB.O(nlogn)\nC.O(n^3)\nD.O(logn)",'c');
a.qs("In RDBMS, what is the efficient data structure used in the internal storage representation?\n\nA.AVL Tree\nB.B+Tree\nC.Splay Tree\nD.Red-Black tree",'b');
}
}
catch(int)
{
	continue;
}
system("cls");
cout<<"Congratulations!\n\nYOUR SCORE IS "<<a.pts();
Sleep(5000);
if(a.pts()<=100)
cout<<"\n\nKEEP WORKING!IMPROVE!\n\n";
if(a.pts()>100&&a.pts()<=150)
cout<<"\n\nGOOD!";
if(a.pts()>150)
cout<<"\n\nEXCELLENT!";
			Sleep(3000);
		}


	   
		continue;

    case 2://ADMIN LOGIN
    	{
    		system("cls");
    		h.h_entry(a);
		
			break;
    	}
    	default:
		{
		cout<<"NOT A VALID ENTRY\n";
    	Sleep(1000);
    	continue;
    }
    }
    
	}
    
}
		

