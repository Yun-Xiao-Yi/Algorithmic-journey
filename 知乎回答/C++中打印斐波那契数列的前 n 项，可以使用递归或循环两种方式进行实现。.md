C++中打印斐波那契数列的前 n 项，可以使用递归或循环两种方式进行实现。

方法一：递归

使用递归方式，代码比较简单易懂，但是由于存在大量重复计算，效率会比较低。

```c++
#include <iostream>

using namespace std;

int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) cout << fib(i) << " ";
    cout << endl;
    return 0;
}
```

方法二：循环

使用循环方式，可以避免递归过程中的重复计算，效率更高。注意需要使用long long类型，以避免在计算过程中出现溢出。

```c++
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long f1 = 0, f2 = 1;
    for(int i = 0; i < n; ++i)
    {
        cout << f1 << " ";
        long long t = f2;
        f2 += f1;
        f1 = t;
    }
    cout << endl;
    return 0;
}
```

综上，使用循环方式实现斐波那契数列的前n项输出是比较好的选择，代码简单、易懂，并且效率较高。