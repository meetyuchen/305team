//冒泡排序，从小到大（方向可改） 。
#include <stdio.h>
void bubble_sort(int a[], int n);   //申明函数"bubble_sort"
int number[10000000];   //在主函数外面定义数组可以更长
void bubble_sort(int a[], int n) {  //下面是函数bubble_sort的程序
	int i,j,temp;    //定义三个整型变量
	for (j=0; j<n-1; j++) { //用一个嵌套循环来遍历一遍每一对相邻元素 （所以冒泡函数慢嘛，时间复杂度高）
		for (i=0; i<n-1-j; i++) {
			if(a[i]>a[i+1]) { //从大到小排就把左边的">"改为"<" ！！！
				temp=a[i];      //a[i]与a[i+1](即a[i]后面那个) 交换
				a[i]=a[i+1];    //基本的交换原理"c=a;a=b;b=c"
				a[i+1]=temp;
			}
		}
	}
}

int main() {    //主函数
	int i,n,j;
	printf("需要排序的数字个数：\n");
	scanf("%d",&n);      //输入数字个数
	printf("输入%d个数:\n",n);
	for(j=0; j<n; j++)  //用一个for循环来输入所有数字
		scanf("%d",&number[j]) ;
	bubble_sort(number,n);   //引用函数bubble_sort
	for (i=0; i<n-1; i++) //输出传来的排序好的数组
		printf("%d ",number[i]);   //这里这么写是因为有些题有格式要求(最后一个数后面不能有空格)
	printf("%d\n",number[i]);
	return 0;
}

