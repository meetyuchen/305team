//ð�����򣬴�С���󣨷���ɸģ� ��
#include <stdio.h>
void bubble_sort(int a[], int n);   //��������"bubble_sort"
int number[10000000];   //�����������涨��������Ը���
void bubble_sort(int a[], int n) {  //�����Ǻ���bubble_sort�ĳ���
	int i,j,temp;    //�����������ͱ���
	for (j=0; j<n-1; j++) { //��һ��Ƕ��ѭ��������һ��ÿһ������Ԫ�� ������ð�ݺ������ʱ�临�Ӷȸߣ�
		for (i=0; i<n-1-j; i++) {
			if(a[i]>a[i+1]) { //�Ӵ�С�žͰ���ߵ�">"��Ϊ"<" ������
				temp=a[i];      //a[i]��a[i+1](��a[i]�����Ǹ�) ����
				a[i]=a[i+1];    //�����Ľ���ԭ��"c=a;a=b;b=c"
				a[i+1]=temp;
			}
		}
	}
}

int main() {    //������
	int i,n,j;
	printf("��Ҫ��������ָ�����\n");
	scanf("%d",&n);      //�������ָ���
	printf("����%d����:\n",n);
	for(j=0; j<n; j++)  //��һ��forѭ����������������
		scanf("%d",&number[j]) ;
	bubble_sort(number,n);   //���ú���bubble_sort
	for (i=0; i<n-1; i++) //�������������õ�����
		printf("%d ",number[i]);   //������ôд����Ϊ��Щ���и�ʽҪ��(���һ�������治���пո�)
	printf("%d\n",number[i]);
	return 0;
}

