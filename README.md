

# C 语言学习 (C Language Learning)

这是一个基于 CS50 课程内容的 C 语言学习项目，包含了多个基础 C 语言编程示例和练习。

## 项目简介

本项目收集了 C 语言编程的入门级示例，涵盖了 C 语言的基本语法、数据类型、控制结构、函数定义、结构体等核心概念。这些示例非常适合 C 语言初学者学习和实践。

## 目录结构

```
CS50/
├── agree.c          # 命令行参数示例
├── argv.c           # argv 参数处理
├── block1.c         # 代码块示例 1
├── block2.c         # 代码块示例 2
├── cough0.c         # 咳嗽函数示例 (无参数)
├── cough1.c         # 咳嗽函数示例 (带参数)
├── cough3.c         # 咳嗽函数示例 (循环调用)
├── exit.c           # 程序退出示例
├── float.c          # 浮点数类型
├── for.c            # for 循环示例
├── hi.c             # Hello World 示例
├── mario2.c         # 马里奥金字塔示例
├── names.c          # 字符串数组示例
├── numbers.c        # 数字处理示例
├── overflow.c       # 整数溢出示例
├── phonebook.c      # 电话簿结构体示例
├── scores.c         # 数组与函数示例
├── string.c         # 字符串处理示例
├── switch1.c        # switch 语句示例
├── uppercase.c      # 大小写转换示例
└── output/          # 编译后的可执行文件
```

## 主要内容

### 基础语法
- **变量与数据类型**: `float.c`, `numbers.c`
- **控制结构**: `for.c`, `switch1.c`, `block1.c`, `block2.c`
- **函数定义**: `cough0.c`, `cough1.c`, `cough3.c`, `scores.c`

### 进阶主题
- **命令行参数**: `agree.c`, `argv.c`, `exit.c`
- **字符串处理**: `string.c`, `names.c`, `uppercase.c`
- **结构体**: `phonebook.c`
- **整数溢出**: `overflow.c`

## 编译与运行

### 编译单个文件

```bash
gcc -o output/filename filename.c
```

例如编译 `hello.c`:

```bash
gcc -o output/hi CS50/hi.c
./output/hi
```

### 运行示例

```bash
# 编译并运行 hi.c
gcc -o hi CS50/hi.c
./hi

# 编译并运行 mario2.c
gcc -o mario2 CS50/mario2.c
./mario2
```

## 学习建议

1. **从基础开始**: 建议先阅读 `hi.c` 了解 C 程序的基本结构
2. **循序渐进**: 按照目录顺序学习，逐步掌握更多语法
3. **动手实践**: 尝试修改代码并观察输出变化
4. **理解原理**: 关注整数溢出等底层概念，有助于深入理解 C 语言

## 许可证

本项目采用 MIT 许可证，详情请参阅 [LICENSE](LICENSE) 文件。

## 参考资料

本项目代码主要参考自 [CS50](https://cs50.harvard.edu/x/) 课程，这是哈佛大学最受欢迎的计算机科学入门课程。