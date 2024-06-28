#include <stdio.h>

int main(){

//  int l;
//  printf("Enter the Array Length: ");
//  scanf("%d", &l);
  
//  int arr[l];
//  for (int i=0; i<l; i++) scanf("%d",&arr[i]);
  
  long long int arr[] = {90,50,40,100,20,4,10,25,1,100};
  int l = sizeof(arr) / sizeof(arr[0]);
  
  int count =0;
  
  for (int i=0; i<l-1; i++) for (int j=i+1; j<l; j++) if (arr[i] > arr[j]<<1)  count++;
      
  printf("%d", count);
}

/*
#include <vector>
using namespace std;

class Solution {
public:
    int merge(vector<int>& nums, int low, int mid, int high) {
        int count = 0;
        int j = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (j <= high && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        vector<int> temp;
        int left = low, right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }
        while (left <= mid) {
            temp.push_back(nums[left++]);
        }
        while (right <= high) {
            temp.push_back(nums[right++]);
        }
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
        return count;
    }

    int mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return 0;
        }
        int mid = (low + high) / 2;
        int inversions = mergeSort(nums, low, mid) + mergeSort(nums, mid + 1, high) + merge(nums, low, mid, high);
        return inversions;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
*/
