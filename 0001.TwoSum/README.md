# TwoSum

There are two solutions.  
Brute Force and One Pass using HashTable.  

## BruteForce

This takes O(n^2).

```c++
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
```

This is simple solution.  
There are two cursors(`i` and `j`), and the sum of each is compared to `target`.

## One Pass using HashTable

This takes O(n).  
I use `std::unordered_map`. So maybe you know `std::map`.  
There are differences in the way they are implemented.  

`std::unordered_map` is implemented using `HashTable`.  
On the other hand, `std::map` is implemented using `self-balancing binary search tree`.

`std::map` has order by key.  
So if you don't need order, you can use `std::unordered_map`.

```c++
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int &target)
    {
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++)
        {
            if (ump.find(target - nums[i]) != ump.end())
                return {ump[target - nums[i]], i};
            else
                ump[nums[i]] = i;
        }
        return {};
    }
};
```

At first, `key` is value of `vector[i]`, `value` is index(`i`).  
Search for an `target - nums[i]` in `ump`.  
If there is in it, return each index.  
If there isn't in it, add key and value pair.

That's all.

## Material

- [mapとunordered_mapの実装や性能の違い](https://www.madopro.net/entry/2016/09/08/091348)
- [ハッシュ連想配列クラス unordered_map 入門](http://vivi.dyndns.org/tech/cpp/unordered_map.html)
- [std::mapまとめ](https://qiita.com/_EnumHack/items/f462042ec99a31881a81)