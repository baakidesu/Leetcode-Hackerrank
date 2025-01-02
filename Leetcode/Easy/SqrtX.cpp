
#include <iostream>

int mySqrt(int x) {
        int left = 1;
        int right = x;

        int mid;

        if(x == 0) {
            return 0;
        }

        while(left <= right) {
            mid = left + (right - left) / 2;

            if(mid == x / mid) {
                return mid;
            }else if(mid > x / mid) {
                right = mid - 1;
            }else {
                left = mid + 1;
            }

        }
        return right;
}

int main() {
        std::cout << mySqrt(9);
    }