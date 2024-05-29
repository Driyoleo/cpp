#include<iostream>
using namespace std ;

class emp 
{
    private :
        string first_name ;
        string last_name ;
        int id ;
        int sal ;

    public :
        void set_name() ;
        void set_id() ;
        void set_sal() ;
        int display_id() ;
        int display_sal() ;
        void display_name(string &fname , string &lname) ;
} ;

void emp :: set_id()
{
    cout << "enter the id : " ;
    cin >> id ;
}
void emp :: set_name()
{
    cout << "enter the name : " ;
    cin >> first_name >> last_name ;
}
void emp :: set_sal()
{
    cout << "enter the salary : " ;
    cin >> sal ;
}

void emp :: display_name(string &fname , string &lname)
{
    // cout << "employee name is " << name << endl ;
    fname = first_name ;
    lname = last_name ;
}
int emp :: display_id()
{
    // cout << "employee id is " << id << endl ;
    return id ;
}
int emp :: display_sal()
{
    // cout << "employee sal is " << sal << endl ;
    return sal ;
}

int main()
{
    int num ;
    cout << "how many employees you have : " ;
    cin >> num ;
    emp arr[4] ;

    for (int i = 0 ; i < num ; i++)
    {
        cout << "details of employee number .. " << i+1 << endl ;
        arr[i].set_name() ;
        arr[i].set_id() ;
        arr[i].set_sal() ;
        
    }
    
    string emp_fname , emp_lname;
    cout << "enter the employee name whose details you want to know : " ;
    cin >> emp_fname >> emp_lname ;
    
    for (int i = 0 ; i < num ; i++ )
    {
        string ch_fname , ch_lname ;
        arr[i].display_name(ch_fname ,ch_lname) ;

        if (ch_fname == emp_fname && ch_lname == emp_lname)
        {
            int emp_id = arr[i].display_id() ;
            int emp_sal = arr[i].display_sal() ;
            cout << "name : " << emp_fname << " " << emp_lname << endl ;
            cout << "id : " << emp_id << endl ;
            cout << "salary : " << emp_sal << endl ; 
        }
    }
}