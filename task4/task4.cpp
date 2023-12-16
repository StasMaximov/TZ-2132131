#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <numeric>

using namespace std;

int minMoves(vector<int>& nums) 
{
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int avg = sum / n;	
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
    moves += abs(nums[i] - avg);
    }
    return moves;
}

int main() 
{
    setlocale(LC_ALL,"Russian");
    ifstream f("12.txt");
    if (!f.is_open()) 
    {
        cout << "Ошибка!" << endl;
        return 1;
    }
    vector<int> nums;
    int num;
    while (f >> num) 
    {
        nums.push_back(num);
    }
    f.close();
    int minMovesCount = minMoves(nums);
    cout << minMovesCount <<endl;
    system("pause");
    return 0;
}
