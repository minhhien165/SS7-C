#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,j,sum,chc3,snt,shh;
	int factorial,res,tmp;
	do{
		printf("nhap so nguyen n: ");
		scanf("%d",&n);
		printf("INTEGER NUMBER\n");
		printf("1. In ra day so co gia tri nho hon hoac bang n và tinh tong\n");
		printf("2. In ra va dem cac so chia het cho 3 nho hon n\n");
		printf("3. Kiem tra n co phai so nguyen to khong\n");
		printf("4. Kiem tra n co phai so hoan hao khong\n");
		printf("5. Tinh tong cac uoc so cua n\n");
		printf("6. Tinh giai thua n\n");
		printf("7. In ra cac so dao nguoc cua n\n");
		printf("8. In ra cac so nguyen to tu 1->n\n");
		printf("9. Thoat\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				sum=0;
				for(i=n;i>0;i--){
					printf("%d\t",i);
					sum+=i;
				}
				printf("\nTong cua day so <=n la: %d\n",sum);
			break;
			case 2:
				chc3 = 0;
			for(i=n;i>0;i--){
					if(i%3==0){
						printf("%d\t",i);
						chc3++;
					}
				}
				printf("\nco tat ca %d so chia het cho 3 nho hon n\n",chc3);
			break;
			case 3:
				snt = 0;
				for(i=n;i>0;i--){
					if(n%i==0){
						snt++;
					}
				}if(snt<=2){
					printf("%d la so nguyen to\n",n);
				}else printf("%d khong la so nguyen to\n",n);
			break;
			case 4:
				shh = 0;
				for(i=n-1;i>0;i--){
					if(n%i==0){
						shh+=i;
					}
				}if(shh==n){
					printf("%d la so hoan hao\n",n);
				}else printf("%d khong la so hoan hao\n",n);
			break;
			case 5:
				sum = 0;
				for(i=n-1;i>0;i--){
					if(n%i==0){
						sum+=i;
					}
			    }
			    printf("Tong cac uoc so cua %d la: %d\n",n,sum);
			break;
			case 6:
				factorial = 1;
				for(i=n;i>1;i--){
					factorial=factorial*i;
				}
				printf("Giai thua n bang:%d\n",factorial);
			break;
			case 7:
				res = 0;
                while(n > 0){
                    tmp = n % 10;
                    res = res * 10 + tmp;
                    n = n / 10;
                }
                printf("So dao nguoc cua n la: %d\n",res);
            break;
            case 8:
               	do{
               		for(j=1;j<=i;j++){
					    if(i%j==0){
						    snt++;
					    }
					    if(snt<=2){
					        printf("%d\t",i);
					    }
			        }
			        i++;
			    }while(i<n);
			break;
			case 9:
				exit(9);
			default:
				printf("vui long chon so tu 1-9\n");
		}
	} while("vui long chon so tu 1-9\n");
}