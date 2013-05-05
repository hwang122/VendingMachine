#include <iostream>
#include <conio.h>
#include "..\include\vendingmachine2.h"

using namespace std;

int main()
{
    VENDINGMACHINE2 vm2;
    int p;
    int v;
    int n;
    char ch;

      cout<<string(100, '\n');
      cout<< "                          Vending Machine-2" << endl;

      cout<< "                  MENU of Operations" << endl;
      cout<< "          0. CREATE(float)" << endl;
      cout<< "          1. COIN(float)" << endl;
      cout<< "          2. SUGAR()" << endl;
      cout<< "          3. CREAM()" << endl;
      cout<< "          4. COFFEE()" << endl;
      cout<< "          5. InsertCups(int)" << endl;
      cout<< "          6. SetPrice(float)" << endl;
      cout<< "          7. CANCEL()" << endl;
      cout<< "          q. Quit the demo program" << endl;


      cout<< "  Please make a note of these operations" << endl;


      cout<< "           Vending Machine-2 Execution" << endl;
      ch='1';
      while (ch !='q') {
	cout<< "  Select Operation: "<<endl;
        cout<<"0-CREATE,1-COIN,2-SUGAR,3-CREAM,4-COFFEE,5-InsertCups,6-SetPrice,7-CANCEL"<<endl;
        ch=getch();

        switch (ch) {
	    case '0':   //create
			cout<<"  Operation:  CREATE(float p)"<<endl;
			cout<<"  Enter value of the parameter p:"<<endl;
			cin>>p;
			vm2.CREATE(p);
			break;

	   case '1':  //coin
			cout<<"  Operation:  COIN(float v)"<<endl;
			cout<<"  Enter value of the parameter v:"<<endl;
			cin>>v;
			vm2.COIN(v);
			break;

	    case '2':  //sugar
			cout<<"  Operation:  SUGAR()"<<endl;
			vm2.SUGAR();
			break;

	    case '3':  // tea
			cout<<"  Operation:  CREAM()"<<endl;
			vm2.CREAM();
			break;

	    case '4':  // chocolate
			cout<<"  Operation:  COFFEE()"<<endl;
			vm2.COFFEE();
			break;

	    case '5':  // insert_cups
			cout<<"  Operation:  InsertCups(int n)"<<endl;
			cout<<"  Enter value of the parameter n:"<<endl;
			cin>>n;
			vm2.InsertCups(n);
			break;

	    case '6':  // set_price
			cout<<"  Operation:  SetPrice(float p)"<<endl;
			cout<<"  Enter value of the parameter p:"<<endl;
			cin>>p;
			vm2.SetPrice(p);
			break;

	    case '7':  // cancel
			cout<<"  Operation:  CANCEL()"<<endl;
			vm2.CANCEL();
			break;

      };// endswitch
   }; //endwhile;
   return 0;
}
