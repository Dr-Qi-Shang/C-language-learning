# C语言学习仓库

这是一个以小程序练习为核心的 C 语言学习仓库，内容主要分为两部分：一部分是 CS50 风格的基础练习，另一部分是 LeetCode 算法题实现。

## 仓库概览

- `CS50/`：语法基础、流程控制、字符串、指针、结构体、文件操作、递归等练习
- `LeetCode/`：算法题函数实现与不同解法对比
- `README.md` / `README.en.md`：中英文文档

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
│  ├─ jpeg.c
│  ├─ mario2.c
│  ├─ memory.c
│  ├─ names.c
│  ├─ noswap.c
│  ├─ numbers.c
│  ├─ overflow.c
│  ├─ phonebook(2).c
│  ├─ phonebook.c
│  ├─ recursion(递归).c
│  ├─ scnaf.c
│  ├─ scores.c
│  ├─ string.c
│  ├─ swap.c
│  ├─ uppercase.c
│  └─ output/
│     ├─ phonebook.csv
│     └─ *.exe
├─ LeetCode/
│  ├─ 136.c
│  ├─ 27.c
│  ├─ 283(1).c
│  ├─ 283(2).c
│  ├─ 344.c
│  └─ 704.c
├─ README.md
├─ README.en.md
└─ LICENSE
```

## CS50 文件说明

| 文件 | 主题 |
|------|------|
| `address.c` | 通过指针偏移访问字符串中的字符 |
| `agree.c` | 读取单字符并进行 `y/n` 分支判断 |
| `argv.c` | 命令行参数数量判断与参数读取 |
| `compare.c` | `malloc` 分配字符串缓冲区并读取输入 |
| `copy.c` | 使用 `malloc` + `strcpy` 深拷贝字符串，并修改副本 |
| `cough0.c` | 用多条 `printf` 重复输出 |
| `cough1.c` | 无参函数声明、定义与循环调用 |
| `cough3.c` | 带参函数与嵌套循环输出 |
| `exit.c` | 参数校验与退出状态码返回 |
| `float.c` | 浮点输入、除法与高精度打印 |
| `for.c` | `for` 循环基础示例 |
| `hi.c` | 字符与 ASCII 整数值对应 |
| `iteration(迭代).c` | 用迭代方式打印高度三角形 |
| `jpeg.c` | 读取文件头并判断 JPEG 签名字节 |
| `mario2.c` | `do-while` 输入校验后输出一行字符 |
| `memory.c` | `malloc`/`free` 的基本内存管理示例 |
| `names.c` | 字符串数组线性查找（`strcmp`） |
| `noswap.c` | 值传递交换失败示例 |
| `numbers.c` | 整数数组线性查找示例 |
| `overflow.c` | 通过连续倍增演示整数溢出 |
| `phonebook(2).c` | 追加写入 `phonebook.csv`（姓名与号码） |
| `phonebook.c` | `struct` 数组与姓名查找电话号码 |
| `recursion(递归).c` | 用递归方式打印高度三角形 |
| `scnaf.c` | 字符数组输入与字符串输出示例 |
| `scores.c` | 变长数组读分数并计算平均值 |
| `string.c` | `fgets` 输入与逐字符输出 |
| `swap.c` | 指针传参实现交换 |
| `uppercase.c` | 基于 ASCII 范围进行小写转大写 |

## LeetCode 文件说明

| 文件 | 题目 | 主要思路 |
|------|------|----------|
| `136.c` | 只出现一次的数字 | 利用异或性质，时间复杂度 $O(n)$，额外空间 $O(1)$ |
| `27.c` | 移除元素 | 双指针原地交换，把不等于 `val` 的元素前移 |
| `283(1).c` | 移动零 | 通过多轮交换把非零元素逐步前移，思路直观但效率一般 |
| `283(2).c` | 移动零 | 双指针原地交换，保留非零元素相对顺序，时间复杂度 $O(n)$ |
| `344.c` | 反转字符串 | 首尾双指针交换字符，原地完成反转 |
| `704.c` | 二分查找 | 在有序数组上进行二分搜索，时间复杂度 $O(log n)$ |

## 编译与运行

### Windows PowerShell（GCC）

```powershell
Set-Location .\CS50
gcc -std=c11 -Wall -Wextra -o .\output\scores.exe .\scores.c
.\output\scores.exe
```

### Linux/macOS

```bash
cd CS50
gcc -std=c11 -Wall -Wextra -o scores scores.c
./scores
```

### 特殊文件名（含括号/中文）

建议在命令中使用引号：

```powershell
gcc -std=c11 -Wall -Wextra -o .\output\iteration.exe ".\iteration(迭代).c"
gcc -std=c11 -Wall -Wextra -o .\output\recursion.exe ".\recursion(递归).c"
gcc -std=c11 -Wall -Wextra -o ".\output\phonebook(2).exe" ".\phonebook(2).c"
```

### LeetCode 文件本地测试

`LeetCode/` 中多数文件是在线评测函数实现，通常不包含 `main`，本地调试时请额外编写测试入口并与目标文件一起编译。

## 备注

- `CS50/output/` 目录下包含示例编译产物（`.exe`）与 `phonebook.csv`。
- `overflow.c` 使用了 `unistd.h`，更推荐在 GCC 兼容环境（MinGW/WSL/Linux/macOS）下编译。
- `LeetCode/` 中的文件通常是在线评测风格的函数实现，本地测试时需要额外补充 `main` 或测试代码。

## 许可证

请查看 `LICENSE` 获取详细许可信息。
