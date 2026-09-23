#include <vector>
using namespace std;

vector <int> nums ={1,2,3};

nums.push_back(4);


for(int x : nums) {
    cout << x << " ";
}