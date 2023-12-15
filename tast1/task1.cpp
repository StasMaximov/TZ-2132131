#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	setlocale(LC_ALL,"Russian");
	int n,m,k=0;
    cin >>n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
	{
        arr[i] = i + 1;
    }
    do 
	{
        cout << arr[k];
        k = (k + m - 1) % n;
    }while (k != 0);
    cout <<endl;
	system("pause");
    return 0;
}


