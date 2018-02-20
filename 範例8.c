#include <stdio.h>
#include <stdlib.h>
int main (){
int x = 0, y = 0, z = 0, t = 0, u = 0;
while(scanf("%d%d%d%d%d", &x, &y, &z, &t, &u)!=EOF){
	if(x >= y){
		if(x >= z){
 			if(x >= t){
 				if(x >= u){
					 printf("MAX%d\n", x);
				 }
 				else{
 					printf("MAX%d\n", u);
 				}
 			}
 			else{
 				if(t >= u){
 					printf("MAX%d\n", t);
				 }
				 else{
					 printf("MAX%d\n", u);
				 }
			 }
		 }
 		else{
 			if(z >= t){
 				if(z >= u){
 					printf("MAX%d\n", z);
				 }
			 }
 			else{
 				if(t >= u){
					 printf("MAX%d\n", t);
				 }
 				else{
 					printf("MAX%d\n", u);
				 }
			 }
 		}
 	} 
 	else{
 		if(y >= z){
 			if(y >= t){
				if(y >= u){
					 printf("MAX%d\n", y);
				 }
 				else{
 					printf("MAX%d\n", u);
				 }
			 }
 			else{
 				if (t >= u){
 					printf("MAX%d\n", t);
				 }
 				else{
 					printf("MAX%d\n", u);
				}
			}
 		}
 		else{
 			if(z >= t){
				if(z >= u){
 					printf("MAX%d\n", z);
				}
				else{
					printf("MAX%d\n", u);
 				}
 			}
 			else{
				if(t >= u){
					printf("MAX%d\n", t);	
				}
 				else{
					printf("MAX%d\n", u);
 				}
 			}
 		}
 	}
	if(x <= y){
		if(x <= z){
			if(x<= t){
				if(x <= u){
					printf("min%d\n", x);
				}
				else{
					printf("min%d\n", u);
				}
			}
			else{
				if(t <= u){
					printf("min%d\n", t);
				}
				else{
					printf("min%d\n", u);
				}
			}
		}
		else{
			if(z <= t){
				if(z <= u){
					printf("min%d\n", z);
				}
			}
 			else{
				if(t <= u){
					printf("min%d\n", t);
				}
				else{
					printf("min%d\n", u);
				}
			}
		}
	}
	else{
		if(y <= z){
			if(y <= t){
				if(y <= u){
					printf("min%d\n", y);
				}
				else{
					printf("min%d\n", u);
				}
			}
			else{
				if (t <= u){
					printf("min%d\n", t);
				}
				else{
					printf("min%d\n", u);
				}
			}
		}
		else{
			if(z <= t){
				if(z <= u){
					printf("Min%d\n", z);
				}
				else{
					printf("min%d\n", u);
				}
			}
			else{
				if(t <= u){
					printf("min%d\n", t);
				}
				else{
					printf("min%d\n", u);
				}
			}
		}
	}
}
return 0;
}
