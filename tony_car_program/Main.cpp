#include <iostream>
#include <ranges>
#include <string_view>

int main()
{
    using namespace std::literals;
    auto v = "1Hello"sv | std::views::drop(1);
    auto msg = std::string(v.begin(), v.end());
    std::cout << msg << std::endl;
    return 0;
}
