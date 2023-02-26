// problem => 2574. Left and Right Sum Differences

/* "***Ankit The Coder*** "

leetcode proble 26/02/2023

Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
 

Constraints:

1 <= nums.length <= 1000
1 <= nums[i] <= 105



*/

//Leetcode Problem solve use this || 
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int length = nums.size() ;
        int leftSum[length] ;
        int RightSum[length] ;
        
        int count = 0 ; 
        int backcount = 0; 
        for(int i = 0 ; i<length ; i++){
            leftSum[i] = count;
            RightSum[length-1-i] = backcount;
            count = count+nums[i] ;
            backcount = backcount+nums[length-1-i];
        }
        
        for(int i =0 ;i<length;i++){
            nums[i] = abs(leftSum[i] - RightSum[i]);
        }
        
      return nums;  
    }
};

/* Explination of code by using array 
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print(int arr[] ,int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i] <<" ";
    }
}

int main() {
    
    int n;
    cin >>n;
    int num[n] ;
    for(int i = 0 ;i<n;i++){
        cin >>num[i];
    }
        int leftSum[n] ;
        int RightSum[n] ;
        
        int count = 0 ; 
        int backcount = 0; 
        for(int i = 0 ; i<n ; i++){
            leftSum[i] = count;
            RightSum[n-1-i] = backcount;
            count = count+num[i] ;
            backcount = backcount+num[n-1-i];
        }
        
        print(leftSum ,n);
        cout <<endl;
        print(RightSum ,n);
        
        for(int i =0 ; i<n;i++){
            num[i] = abs(leftSum[i] - RightSum[i]);
        }
        
        cout <<"/n new array : " <<endl;
        print(num,n);
        
} */
