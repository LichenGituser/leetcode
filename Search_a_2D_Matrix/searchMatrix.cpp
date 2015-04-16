#include <iostream>

class Solution
{
public:
	bool searchMatrix(vector<vector<int>> &matrix, int target)
	{
		int n = matrix.size();
		int m = matrix[0].size();
		int l = 0, r = m*n -1;
		while(l <= r)
		{
			int mid = (r + l)/2;
			if (matrix[mid/m][mid%m] <target)
				l = mid + 1;
			else if (matrix[mid/m][mid%m] > target)
				r = mid - 1;
			else
				return true;
		}
		return false;
	}
};

int main()
{
	
	Solution solution;
	return 0;
}
