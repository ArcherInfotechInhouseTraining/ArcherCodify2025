 class Solution {
    int missingNumber(int arr[]) {
        int n = arr.length + 1;
        int xorFull = 0; 
        int xorArray = 0; 
        for (int i = 1; i <= n; i++) { 
            xorFull ^= i; 
        } 
        for(int num : arr) { 
            xorArray ^= num; 
        }
        return xorFull ^ xorArray;
    }
}