#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <iterator>
#include <vector>

using namespace std;

bool caseless(string const &left, string const &right)
{
    return strcasecmp(left.c_str(), right.c_str()) < 0;
}
int main()
{
    vector<string> vector1, vector2;
    string set1[] = { "asset", "group", "type", "price",
                      "risk", "feature", "benchmark" };
    string set2[] = { "asset", "group", "component"};
    string result[7];
    string *returned;

    /*
     * Set Intersection*/
    copy(result,
         set_intersection(set1, set1 + 7, set2, set2 + 3, result),
         ostream_iterator<string>(cout, " "));
    cout << '\n';

    /*
     * Asymmetric difference*/

    copy(result,
         set_symmetric_difference(set1, set1 + 7, set2, set2 + 3,
                                  result),
         ostream_iterator<string>(cout, " "));
    cout << '\n';

    /*
     * Set Union*/

    copy(result,
         set_union(set1, set1 + 7, set2, set2 + 3, result),
         ostream_iterator<string>(cout, " "));
    cout << '\n';
}