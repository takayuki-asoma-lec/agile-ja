#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*----これらの関数を変更する必要はありません----*/

bool contains(const std::string& name, const std::vector<std::string>& list_of_names) {
    return std::find(list_of_names.begin(), list_of_names.end(), name) != list_of_names.end();
}

void add_name(const std::string& name, std::vector<std::string>& list_of_names) {
    list_of_names.push_back(name);
}

int add_two(int num) {
    return num + 2;
}

double divide_by_two(double num) {
    return num / 2;
}

std::string greeting(const std::string& name, double num) {
    std::string message{"Hello, " + name + ". It is " + std::to_string(num) + " degrees warmer today than yesterday"};
    return message;
}

/*----ここにコードを書いてください----*/
/*----難易度: 富士----*/

// `my_assert` をここに定義し、以降のテストに使用してください。
void my_assert(bool expr, std::string msg)
{
    if (!expr)
    {
        throw std::runtime_error(msg);
    }
}

// `contains` 用のテスト `test_contains` を作成してください
void test_contains()
{
    const std::vector<std::string> fruits{"apple", "banana", "orange"};
    my_assert(contains("apple", fruits), "test_contains() failed. `apple` is contained in the `fruits`");
    my_assert(!contains("lemon", fruits), "test_contains() failed. `lemon` is not contained in the `fruits`");
}

// `add_name` 用のテスト `test_add_name` を作成してください
void test_add_name()
{
    std::vector<std::string> names{"A", "B", "C"};
    const std::string new_name = "D";
    add_name(new_name, names);
    my_assert(names.size() == 4U, "test_add_name() failed. `new_name` should be added to `names`");
    my_assert(contains(new_name, names), "test_add_name() failed. `new_name` should be added to `names`");
}

// `add_two` 用のテスト `test_add_two` を作成してください
void test_add_two()
{
    my_assert(add_two(3) == 5, "test_add_two failed.");
}

// `divide_by_two` 用のテスト `test_divide_by_two` を作成してください
void test_divide_by_two()
{
    my_assert(divide_by_two(3.0) == 1.5, "test_devide_by_two failed.");
}

// `greeting` 用のテスト `test_greeting` を作成してください
void test_greeting()
{
    const std::string expected = "Hello, Tom. It is 3.000000 degrees warmer today than yesterday";
    my_assert(greeting("Tom", 3.0) == expected, "test_greeting failed");
}

int main()
{
    test_contains();
    test_add_name();
    test_add_two();
    test_divide_by_two();
    test_greeting();
    return 0;
}

/*----難易度: キリマンジャロ----*/

// `my_assert` 用のテスト `test_my_assert_false` を作成し、式がfalseと評価されたときに指定したオプションの `msg` を適切に返すかどうかをチェックしてください。

// `my_assert` 用のテスト `test_my_assert_true` を作成し、式がtrueと評価されたときに適切に処理するかどうかをチェックしてください。
