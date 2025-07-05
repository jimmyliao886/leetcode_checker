#include "leetcode.h"
#include <functional>

int main() {
    vector<Solution*> solutions;
    for (auto& create : creators) {
        solutions.push_back(create());
    }

    for (auto sol : solutions) {
        sol->run();
        printf("------------------------------\n");
        delete sol;
    }
    return 0;
}