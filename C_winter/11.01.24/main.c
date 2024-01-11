#include <stdio.h>
extern unsigned random_i(void);
extern double random_f(void);
extern int MOD; // extern 사용하여 변수 M 외부 연결됨
int main(void)
{
int i;
MOD = 32767; // 외부 연결된 M값 32767로 변경
for (i = 0; i < 10; i++)
printf("%d ", random_i());
return 0;
}
