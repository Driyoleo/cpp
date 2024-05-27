// memory allocation in class with a array

#include<iostream>
using namespace std ;

class book
{
    private :
        string book_name[100] ;
        int book_price[100] ;
        int count = 0 ;
    public :
        void display();
        void add_book() ;

} ;

void book :: display()
{
            if (count==0){
                cout << "nothing present in this type of book" << endl ;
            }
            else{
                cout << "books present : " << endl ;
                for (int i = 0 ; i < count ; i++){
                    cout << book_name[i] << " --> " << book_price[i] << endl ;
                }
            }
}

void book :: add_book()
{
    if (count == 100 )
    {
        cout << "storage is full !" << endl ;
    }
    else
    {
        cout << "give book name : " ;
        cin >> book_name[count] ;
        cout << "give it's price value : " ;
        cin >> book_price[count] ;
        count++ ;
    }
    
}

int main(){
    book jee_book ;
    jee_book.display() ;
    int num ;
    cout << "number books to be added : " ;
    cin >> num ;
    for (int j = 0 ; j < num ; j++){
        jee_book.add_book() ;
    }
    jee_book.display() ;
    return 0 ;
}