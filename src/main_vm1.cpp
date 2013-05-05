#include <iostream>
#include <conio.h>
#include "..\include\vendingmachine1.h"

using namespace std;

int main()
{
    VENDINGMACHINE1 vm1;
    int p;
    int v;
    int n;
    char ch;

      cout<<string(100, '\n');
      cout<< "                          Vending Machine-1" << endl;

      cout<< "                  MENU of Operations" << endl;
      cout<< "          0. create(int)" << endl;
      cout<< "          1. coin(int)" << endl;
      cout<< "          2. sugar()" << endl;
      cout<< "          3. tea()" << endl;
      cout<< "          4. chocolate()" << endl;
      cout<< "          5. insert_cups(int)" << endl;
      cout<< "          6. set_price(int)" << endl;
      cout<< "          7. cancel()" << endl;
      cout<< "          q. Quit the demo program" << endl;


      cout<< "  Please make a note of these operations" << endl;


      cout<< "           Vending Machine-1 Execution" << endl;
      ch='1';
      while (ch !='q') {
	cout<< "  Select Operation: "<<endl;
        cout<<"0-create,1-coin,2-sugar,3-tea,4-chocolate,5-insert_cups,6-set_price,7-cancel"<<endl;
        ch=getch();

        switch (ch) {
	    case '0':   //create
			cout<<"  Operation:  create(int p)"<<endl;
			cout<<"  Enter value of the parameter p:"<<endl;
			cin>>p;
			vm1.create(p);
			break;

	   case '1':  //coin
			cout<<"  Operation:  coin(int v)"<<endl;
			cout<<"  Enter value of the parameter v:"<<endl;
			cin>>v;
			vm1.coin(v);
			break;

	    case '2':  //sugar
			cout<<"  Operation:  sugar()"<<endl;
			vm1.sugar();
			break;

	    case '3':  // tea
			cout<<"  Operation:  tea()"<<endl;
			vm1.tea();
			break;

	    case '4':  // chocolate
			cout<<"  Operation:  chocolate()"<<endl;
			vm1.chocolate();
			break;

	    case '5':  // insert_cups
			cout<<"  Operation:  insert_cups(int n)"<<endl;
			cout<<"  Enter value of the parameter n:"<<endl;
			cin>>n;
			vm1.insert_cups(n);
			break;

	    case '6':  // set_price
			cout<<"  Operation:  set_price(int p)"<<endl;
			cout<<"  Enter value of the parameter p:"<<endl;
			cin>>p;
			vm1.set_price(p);
			break;

	    case '7':  // cancel
			cout<<"  Operation:  cancel()"<<endl;
			vm1.cancel();
			break;

      };// endswitch
   }; //endwhile;
   return 0;
}
