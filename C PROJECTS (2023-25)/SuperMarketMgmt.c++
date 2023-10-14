#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int choose;
    int id;//To enter product id.
    char name;//To enter product name.
    int qty;//To enter Quantity.

    char pname;//used in product name.
    int pid;//used in product id.
    int bid;//used in buy id.
    int d;//date
    int m;//month
    int y;//year

    

    cout<<"###################################\n";
    cout<<"** SUPERMARKET MANAGEMENT SYSTEM **\n";
    cout<<"###################################\n";
    cout<<"[1].Diplay Product \n";
    cout<<"[2].Add Product \n";
    cout<<"[3].Delete Product \n";
    cout<<"[4].BuY Product \n";
    cout<<"[5].Exit \n";
    cout <<"Choose A Number What You Want :\n";
    cin>>choose;
    switch (choose)
    {
    case 1 :cout<<" Id      Product_Name       QuantitY       Date \n";
            cout<<"---------------------------------------------------\n";
            cout<<"101       Laptop              50        10/05/2022 \n";
            cout<<"102       Mobile              10        11/05/2022  \n";
            cout<<"103        Pen                60        12/05/2022  \n"; 
            cout<<"104       Pencil              45        13/05/2022  \n";
            cout<<"105       DirYMiLk            100       14/05/2022  \n";
        break;

    case 2:cout<<"** [2].Add Product **\n\n";
           cout<<"Enter Product Id : \n";
           cin>>id;
           cout<<"Enter Product Name :\n";
           cin>>name;
           cout<<"QuantitY : \n";
           cin>>qty;

           cout<<"Enter the Day :\n";
           cin>>d;
           cout<<"Enter the Month :\n";
           cin>>m;
           cout<<"Enter the Year :\n";
           cin>>y;
           cout<<"Date :"<<d<<"/"<<m<<"/"<<y;
           
           
        break;
    
    case 3:cout<<"** [3].Delete Product **\n\n";
           cout<<"Enter Poduct Name : \n";
           cin>>pname;
           cout<<"Enter Product Id :";
           cin>>pid;
           cout<<"Product Successfully Deleted...\n";
        break;

    case 4 :cout<<"** [4].BuY Product **\n\n";
            cout<<"Enter Product Id :\n";
            cin>>bid;
            cout<<"Product BuY Successfully.\n";
        break;

    case 5 :cout<<"You Are Now Exit...";
             exit(0);
    
    default:cout<<"Error..!!\n Enter Valid Input...";
        break;
    }
    

    return 0;
}