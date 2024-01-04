class Solution {
public:
    static int search(std::vector<int>& a, int target) {
        int n = a.size();
        int l = 0;
        int h = n - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (a[mid] == target) {
                return mid;
            } else if (a[mid] < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        return -1;
    }
};