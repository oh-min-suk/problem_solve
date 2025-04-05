#include <iostream>
using namespace std;

class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            
        }
    };

// base_arr = 길이 1짜리 subset들 배열 생성(subset, xor값) -> 길이 = n
//  => n = 0이면 0반환 => n > 0 보장
// new_arr = base_arr
// sum_xor = 0
// while (cnt <= n) do
//      cnt == 1이면 그냥 new_arr의 원소합을 sum_xor에 더하고 cnt++
//      temp_arr = []
//      for(i in base_arr)
//          for(j in new_arr)
//              if(i not in j)
//                  temp_arr.push(i + j)
//                  xor값도 계산하여 저장(dynamic programming)
// sum xor values from new_arr