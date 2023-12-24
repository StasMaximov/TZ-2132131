#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    setlocale(LC_ALL,"Russian");
    float x1,y1,r,x,y;
    int i=0,n;
    cout << "Введите координаты центра->";
    cin >> x >> y;
    cout << "Введите радиус окружности->";
    cin >> r;
    cout << "Введите количество точек->";
    cin >> n;
    if (n<=0 || n>100)
	{
		cout << "Ошибка!"<<endl;
		system("pause");
		return 1;
	}
    do
	{
    	cout << "Введите координаты точки->";
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
