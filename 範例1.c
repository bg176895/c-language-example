/*�n�D�Ʀ�ǥ͹�Ǯ��\�U�����ơA
 *���Ƭ�1����10�� (1�N��ܮt�A10�N��D�`�n)�C
 *�бN�o�ƥ��^�����@�Ӿ�ư}�C���A
 *�åB��z�����լd�����G�C
 */
#include <stdio.h>
#define response 10
#define frequency 11
/*frequency ��0��󤣥ΡA�q1�}�l�ϥΡA
 *�H�Q�έp�ɡA�����V�c�C 
 *�Gfrequency�n��response�h1�C 
 */ 
int main(){
	int freq[frequency] = {0};
	int resp[response] = {0};
	printf("�п�J�ǥͪ��^�����\n");
	int i = 0;
	for( i = 0 ;i< response; i++ ){
		scanf("%d", &resp[i]);
		++freq[resp[i]];
	}
	printf("%s%17s\n","Rating","Frequency");
	for( i = 1 ;i<frequency; i++ ){
		printf("%6d%17d\n",i,freq[i]);
	}
	system("pause");
	return 0;
}
