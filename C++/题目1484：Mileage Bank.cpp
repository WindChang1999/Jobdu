
// 题目1484：Mileage Bank

/**
 * @author:wangzq
 * @email:wangzhenqing1008@163.com
 * @date:2015-06-30 11:01:55
 * @url:http://ac.jobdu.com/problem.php?pid=1484
 * 解题思路参考csdn:http://blog.csdn.net/u013027996/article/details/27695553
 */

#include <string.h>
#include <stdio.h>

const int maxn = 1010;
const int maxLen = 20;
char origin[maxLen];
char dest[maxLen];
char flag[maxLen];
int finalMiles;
int actualMiles;

int getAatualMiles(int actualMiles, char flag[]) {

    if (flag[0] == 'F') {
        return actualMiles * 2;
    }

    if (flag[0] == 'B') {
        int tempMiles = actualMiles % 2 == 0 ? actualMiles / 2 : actualMiles / 2 + 1;
        return tempMiles + actualMiles;
    }

    if (flag[0] == 'Y') {
        return (actualMiles >= 1 && actualMiles <= 500) ? 500 : actualMiles;
    }
}

int main() {

    while (scanf("%s", &origin) != EOF) {
        if (origin[0] == '#')break;
        if (origin[0] == '0') {
            printf("%d\n", finalMiles);
            finalMiles = 0;
            continue;
        }
        scanf("%s", &dest);
        scanf("%d", &actualMiles);
        scanf("%s", &flag);
        finalMiles += getAatualMiles(actualMiles, flag);
    }

    return 0;
}
/**************************************************************
Problem: 1484
User: wangzhenqing
Language: C++
Result: Accepted
Time:10 ms
Memory:1020 kb
****************************************************************/


                        

