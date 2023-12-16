#include <iostream>
#include <fstream>
#include <cmath>
 
using namespace std;
 
int main()
{
	setlocale(LC_ALL,"Russian");
    char const *File="123.txt",*File1="321.txt";
    float x1,y1,r,x,y;
    ifstream f(File);
    if (!(f.is_open()))
        cout<<"Îøèáêà!"<<File;
    else
    {
        while(!f.eof()) 
        {  
            f>>x1>>y1;
            f>>r;
        }
    }
    ifstream f1(File1);
    if (!(f1.is_open()))  
        cout<<"Îøèáêà!"<<File1;
    else
    {
        while(!f1.eof()) 
        {   
            f1>>x>>y;
            if ((pow(x-x1,2)+pow(y-y1,2))==pow(r,2))
    			{
    			cout << "0"<<endl;
    			}
            if ((pow(x-x1,2)+pow(y-y1,2))<pow(r,2))
    			{
    			cout << "1"<<endl;
				}			
    		if ((pow(x-x1,2)+pow(y-y1,2))>pow(r,2))
    			{
    			cout << "2"<<endl;
				}
        }
    }
    f.close();
    f1.close();
    cout << endl;
    system("PAUSE");
    return 0;
}
