#include<bits/stdc++.h>
using namespace std;
queue<string>b;
queue<int>b1;
queue<int>q;
void fun1()
{
	int a;
	int a1;
	cout<<"Enter the product you purchased : "<<endl;
	cin>>a;
	cout<<"Quantity of the Product :"<<endl;
	cin>>a1;
	q.push(a1);
	if(a==1)
	{
		b.push("Pencil");
		b1.push(5);
	}
	else if(a==2)
	{
		b.push("Eraser");
		b1.push(5);
	}
	else if(a==3)
	{
		b.push("Scale");
		b1.push(5);
	}
	else if(a==4)
	{
		b.push("Pen");
		b1.push(10);
	}
	else if(a==5)
	{
		b.push("Book");
		b1.push(30);
	}
}
void fun2()
{
	cout<<endl;
	cout<<"\t"<<"Thanks for purchasing our shop"<<endl;
	cout<<"##########################################"<<endl;
	cout<<"\t     "<<"Here it is your bill"<<endl;
	cout<<"List of Products"<<"\t"<<"RS"<<"\t"<<"Quantity"<<endl;
	int a = 0;
	int q1 = 0;
	while(!b.empty() && !b1.empty() && !q.empty())
	{
		cout<<b.front()<<"\t                "<<b1.front()<<"\t      "<<q.front()<<endl;
		a = a+(b1.front()*q.front());
		q1 = q1+q.front();
		b.pop();
		b1.pop();
		q.pop();
	}
	int g = (a*9)/100+1;
	cout<<endl;
	cout<<"Total without GST : "<<a<<endl;
	cout<<"Total Quantity : "<<q1<<endl;
	cout<<"SGST : "<<g<<endl;
	cout<<"CGST : "<<g<<endl;
	cout<<"Total (RS) : "<<a+g+g<<endl<<endl;
	cout<<"_____________ Have a Great day ____________"<<endl<<endl;
}
int main()
{
	cout<<"\t \t"<<"Welcome to Our Shop Sir"<<endl;
	cout<<"**********************************************************"<<endl;
	int i = 1;
	while(i<3)
	{
		cout<<"1.List the products"<<"\t"<<"2.Display the bill"<<"\t"<<"3.Exit"<<endl<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				{
					cout<<endl;
					cout<<"List of products we have in our shop"<<endl;
					cout<<"-----------------------------------"<<endl;
					cout<<"1.pencil"<<"\t"<<"RS-5"<<endl;
					cout<<"2.Eraser"<<"\t"<<"RS-5"<<endl;	
					cout<<"3.Scale "<<"\t"<<"RS-5"<<endl;
					cout<<"4.Pen   "<<"\t"<<"RS-10"<<endl;
					cout<<"5.Book  "<<"\t"<<"RS-30"<<endl;
					fun1();
					break;
				}
			case 2:
				{
					fun2();
					i = 3;
					break;
				}
			case 3:
				{
					break;
				}
			default:
				{
					cout<<"Not Valid"<<endl;
				}
		}
	}
	return 0;
}
