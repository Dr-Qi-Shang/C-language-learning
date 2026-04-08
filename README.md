# C语言学习仓库

这是一个以小程序练习为核心的 C 语言学习仓库，内容主要来自 CS50 风格示例，并补充了少量 LeetCode 题解代码。

## 仓库内容

- `CS50/`：覆盖输入输出、循环、函数、字符串、结构体、递归等基础主题
- `LeetCode/`：算法题函数实现（136 与 704）
- `README.md` 与 `README.en.md`：中英文说明文档

## 目录结构

```text
C-language-learning/
├─ CS50/
│  ├─ address.c
│  ├─ agree.c
│  ├─ argv.c
│  ├─ compare.c
│  ├─ copy.c
│  ├─ cough0.c
│  ├─ cough1.c
│  ├─ cough3.c
│  ├─ exit.c
│  ├─ float.c
│  ├─ for.c
│  ├─ hi.c
│  ├─ iteration(迭代).c
│  ├─ mario2.c
│  ├─ names.c
│  ├─ numbers.c
│  ├─ overflow.c
│  ├─ phonebook.c
│  ├─ recursion(递归).c
│  ├─ scores.c
│  ├─ string.c
│  ├─ uppercase.c
│  └─ output/
├─ LeetCode/
│  ├─ 136.c
│  └─ 704.c
├─ README.md
├─ README.en.md
└─ LICENSE
```

## CS50 文件说明

| 文件 | 主题 |
|------|------|
| `address.c` | 指针偏移访问字符串字符 |
| `agree.c` | 单字符输入分支判断（`y`/`n`） |
| `argv.c` | 命令行参数读取与使用 |
| `compare.c` | `malloc` 动态分配与字符串输入 |
| `copy.c` | `malloc` + `strcpy` 进行深拷贝 |
| `cough0.c` | 使用 `printf` 直接重复输出 |
| `cough1.c` | 无参函数声明、定义与调用 |
| `cough3.c` | 带参函数与循环输出 |
| `exit.c` | 参数校验与退出状态码返回 |
| `float.c` | 浮点输入、除法与高精度输出 |
| `for.c` | `for` 循环基础示例 |
| `hi.c` | 字符与 ASCII 整数值输出 |
| `iteration(迭代).c` | 用迭代方式绘制三角形 |
| `mario2.c` | `do-while` 输入校验与输出 |
| `names.c` | 字符串数组线性查找 |
| `numbers.c` | 整数数组线性查找 |
| `overflow.c` | 通过倍增演示整数溢出 |
| `phonebook.c` | 结构体数组与姓名查找 |
| `recursion(递归).c` | 用递归方式绘制三角形 |
| `scores.c` | 变长数组与平均值计算函数 |
| `string.c` | `fgets` 读入与逐字符输出 |
| `uppercase.c` | 基于 ASCII 的小写转大写 |

## LeetCode 文件说明

| 文件 | 题目 | 思路 |
|------|------|------|
| `136.c` | 只出现一次的数字 | 利用异或性质，时间复杂度 $O(n)$，额外空间 $O(1)$ |
| `704.c` | 二分查找 | 在有序数组上二分，时间复杂度 $O(log n)$ |

## 编译与运行

### Windows PowerShell（GCC）

```powershell
Set-Location .\CS50
gcc -std=c11 -Wall -Wextra -o scores.exe scores.c
.\scores.exe
```

### Linux/macOS

```bash
cd CS50
gcc -std=c11 -Wall -Wextra -o scores scores.c
./scores
```

### 特殊文件名说明

`iteration(迭代).c` 与 `recursion(递归).c` 含有括号和中文字符，建议在命令中使用引号：

```bash
gcc -std=c11 -Wall -Wextra -o iteration "iteration(迭代).c"
gcc -std=c11 -Wall -Wextra -o recursion "recursion(递归).c"
```

## 备注

- `CS50/` 下大多数程序是可独立编译运行的小示例，通常从标准输入读取数据。
- `LeetCode/` 下文件是在线评测风格的函数实现，本地运行时需要自行补充 `main` 测试代码。
- `overflow.c` 使用了 `unistd.h`，更推荐在 GCC 环境（如 MinGW/WSL/Linux/macOS）下编译。

## 许可证

请查看 `LICENSE` 获取详细许可信息。
