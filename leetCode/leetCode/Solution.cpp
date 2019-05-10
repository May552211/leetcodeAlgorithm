#include "Solution.h"
#include<algorithm>
#include <iostream>

Solution::Solution()
{
}


Solution::~Solution()
{
}


bool Solution::containsDuplicate(vector<int>& nums){
	

	/*
	思路：定义一个容器，从nums里面按个取放到定义的容器中，如果放入之前，里面已经有了相同的元素，则重复
	否则，不重复；
	*/
	/*vector<int> vc;
	for (int i = 0; i < nums.size();i++)
	{
		for (int j = 0; j < vc.size();j++)
		{
			if (nums[i] == vc[j])
			{
				return true;
			}
		}
		
			vc.push_back(nums[i]);
		
	}
	return false;*/

	bool flag = false;
	int len = nums.size();
	if (len > 1)
	{
		sort(nums.begin(), nums.end());
		int MarkNum = nums[0];
		for (int i = 1; i <= len; i++)
		{
			if (nums[i] == MarkNum)
				return true;
			else
				MarkNum = nums[i];
		}
	}
	else
		flag = false;
	return flag;


}

// Best Time to Buy and Sell Stock II
int Solution::maxProfit(vector<int>& prices){
	
	int buyTime;
	int sellTime;
	for (int i = 0; i < prices.size();i++)
	{
		if (prices[i]<prices[i+1])
		{
			buyTime = prices[i];
			
		}
	}
	return 1;


}
// Single Number
int Solution::singleNumber(vector<int>& nums){


	sort(nums.begin(), nums.end());
	int MarkNum = nums[0];
	for (int i = 1; i <= nums.size(); i++)
	{
		if (nums[i] != MarkNum)
			return nums[i];
		else
			MarkNum = nums[i];
	}

}


vector<int> Solution::twoSum(vector<int>& nums, int target){

for (int i = 0; i < nums.size();i++)
{
		for (int j = i + 1; j < nums.size();j++)
		{
			if (nums[i] + nums[j] == target){
				return{i ,j};
			}
		}


}


}

// plusOne
vector<int> Solution::plusOne(vector<int>& digits) {

	int i = digits.size() - 1;
	//找不等于9的数
	while (digits[i] == 9 && i>0){
	
		i--;
	}
	// 全部是9，digits[0]==9--排除[0] [9]
	if (i == 0 && digits[0]==9){
		digits.insert(digits.begin(), 1);
	}
	else
	{
		digits[i] = digits[i] + 1;
	}
	// 从低到高为9的赋值0
	for (int j = i + 1; j < digits.size(); j++)
	{
		digits[j] = 0;
	}
	return digits;

}

//Move Zeroes
void Solution::moveZeroes(vector<int>& nums) {
	
	int temp;
	int j =0;
	for (int i = 0; i < nums.size()-1; i++)
	{
		j = i + 1;
		if (nums[i] == 0)
		{
			//找非零
			while (j < nums.size() )
			{
				if (nums[j] != 0)
				{
					break;
				}
				else
				{
					j++;
				}
			}
			//交换
			if (j < nums.size())
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
			
			//i = j;
			
		}

	}

}

//Valid Sudoku
bool Solution::isValidSudoku(vector<vector<char>>& board) {

	if (board.empty() || board[0].empty()) return false;
	int m = board.size(), n = board[0].size();
	vector<vector<bool> > rowFlag(m, vector<bool>(n, false));
	vector<vector<bool> > colFlag(m, vector<bool>(n, false));
	vector<vector<bool> > cellFlag(m, vector<bool>(n, false));
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (board[i][j] >= '1' && board[i][j] <= '9') {
				int c = board[i][j] - '1';
				if (rowFlag[i][c] || colFlag[c][j] || cellFlag[3 * (i / 3) + j / 3][c]) return false;
				rowFlag[i][c] = true;
				colFlag[c][j] = true;
				cellFlag[3 * (i / 3) + j / 3][c] = true;
			}
		}
	}
	return true;
		
}

// Given a string, find the length of the longest substring without repeating characters.
int Solution::lengthOfLongestSubstring(string s)
{

	
	
	int index, max, maxlength;
	index = 0;
	string str;
	str = s[0];
	max = 1;
	maxlength = 1;
	int k = 0;
	for (int j = 1; j < s.size(); j++)
	{
		if (s.size() == 0 || s == ""){
			return 0;
		}
		index = str.find(s[j]);
		if (index != -1)//zai 
		{

			if (maxlength < max)
			{
				maxlength = max;

			}
			str =str.substr(k+index+1,j-1);
			char c = s.at(j);
			char tmp[1];
			tmp[0] = c;
			string result(tmp, 1);
			str.append(result);
			max = str.size();
		}
		else
		{
			char c = s.at(j);
			char tmp[1];
			tmp[0] = c;
			string result(tmp, 1);
			str.append(result);
			max++;
		}
	}

	if (max > maxlength){
		maxlength = max;
	}





	return maxlength;
	/*vector<char> str;
	int strLenth;
	str.push_back(s[0]);
	int maxStrLenth = 0;
	bool flag = false;
	for (int  i = 1; i < s.size(); i++)
	{
		flag = isInVector(str,s[i]);
		if (!flag)
		{
			str.push_back(s[i]);
		}
	}
	return maxStrLenth;*/


	/*vector<int> m(128, -1);
	int res = 0, left = -1;
	for (int i = 0; i < s.size(); ++i) {
		left = max(left, m[s[i]]);
		m[s[i]] = i;
		res = max(res, i - left);
	}
	return res;*/
}

bool Solution::isInVector(vector<char> str, char c)
{
	for (int  i = 0; i < str.size(); i++)
	{
		if (c == str[i])
		{
			return true;
		}
	}
	return false;
}

//找中位数
double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{

	int m = nums1.size();
	int n = nums2.size();
	int mMiddle, nMiddle;
	//相加为偶数 下标为（m+n）/2    和（m+n）/2-1
	if ((m + n)%2==0){

	}
	else{
		
	}
		mMiddle = m / 2;
		nMiddle = n / 2;

		if (nums1[mMiddle] < nums2[nMiddle])
		{
			for (int i = 0; i < (m + n) / 2 - mMiddle - 1;i++)
			{
				if (nums1[mMiddle] < nums2[nMiddle - 1])
				{
					
				}
			}
				
		}
		else
		{
			
			for (int i = 0; i < (m + n) / 2 - nMiddle - 1;i++)
			{
				if (nums1[nMiddle] > nums2[mMiddle - 1])
				{

				}
			}
		}




}
//Longest Common Prefix
string Solution::longestCommonPrefix(vector<string>& strs)
{

	string reStr = "";
	if (!strs.empty())
	{
		int strs0Len = strs[0].size();
		int strsLen = strs.size();

		for (int i = 0; i < strs0Len; i++)
		{

			for (int j = 1; j < strsLen; j++)
			{
				if (strs[0][i] != strs[j][i])
				{

					return reStr;
				}
			}

			reStr = reStr + strs[0][i];
			printf("%c", strs[0][i]);

		}
	}
	return reStr;
	/*int strs0Len = strs[0].size();
	int strsLen = strs.size();
	string reStr = "";
	bool flag = true;
	for (int i = 0; i < strs0Len; i++)
	{
		if (flag)
		{
			for (int j = 1; j < strsLen; j++)
			{
				if (strs[0][i] != strs[j][i])
				{
					flag = false;
					break;
				}
			}
			
		}
		if (!flag)
		{
			break;
		}
		reStr = reStr + strs[0][i];
		printf("%c",strs[0][i]);
	}*/
	return reStr;
}


// Add Two Numbers
ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	//ListNode* l3 = (ListNode*)malloc(sizeof(ListNode));
	//ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
	//ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* p3 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* l3 = new ListNode(-1);
	ListNode* p1 = new ListNode(-1);
	ListNode* p2 = new ListNode(-1);
	ListNode* p3 = new ListNode(-1);
	p1 = l1;
	p2 = l2;
	l3->val = 0;
	p3 = l3;
	int j = 0;
	while (p1&&p2)
	{
		//ListNode* tempnode = (ListNode*)malloc(sizeof(ListNode));
		ListNode* tempnode = new ListNode(-1);
		int temp=p1->val + p2->val + j;
		if (temp >= 10){
			j = 1;
			temp = temp - 10;
		}
		else{
			j = 0;
		}
		tempnode->val = temp;
		tempnode->next = NULL;
		p3->next = tempnode;
		printf("p3           %d/n", temp);
		p1 = p1->next; p2 = p2->next; p3 = p3->next;
	}

	if (j == 1){
		while (p1){
			ListNode* tempnode = new ListNode(-1);
			int temp = p1->val+ j;
			if (temp >= 10){
				j = 1;
				temp = temp - 10;
			}
			else{
				j = 0;
			}
			tempnode->val = temp;
			p3->next = tempnode;
			p1 = p1->next; p3 = p3->next;
		}
		while (p2){
			//ListNode* tempnode = (ListNode*)malloc(sizeof(ListNode));
			ListNode* tempnode = new ListNode(-1);
			int temp = p2->val + j;
			if (temp >= 10){
				j = 1;
				temp = temp - 10;
			}
			else{
				j = 0;
			}
			tempnode->val = temp;
			p3->next = tempnode;
			p2= p2->next; p3 = p3->next;
		}
	}
	else{
		if(p1){
			p3->next = p1;
		}
      if(p2) {
		   p3->next = p2;
        }
	}
	return l3->next;

}
ListNode* Solution::createList(int arr[],int n)
{
	ListNode* l = (ListNode*)malloc(sizeof(ListNode));
	l->val = arr[0];
	printf("c%d", arr[0]);
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p = l;

	for (int i = 1; i < n; i++){
		
		ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
		temp->val = arr[i];
		p->next = temp;
		p = temp;

	}
	p->next = NULL;
	return l;
}