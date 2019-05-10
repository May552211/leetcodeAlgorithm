#include "Solution.h"
#include <iostream>

void main(){

//******************2019—05—02 start********************************
	Solution s;
	vector<int> num1, num2;
	num1.push_back(3);
	num1.push_back(5);
	num1.push_back(8);
	num1.push_back(10);
	num1.push_back(11);
	num1.push_back(14);
	num1.push_back(16);
	num1.push_back(20);
	num1.push_back(32);

	num2.push_back(4);
	num2.push_back(7);
	num2.push_back(12);
	num2.push_back(13);
	num2.push_back(15);
	num2.push_back(23);
	num2.push_back(35);

	double middle=s.findMedianSortedArrays(num1, num2);






//***************************end*******************************
	//Solution s;

	////最长字符串
	//vector<string> strs;		
	//string common = s.longestCommonPrefix(strs);
	//printf("%s\n", common.c_str());

	///*//找出无重复的字符串
	//
	//string str="shioutrghvbhhkthdv";
	//str = "pwwkew";
	//int maxlen=s.lengthOfLongestSubstring(str);
	//printf("index is %d", maxlen);

	//*/

	//int a;
	//cin >> a;










	/*//两个链表相加


	Solution s;
	//初始化链表
	ListNode* l1=(ListNode*)malloc(sizeof(ListNode));
	ListNode* l2 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* l3 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p3 = (ListNode*)malloc(sizeof(ListNode));
	int a[] = {2,4,3};
	int b[] = { 5, 6, 4 };
	l1=s.createList(a, 3);
	p1 = l1;

	
	while (p1){
		printf(" %d", p1->val);
		p1 = p1->next;
	}
	l2=s.createList(b, 3);
	p2 = l2;
	while (p2){
		printf("%d", p2->val);
		p2 = p2->next;
	}
	l3=s.addTwoNumbers(l1, l2);
	l3 = l3->next;
	p3 = l3;
	printf("l3 is     ");
	while (p3){
		printf("%d", p3->val);
		p3 = p3->next;
	}*/
	//cout << "Value of str is : "  ;
	/*vector<int> vs;
	vector<int> temp;
	vs.push_back(0);
	vs.push_back(1);
	vs.push_back(0);
	vs.push_back(0);
	vs.push_back(9);
	vs.push_back(9);
	vs.push_back(0);
	vs.push_back(9);*/
	//vector<char> v1;

	/*vector<vector<char>> board{
		{ '5', '3', '.', '.', '7', '.', '.', '.', '.' },
		{ '6', '.', '.', '1', '9', '5', '.', '.', '.' },
		{ '.', '9', '8', '.', '.', '.', '.', '6', '.' },
		{ '8', '.', '.', '.', '6', '.', '.', '.', '3' },
		{ '4', '.', '.', '8', '.', '3', '.', '.', '1' },
		{ '7', '.', '.', '.', '2', '.', '.', '.', '6' },
		{ '.', '6', '.', '.', '.', '.', '2', '8', '.' },
		{ '.', '.', '.', '4', '1', '9', '.', '.', '5' },
		{ '.', '.', '.', '.', '8', '.', '.', '7', '9' } };*/
	//Solution s;
	// //temp = s.twoSum(vs,2);
	////s.moveZeroes(vs);
	////s.isValidSudoku(board);
	////string str = "abcabcbb";
	////s.lengthOfLongestSubstring(str);
	//vector<string> strs;
	//strs.push_back("alower");
	//strs.push_back("blow");
	//strs.push_back("flight");
	//s.longestCommonPrefix(strs);

	////cout << "Value of str is : ";
	



}