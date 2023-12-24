#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL,"Russian");
    float x1,y1,r,x,y;
    int i=0,n;
    cout << "¬ведите координаты центра->";
    cin >> x >> y;
    cout << "¬ведите радиус окружности->";
    cin >> r;
    cout << "¬ведите количество точек->";
    cin >> n;
	if (n<=0 || n>100)
	{
		cout << "ќшибка!"<<endl;
		system("pause");
		return 1;
	}
    do
    {
    	cout << "¬ведите координаты точки->";
    	cin >> x1 >> y1;
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
			i++;
	}while(i<n);	
    system("pause");
    return 0;
}
