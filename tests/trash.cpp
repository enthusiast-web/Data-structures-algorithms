#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << 100 << " " << 1000 << endl;
    for (int i = 0; i < 1000; i++)
    {
        cout << rand() % 100 << " " << rand() % 100 << " " << rand() % 100 << " ";
    }
    cout << 0;
}