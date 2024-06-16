#include<iostream>
using namespace std ;

class student 
{
    protected :
        int roll ;
    public :
        void set_roll(int num)
        {
            roll = num ;
        }

        void print_roll() 
        {
            cout << "roll : " << endl ;
        }
} ;

class academics : virtual public student 
{
    protected :
        int phy ;
        int maths ;
        int chem ;
        int comp ;
    public :
        void set_marks(int ph , int mth , int ch , int cp)
        {
            phy = ph ;
            maths = mth ;
            chem = ch ;
            comp = cp ;
        }

        void print_marks()
        {
            cout << "marks -->" << endl
                << "physics : " << phy << endl  
                << "maths : " << maths << endl
                << "chemistry : " << chem  << endl
                << "computer science : " << comp << endl;
        }
} ;

class sports : virtual public student
{
    protected :
        int score ;
    public :
        void set_score(int sc)
        {
            score = sc ;
        }

        void print_score()
        {
            cout << "score : " << score << endl ;
        }
} ;

class result : public academics , public sports 
{
    protected :
        int result;
    public :
        void print_scorecard()
        {
            result = phy + chem + maths + comp + score ;
            cout << "score card of roll " << roll << " is ," << endl ;
            print_marks() ;
            print_score() ;
            cout << "total : " << result << endl ;
        }
} ;



int main()
{
    result sam ;
    sam.set_roll(12) ;
    sam.set_marks(99 , 88 , 98 , 95) ;
    sam.set_score(100) ;
    sam.print_scorecard() ;
    return 0 ;
}