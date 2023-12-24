#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int minMoves(vector<int>& nums) 
{
    int moves=0,sum=0,average=0,i;
    int n=nums.size();
    for (i=0;i<n;i++) 
	{
        sum += nums[i];
    }
    average=round(sum / n);
    for (i=0;i<n;i++) 
	{
        moves += abs(nums[i]-average);
    }
    return moves;
}

int main() 
{
	setlocale(LC_ALL,"Russian");
	int n,i;
    cout << "Введите размер массива->";
    cin >> n;
    vector<int> nums(n);
    cout << "Введите элементы массива->";
    for (i=0;i<n;i++) 
	{
    	cin >> nums[i];
    }
    int minMovesCount = minMoves(nums);
    cout << "Минимум->" << minMovesCount << endl;
    return 0;
}
