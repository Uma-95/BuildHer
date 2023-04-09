
/*Easy 3
Given an integer numRows, return the first numRows of Pascal's triangle.

Example 1:Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:Input: numRows = 1
Output: [[1]]

Constraints:
1 <= numRows <= 30
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generatePascalTriangle(int numRows) {
    vector<vector<int>> triangle(numRows);
        //outer loop-->each row of the triangle
    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        //inner loop-->each element of the current row.
        for (int j = 1; j < i; j++) {
        // calculate the value by adding the element above and to the left and the element above and to the right.
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}

int main() {
    int numRows = 30;
    vector<vector<int>> triangle = generatePascalTriangle(numRows);

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


