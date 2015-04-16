#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution
{
public:
	int findMin(int A[], int n)
	{
		int first = 0, last = n -1;
		while(first != last)
		{
			if (A[first] < A[last])
				return A[first];
			int mid = first + ((last - first)>>1);
			if (A[mid] >= A[first])
				first = mid + 1;
			else
				last = mid;
		}	
		return A[first];
	}
};

int main()
{
	int A[] = {5,6,7,0,1,2,4};
	Solution solution;
	cout<<solution.findMin(A, 7)<<endl;
	return 0;
}
