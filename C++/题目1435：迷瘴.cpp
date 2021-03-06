
// 题目1435：迷瘴

/**
 * @author:wangzq
 * @email:wangzhenqing1008@163.com
 * @date:2015-06-30 11:01:55
 * @url:http://ac.jobdu.com/problem.php?pid=1435
 * 解题思路参考csdn:http://blog.csdn.net/u013027996/article/details/17384457
 */

#include <stdio.h>
#include <algorithm>   

using namespace std;
int c, n, v, w;
int i;

int main() {

    while (scanf("%d", &c) != EOF) {
        while (c > 0) {
            c--;
            scanf("%d %d %d", &n, &v, &w);
            int *array = new int[n];
            for (i = 0; i < n; i++) {
                scanf("%d", &array[i]);
            }
            sort(array, array + n);
            int p = 0;
            int allV = 0;
            for (i = 0; i < n; i++) {
                if ((p + array[i]) > (allV + 1) * w) {
                    break;
                }
                p += array[i];
                allV++;
            }

            if (allV == 0) {
                printf("0 0.00\n");
            } else {
                printf("%d %.2f\n", allV * v, p * 1.0 / (100 * allV));
            }
        }
    }
    return 0;
}
/**************************************************************
Problem: 1435
User: wangzhenqing
Language: C++
Result: Accepted
Time:0 ms
Memory:1024 kb
****************************************************************/


                        

