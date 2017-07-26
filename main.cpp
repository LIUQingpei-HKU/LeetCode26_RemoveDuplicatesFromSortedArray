#include <iostream>
#include <vector>

using namespace std;

//72.83% 26ms
//time O(n)
//space O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        //for[0,k)
        int k=1;
        int value = nums[0];
        for(int i=1;i<nums.size();i++){
            //for
            if(nums[i]!=value) {
                nums[k] = nums[i];//instead of swap(nums[k],nums[i], should keep the rest of the array sorted
                k++;
                value = nums[i];
            }
        }
        return k;
    }
};

int main() {
    int arr[] = {0,1,1,3,3,12,12,12,21};
    //int arr[] = {};
    //int arr[] = {2};

    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
    int newSize = Solution().removeDuplicates(vec);

    cout<<newSize<<endl;

    for(int i=0;i<newSize;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}