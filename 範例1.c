/*要求數位學生對學校餐廳打分數，
 *分數為1分到10分 (1代表很差，10代表非常好)。
 *請將這數份回應放到一個整數陣列中，
 *並且整理此項調查的結果。
 */
#include <stdio.h>
#define response 10
#define frequency 11
/*frequency 的0丟棄不用，從1開始使用，
 *以利統計時，不易混淆。 
 *故frequency要比response多1。 
 */ 
int main(){
	int freq[frequency] = {0};
	int resp[response] = {0};
	printf("請輸入學生的回應資料\n");
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
