class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // binary search
        int start = 0;
        int end = arr.size() - 1;
        int mid = arr.size() / 2;

        // cout << low << " " << up << " " << cur << endl;
        while (true) {

            //left side of mountain
            if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]) {
                start = mid;
                mid = (start + end) / 2;
            }

            //right side
            else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1]) {
                end = mid;
                mid = (start + mid) / 2;
            }
            else {
                return mid;
            }
        }
    }
};