#pragma once
#include<vector>
using namespace std;
//Definition for singly-linked list
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
	Solution();
	~Solution();

	
	
	bool containsDuplicate(vector<int>& nums);

	// Best Time to Buy and Sell Stock II
	int maxProfit(vector<int>& prices);
	// Single Number
	int singleNumber(vector<int>& nums);
	//Two Sum
	vector<int> twoSum(vector<int>& nums, int target);
	/*
	Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
	The digits are stored such that the most significant digit is at the head of the list, 
	and each element in the array contain a single digit.
	You may assume the integer does not contain any leading zero, except the number 0 itself.
	*/
	// plus one
	vector<int> plusOne(vector<int>& digits);
	/*
	
	Given an array nums, 
	write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
	
	*/
	void moveZeroes(vector<int>& nums);

	//Valid Sudoku
	bool Solution::isValidSudoku(vector<vector<char>>& board);
	/*
	Given a string, find the length of the longest substring without repeating characters.
	*/
	int lengthOfLongestSubstring(string s);

	// judge if a element is in vector 
	bool isInVector(vector<char> str, char c);
	int indexInString(string str, char c);
	//14. Longest Common Prefix
	string longestCommonPrefix(vector<string>& strs);

	// Add Two Numbers
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
	//Create a list
	ListNode* createList(int a[], int n);
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};

