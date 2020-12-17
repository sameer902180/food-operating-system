/*name:sameer zade
mail:samzade786@gmail.com */


#include<iostream>
using namespace std;
int main()
{
    int num;
    char name[30];
    int item;
    int response;
    char y,n;

    cout<<"             Welcome to cafe aroma          ";
    cout<<"\n 1.order\n 2.serve\n 3.display\n 4.exit the program\n";
    cin>>num;
    switch(num)
    {
    case 1:
        cout<<"please enter your name: ";
        cin>>name;
        cout<<".....................................MENU..........................................\n";
        cout<<"item code#..........description...............size....................price(tk)\n";
        cout<<"[11]................burger..................200/300gm.................130/200\n";
        cout<<"[12]................chicken pizza...........12/14/16inch..............750/975/1250\n";
        cout<<"[13]................fried chicken...........1/4/10 pcs................85/320/790\n";
        cout<<"[14]................grilled chicken.........quarter/half/full.........70/140/250\n";
        cout<<"[15]................noodles.................half/full.................130/250\n";
        cout<<"[16]................pasta...................half/full.................120/240\n";
        cout<<"[17]................oreo shake..............250mg.....................100\n";
        cout<<"[19]................cappuccino..............250mg.....................70\n";
        cout<<"[20]................coke....................250/500mg.................20/30\n";
        cout<<"how many items you want to order?";
        cin>>num;
        cout<<"enter chosen item code\n";
        cin>>item;
{
        if (item==11)
           {
            cout<<"200mg OF BURGER or 300mg OF BURGER?\n";
            cout<<"enter 1 for 200mg OF BURGER or 2 for 300mg OF BURGER\n";
            cin>>response;
            if (response==1)
            {
                cout<<"200mg OF BURGER";
            }
            else
            {
                cout<<"300mg OF BURGER";
            }
           }
    else if(item==12)
        {
            cout<<"12 inch,14 inch or 16 inch OF CHICKEN PIZZA?\n";
            cout<<"enter 1 for 12 inch,2 for 14 inch,3 for 16 inch OF CHICKEN PIZZA\n";
            cin>>response;
            if (response==1)
            {
                cout<<"12 inch OF CHICKEN PIZZA";
            }
            else if(response==2)
            {
                cout<<"14 inch OF CHICKEN PIZZA";
            }
            else if (response==3)
            {
                cout<<"16 inch OF CHICKEN PIZZA";
            }
        }
        else if(item==13)
        {
            cout<<"1 PCS OF FRIED CHICKEN,2 PCS OF FRIED CHICKEN,3 PCS OF FRIED CHICKEN?\n";
            cout<<"enter 1 for 1 pcs,2 for 2 pcs,3 for 3 pcs OF FRIED CHICKEN\n";
            cin>>response;
            if(response==1)
            {
                cout<<"1 PCS OF FRIED CHICKEN";
            }
            else if(response==2)
            {
                cout<<"2 PCS OF FRIED CHICKEN";
            }
            else if(response==3)
            {
                cout<<"3 PCS OF FRIED CHICKEN";
            }
        }
        else if(item==14)
        {
            cout<<"quarter SIZE,half SIZE or full SIZE OF GRILLED CHICKEN?\n";
            cout<<"enter 1 for quarter SIZE OF GRILLED CHICKEN,2 for half SIZE OF GRILLED CHICKEN or 3 for full SIZE OF GRILLED CHICKEN\n ";
            cin>>response;
            if(response==1)
            {
                cout<<"QUARTER SIZE OF GRILLED CHICKEN";
            }
            else if(response==2)
            {
                cout<<"HALF SIZE OF GRILLED CHICKEN";
            }
            else if(response==3)
            {
                cout<<"FULL SIZE OF GRILLED CHICKEN";
            }
        }
        else if(item==15)
        {
            cout<<"half noodles or full noodles\n";
            cout<<"enter 1 for half noodles or 2 for full noodles\n";
            cin>>response;
            if(response==1)
            {
                cout<<"HALF NOODLES";
            }
            else if(response==2)
            {
                cout<<"FULL NOODLES";
            }
        }
        else if(item==16)
        {
            cout<<"half pasta or full pasta\n";
            cout<<"enter 1 for half pasta or 2 for full pasta\n";
            cin>>response;
            if(response==1)
            {
                cout<<"HALF PASTA";
            }
            else if(response==2)
            {
                cout<<"FULL PASTA";
            }
        }
        else if(item==17)
        {
            cout<<"250mg OF OREO SHAKE";
        }
        else if(item==18)
        {
            cout<<"250mg OF COLD COFFEE";
        }
        else if(item==19)
        {
            cout<<"250mg of CAPPUSSINO";
        }
        else if(item==20)
        {
            cout<<"250mg OF COKE or 500mg OF COKE\n";
            cout<<"enter 1 for 250mg OF COKE or 2 for OF COKE\n";
            cin>>response;
            if(response==1)
            {
                cout<<"250mg OF COKE";
            }
            else if(response==2)
            {
                cout<<"500mg OF COKE";
            }
        }
    }
    cout<<"\nplease enter the quantity: ";
    cin>>num;
    cout<<"\nDo you want to order anything else?(y/n)";
    cin>>response;
        if(response==y)
        {
          main();
        }
        else
        {
            cout<<"number of food order is "<<num;
            cout<<"\nthank you "<<name;
            cout<<" for your order,your bill is ";
            cout<<"\nplease wait while we prepare a food.";
        }
}

}
