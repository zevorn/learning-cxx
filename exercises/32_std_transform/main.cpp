﻿#include "../exercise.h"
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>  // 包含 std::ostringstream

// READ: `std::transform` <https://zh.cppreference.com/w/cpp/algorithm/transform>
// READ: `std::vector::begin` <https://zh.cppreference.com/w/cpp/container/vector/begin>
auto transform_func = [](int x) -> std::string {
    std::ostringstream oss;
    oss << (x * 2);// 乘以 2 并转换为字符串
    return oss.str();
};
int main(int argc, char **argv) {
    std::vector<int> val{8, 13, 21, 34, 55};
    // TODO: 调用 `std::transform`，将 `v` 中的每个元素乘以 2，并转换为字符串，存入 `ans`
    std::vector<std::string> ans(val.size());
    std::transform(val.begin(), val.end(), ans.begin(), transform_func);
    // std::vector<std::string> ans
    ASSERT(ans.size() == val.size(), "ans size should be equal to val size");
    ASSERT(ans[0] == "16", "ans[0] should be 16");
    ASSERT(ans[1] == "26", "ans[1] should be 26");
    ASSERT(ans[2] == "42", "ans[2] should be 42");
    ASSERT(ans[3] == "68", "ans[3] should be 68");
    ASSERT(ans[4] == "110", "ans[4] should be 110");
    return 0;
}
