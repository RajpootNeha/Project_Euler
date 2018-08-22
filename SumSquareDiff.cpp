#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    long int i, sum,sum1,s;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        sum=0;
        sum1=0;
        for(i=1;i<=n;i++)
        {
            sum+=i;
            sum1+=pow(i,2);
        }
        s=pow(sum,2)-sum1;
        cout<<s<<endl;
      //  cout<<sum-sum1;
    }
    return 0;
}
