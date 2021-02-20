#include<bits/stdc++.h> 
#include<conio.h>
// #include <cstdlib>   //convert string argument to integer, float, etc...//
using namespace std;

struct book //structure for name of book
{
    char name[20];
    char author[20];
    char publication[20];
    int bookid;
    int year;
    int price;
    int status=1;
};

book books[1000];   //array of structure of book
int n=0;            //count of books

void add()
{
	char id[10],yr[4],name[50],ch,price[10];
    do
    {
        system("cls");
        cout<<"Adding a new book"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Enter Book Name: ";   
		fflush(stdin); 
		gets(books[n].name);
		fflush(stdin);
        cout<<"Enter book ID : ";
        gets(id);
        books[n].bookid=atoi(id);
        cout<<"Enter author name : ";
        gets(books[n].author);
        cout<<"Enter publication name : ";
        gets(books[n].publication);
        cout<<"Enter year of publication : ";
        cin>>yr;
        books[n].year=atoi(yr);
        cout<<"Enter price of Book : ";
        cin>>price;
        books[n].price=atoi(price);
        n++;
        cout<<"-------------------------------"<<endl;
        cout<<"Do you want to enter more books [y/n] : ";
        cin>>ch;
    }
    while (ch!='n');
}

void del()
{
	char ids[10],ch;
	int id,p=0,i,j,pos;
	do
	{
		system("cls");
		cout<<"Delete book by Book ID : "<<endl;
		cout<<"-------------------------------"<<endl;
		cout<< "In display function\n";
		cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20);
			if (books[i].status==1)
			cout<<"Available"<<endl;
			else cout<<"Issued"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
		}
		cout<<"Enter Book ID to delete book from list : ";
		fflush(stdin); 
		gets(ids);
		id=atoi(ids);
		for (i=0;i<n;i++)
		{
			if (books[i].bookid==id)
			{
				pos=i;
				p=1;
				for (i=pos;i<n-1;i++)
					books[i]=books[i+1];
				n--;			
			}
		}
		if (p==0)
		cout<<"Record not found !!!"<<endl;
		cout<<"Do you want to delete another book <y/n>";
		cin>>ch;
	}
	while (ch!='n');
}

void display()
{
	system("cls");
	cout<< "In display function\n";
	cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20);
		if (books[i].status==1)
		cout<<"Available"<<endl;
		else cout<<"Issued"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
	}
	cout<<"Press enter to goto MAIN MENU.....";	
	getch();		
}

void display_aval()
{
	system("cls");
	cout<< "In display function\n";
	cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i=0;i<n;i++)
	{
		if (books[i].status==1)
		{
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20)<<"Available"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
		}
	}
	cout<<"Press enter to goto MAIN MENU.....";	
	getch();		
}

void display_issue()
{
	system("cls");
	cout<< "In display function\n";
	cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i=0;i<n;i++)
	{
		if (books[i].status==0)
		{
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20)<<"Issued"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
		}
	}
	cout<<"Press enter to goto MAIN MENU.....";	
	getch();		
}

void search()
{
	char ids[10];
	int id,i;
	system("cls");
	cout<<"Enter book ID you want to search : ";
	fflush(stdin);
	gets(ids);
	id=atoi(ids);
	for(i=0;i<n;i++)
	{
		if (books[i].bookid==id)
		{
			cout<< "In display function\n";
			cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20);
			if (books[i].status==1)
			cout<<"Available"<<endl;
			else cout<<"Issued"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			break;
		}
	}
	if (i==n)
	cout<<"The book ID is not available !!!";
	cout<<"Press enter to go to MAIN MENU...";
	getch();
}

void update()
{
	char ids[10],year[4],price[10];
	int id,i,ch;
	system("cls");
	cout<<"Enter book ID to update : ";
	fflush(stdin);
	gets(ids);
	id=atoi(ids);
	for (i=0;i<n;i++)
	{
		if (books[i].bookid==id)
		{
			cout<< "In display function\n";
			cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20);
			if (books[i].status==1)
			cout<<"Available"<<endl;
			else cout<<"On rent, not available"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			cout<<"1. to update Book name : "<<endl;
			cout<<"2. to update Book ID : "<<endl;
			cout<<"3. to update Author name : "<<endl;
			cout<<"4: to update year of publication : "<<endl;
			cout<<"5. to update price : "<<endl;
			cout<<"Enter your choice : ";
			cin>>ch;
			fflush(stdin);
			switch (ch)
			{
				case1:
					{
						cout<<"Enter new name : ";
						gets(books[i].name);					
						break;
					}
				case 2:
					{
						cout<<"Enter new Book ID : ";
						gets(ids);
						id=atoi(ids);
						books[i].bookid=id;
						break;
					}
				case 3:
					{
						cout<<"Enter new Author name : ";
						gets(books[i].author);
						break;
					}
				case 4:
					{
						cout<<"Enter new year of publication : ";
						gets(year);
						books[i].year=atoi(year);
						break;
					}
				case 5:
					{
						cout<<"Enter new price of book : ";
						gets(price);
						books[i].price=atoi(price);
						break;
					}
				default: cout<<"Enter correct choice !!!";
			}
			cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20);
			if (books[i].status==1)
			cout<<"Available"<<endl;
			else cout<<"Issued"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			break;
		}
	}
	if (i==n)
	cout<<"Book ID not found !!!"<<endl;
	cout<<"Press enter to go to MAIN MENU... ";
	getch ();
}

void rent()
{
	system("cls");
	char ids[10];
	int id,i;
	cout<< "In display function\n";
	cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i=0;i<n;i++)
	{
		if (books[i].status==1)
		{
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20)<<"Available"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
		}
	}
	cout<<"\n\nEnter Book ID to issue : ";
	fflush(stdin);
	gets(ids);
	id=atoi(ids);
	for (i=0;i<n;i++)
	{
		if (books[i].bookid==id)
		{
			books[i].status=0;
			cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20)<<"Issued"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			break;
		}
	}
	if (i==n)
	cout<<"Book ID not found !!!"<<endl;
	cout<<"Press enter to go to MAIN MENU... ";
	getch ();
}

void return_book()
{
	system("cls");
	char ids[10];
	int id,i;
	cout<< "In display function\n";
	cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i=0;i<n;i++)
	{
		if (books[i].status==0)
		{
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20)<<"Issued"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
		}
	}
	cout<<"\n\nEnter Book ID to return : ";
	fflush(stdin);
	gets(ids);
	id=atoi(ids);
	for (i=0;i<n;i++)
	{
		if (books[i].bookid==id)
		{
			books[i].status=1;
			cout<<setw(10)<<"BookID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"Publication"<<setw(30)<<"Year of Publication"<<setw(20)<<"Price"<<setw(20)<<"""Status"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			cout<<setw(10)<<books[i].bookid<<setw(20)<<books[i].name<<setw(20)<<books[i].author<<setw(20)<<books[i].publication<<setw(30)<<books[i].year<<setw(20)<<books[i].price<<setw(20)<<"Available"<<endl;
			cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
			break;
		}
	}
	if (i==n)
	cout<<"Book ID not found !!!"<<endl;
	cout<<"Press enter to go to MAIN MENU... ";
	getch ();
}

int main()
{
	int choice;
    while (1)
    {
        system("cls");
        cout<<setw(20)<<"MAIN MENU"<<endl<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Choice from the options below : "<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"1. Add book"<<endl;
        cout<<"2. Delete book"<<endl;
        cout<<"3. Display all books"<<endl;
        cout<<"4. Display available books"<<endl;
        cout<<"5. Display issued books"<<endl;
        cout<<"6. Search a book"<<endl;
        cout<<"7. Update a book"<<endl;
        cout<<"8. Issue a book"<<endl;
        cout<<"9. Return an issued book"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Enter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:add();break;
            case 2:del();break;
            case 3:display();break;
            case 4:display_aval();break;
            case 5:display_issue();break;
            case 6:search();break;
            case 7:update();break;
            case 8:rent();break;
            case 9:return_book();break;
            case 10:exit(0);break;
            default:cout<<"Enter from a given choice !!!";
        }
    }
    return 0;
}
