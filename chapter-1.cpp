//class
//class is a collection of related data and function under a single name
#include<iostream>
using namespace std;

class Books{
    public:
        int Id=256;
        void printBookId(){
            cout<<"The book id is = "<<Id<<endl;
        }
};
int main()
{
    Books book1;//this book1 is a object of class
    book1.printBookId();
    cout<<book1.Id<<endl;
    return 0;
}