#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
    private:
        int l ;
        int h ;
        int b ;
    public: 
        Box() ;
        Box(int l , int b , int h) ;
        Box(Box &base) ;
        
        int getLength() ;
        int getBreadth() ;
        int getHeight() ;
        long long CalculateVolume() ;
        
        // overloading functions
        friend bool operator< (Box const &A , Box const &B) ;
        friend ostream& operator<< (ostream &output , Box const &B) ;
} ;

Box :: Box()
{
    l = 0 ;
    b = 0 ;
    h = 0 ;
}

Box :: Box(int len , int bth , int heit)
{
    l = len ;
    b = bth ;
    h = heit ;
} 

Box :: Box(Box &base)
{
    l = base.l ;
    b = base.b ;
    h = base.h ;
}

int Box :: getLength()
{
    return l;
}

int Box :: getHeight()
{
    return h;
}

int Box :: getBreadth()
{
    return b;
}

long long Box :: CalculateVolume()
{
    return (l*b*h);
}

bool operator< (Box const &A ,Box const &B)
{
    if (A.l < B.l)
    {
        return true;
    }
    else if (A.b<B.b && A.l==B.l)
    {
        return true;
    }
    else if (A.h<B.h && A.b==B.b && A.l==B.l)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

ostream&  operator<< (ostream &output , Box const &B)
{
    output << B.l << " " << B.b << " " << B.h << " " ;
    return output ;
}




void check2()
{
	int n;
    cout << "number of inputs you want : " ;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
        cout << "what's your input type : " ;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
            cout << "enter box length breadth height : " ;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
            cout << "enter box length breadth height : " ;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}



/*
this gave beautiful demonstration about how we can overload a operator funciton in c++
eg.. 

bool operator< (Box const &A ,Box const &B)
{
    if (A.l < B.l)
    {
        return true;
    }
    else if (A.b<B.b && A.l==B.l)
    {
        return true;
    }
    else if (A.h<B.h && A.b==B.b && A.l==B.l)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

ostream&  operator<< (ostream &output , Box const &B)
{
    output << B.l << " " << B.b << " " << B.h << " " ;
    return output ;
}
*/