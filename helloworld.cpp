#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <iterator>
#include <functional>
#include <iterator>
#include <map>
#include <set>
#include <memory>
#include <functional>

using namespace std;

void foo(initializer_list<int> list)
{
    for (auto i = list.begin(); i != list.end(); ++i)
    {
        /* code */
        cout << *i << endl;
    }
    
}

void (*foo1)(initializer_list<int>) = foo;

int a[10];
int *a1 = a;

//C++ 11返回数组指针的写法1
auto func1(int a) -> int (*)[10]
{

}

//C++ 11返回数组指针的写法2
int arr[10];
decltype(arr) *func2(int a)
{

}

int main()
{
    vector<string> msg  = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    //C++ 11新写法
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 1; i < 5; ++i)
    {
        sum += i;
    }

    cout << sum << endl;
    
    int a = 3, b = 4;
    foo({a,b});

    foo1({3,4});


    //容器
    vector<string> vec;
    auto it = vec.cbegin();
    
    vec.emplace_back("123");
    for (auto i = vec.cbegin(); i != vec.cend(); ++i)
    {
        /* code */
        cout << *i << endl;
    }
    
    //泛型算法
    vector<string> algoTest = {"123","456", "789"};
    auto res1 = find(algoTest.begin(), algoTest.end(), "111");
    auto res2 = count(algoTest.begin(), algoTest.end(), "111");

    vector<string> algoTest1;
    fill_n(back_inserter(algoTest1), 10, "1");

    for(const auto &i : algoTest1)
    {
        cout << i << "";
    }
    cout << endl;

    //标准库函数
    plus<int> intAdd;
    modulus<int> intModulus;

    //高级编程

    
    return 0;
}
