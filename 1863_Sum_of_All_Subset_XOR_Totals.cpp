#include <iostream>
using namespace std;

class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            
        }
    };

// base_arr = 길이 1짜리 subset들 배열 생성(subset, xor값) -> 길이 = n
// new_arr = 새로 만든 subset 저장할 배열
// while (cnt <= n) do
//      construct subsets from base_arr
//      new_arr = base_arr
// sub xor values