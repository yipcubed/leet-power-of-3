#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <cmath>


using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    // no looping
    // pow(3, 19) is largest 3^x that is less than Max_INT
    bool isPowerOfThree(int n) {
      return n > 0 && 
            static_cast<int>(pow(3, 19)) % n == 0;
    }

    //  faster than 97.67%
    bool isPowerOfThreeOld(int n) {
      if (n == 0) return false;
      while (n % 3 == 0)
        n /= 3;
      return n == 1;
    }
};

void test1() {
  Solution S;
  cout << boolalpha;
  cout << "27t? " << S.isPowerOfThree(27) << endl;
  cout << "28f? " << S.isPowerOfThree(28) << endl;
  cout << "9t? " << S.isPowerOfThree(9) << endl;
  cout << "45f? " << S.isPowerOfThree(45) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

