// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"gaurav"<<endl;
//     cout<<"7412";
//     cout<<"\nhave a good day"<<endl;
//     int myNum = 25;
//         myNum= 20;
//     cout<<myNum<<endl;
//     cout<<myNum;
//     int myNo =5;
//     double myfloatNum =6.4;
//     string myText ="hell0!";
//     char myLetter ='g';
//     bool myBoolean =true;
//      bool myGaurav =false;
//     cout<< myText <<endl;
//     cout<< myfloatNum <<endl;
//     cout<< myBoolean <<endl;
//      cout<< myGaurav<<endl;
//     return 0;
// }
//                          // ----------Display  variables----------
// #include<iostream>
// using namespace std;
// int main(){
//     int Age=19;
//     cout<<" I am "<<  Age <<endl <<"years old.";
//     return 0; 
// }
// // -------------Add variables Together-----------
// #include<iostream>
// using namespace std;
// int main ()
// {
//     std::cout<<"gaur"<<"\n";
//     int x=5;
//     int y=5;
//     int sum =x+y;
//     cout<<sum;
// }
// // -------------Declare Many variables -----------
// #include<iostream>
// using namespace std;
// int main()
// {
// int a=20,s=22,d=23;
// cout<<a+s+d<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
// int a,s,d,f;
// a=15;
// s=1;
// d=2;
// cout<<a+s-d<<endl;
// return 0;
// }
// // ------------One Value to Multiple variables-----------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     x=y=z=10;
//     cout<<x+y+z;
// }
// ----------Constants--------
#include<iostream>
#include<string.h>
using namespace std;

struct Book {
    int bookid;
    char title[20];
    float price;

    void displayBook(Book b) {
        cout << "Book ID is: " << b.bookid << endl;
        cout << "Title is: " << b.title << endl;
        cout << "Price is: " << b.price << endl;
    }

    Book inputBook() {
        Book b1;
        cout << "\nEnter bookid, title, and price:-\n ";
        cin >> b1.bookid;
        cin.ignore();  // Ignore newline character
        cin.getline(b1.title, 20);
        cin >> b1.price;
        return b1;
    }
};

int main() {
    Book b2, b3;
    b3 = b2.inputBook();
    b2.displayBook(b3);
    return 0;
}

