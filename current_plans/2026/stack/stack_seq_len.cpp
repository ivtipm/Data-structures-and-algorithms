#include <iostream>
#include <stack>
#include <vector>

/// Определение длин возрастающих последовательностей
std::vector<int> FindingSpans(int A[], int n) {

    std::stack<int> D;
    int P;
    std::vector<int> S(n);                    // массив для хранения результатов

    for (int i = 0; i < n; i++) {
        while (!D.empty() && A[i] >= A[D.top()])
            D.pop();

        if (D.empty())
            P = -1;
        else
            P = D.top();

        S[i] = i - P;

        D.push(i);
    }

    return S;
}



int main() {


    int A[] = {1,2,9,4,5};

    std::vector<int> result = FindingSpans(A, 5);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    puts("");
    return 0;
}
