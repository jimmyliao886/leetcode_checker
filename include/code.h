#include <cstdio>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>
#include "solution.h"

class Code1431 : public Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxValue = *std::max_element(candies.begin(), candies.end());
        vector<bool> ret(candies.size(), false);
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies > maxValue) ret[i] = true;
        }

        return ret;
    }

    void run() override {
        vector<int> candies = {
            2,3,5,1,3
        };
        int extra = 3;

        Code1431 sol;
        vector<bool> ret = sol.kidsWithCandies(candies, extra);

        printf("[ ");
        for (int i = 0; i < ret.size(); i++) {
            if (ret[i] == true) printf("true, ");
            else printf("false, ");
        }
        printf(" ]\n");
    }
};

class GcdString : public Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        size_t len1 = str1.size();
        size_t len2 = str2.size();
        size_t common_len = gcd(len1, len2);
        return str1.substr(0, common_len);
    }

    size_t gcd(size_t a, size_t b) {
        while (b) {
            a %= b;
            swap(a, b);
        }
        return a;
    }

    void run() {
        string str1 = "ABCABC";
        string str2 = "CBA";

        GcdString sol;
        string out = sol.gcdOfStrings(str1, str2);
        printf("====> GCD: %s\n", out.c_str());
    }
};

class PermuteUnique : public Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> results;
        if(nums.size() == 0) return results;
        if (nums.size() == 1) {
            results.emplace_back(nums[0]);
            return results;
        }
        
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            vector<vector<int>> start;
            vector<int> second;
            remove_one_element(nums, second, i);
            choose(second, start);

            for (auto it = start.begin(); it != start.end(); it++) {
                it->push_back(nums[i]);
                results.emplace_back(*it);
            }
        }
        return results;
    }
private:
    void choose(vector<int>& nums, vector<vector<int>>& choices) {
        if (nums.size() == 0) return;
        if (nums.size() == 1) {
            vector<int> item = {nums[0]};
            choices.emplace_back(item);
            return;
        }

        for (size_t i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            vector<int> second;
            vector<vector<int>> start;
            start.clear();
            remove_one_element(nums, second, i);
            choose(second, start);
            for (auto it = start.begin(); it != start.end(); it++) {
                it->push_back(nums[i]);
                choices.push_back(*it);
            }
        }
    }

    void remove_one_element(vector<int> &nums, vector<int> &out, int idx) {
        for (int i = 0; i < nums.size(); i++) {
            if (idx != i) {
                out.push_back(nums[i]);
            }
        }
    }

    void run() override {
        PermuteUnique sol;
        vector<int> nums {1,1,2};
        vector<vector<int>> ret = sol.permuteUnique(nums);
        for (auto it = ret.begin(); it != ret.end(); it++) {
            vector<int> cur = *it;
            printf("[");
            for(size_t i = 0; i < cur.size(); i++) {
                printf("%d ", cur[i]);
            }
            printf("]\n");
        }
    }
};