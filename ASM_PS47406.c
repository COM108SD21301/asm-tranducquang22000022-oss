#include <stdio.h> 
#include <math.h>
#include <stdlib.h>//Thieu thu vien se bi canh bao ve ham Exit

int main(){
	int luaChon; //kiểu số nguyên
	do{
		printf("\nChào mừng bạn đến với ASM của tôi");
		printf("\nNhập 1: Lựa chọn chức năng Số nguyên");
		printf("\nNhập 2: Lựa chọn chức năng tìm UCLN và BCNN");
		printf("\nNhập 3: Lựa chọn chức năng Tính tiền quán Karaoke");
		printf("\nNhập 4: Lựa chọn chức năng Tính tiền điện");
		printf("\nNhập 0: Thoát chương trình");
		printf("\nMời bạn nhập lựa chọn: ");	scanf("%d",&luaChon);
		switch(luaChon){
			case 1:{
                printf("Bạn chọn CN1\n");
                float x;
                printf("Giá trị của x: ");
                scanf("%f", &x);
				if(x==(int)x){
					printf("%.0f là số nguyên\n", x);
					for(int i=1; i<=x/2; i++){
						if(i*i==x){
							printf("%.0f la so chinh chinh phuong\n",x);
				
						}
					}
					int xlasonguyento= 1;
					for (int i = 2; i <=sqrt(x); i++){
						if ((int)x%i==0){
							xlasonguyento=0;
						}
			
					}
					if(xlasonguyento==1)printf("%.0f la so nguyen to",x);
					else printf("%.0f khong phai la so nguyen to", x);	
					}
                else printf("%.2f là số thực\n", x);
                break;
			}case 2:{
				printf("Bạn chọn CN2\n");
				break;
			}
			case 3:{ 
				printf("Bạn chọn CN3\n");
				int start, end;
				double total = 0;

				printf("Nhap gio bat dau (12 - 23): ");
				scanf("%d", &start);

				printf("Nhap gio ket thuc (12 - 23): ");
				scanf("%d", &end);

				int hours = end - start;

				if (hours <= 0) {
					printf("Thoi gian khong hop le!");
					return 0;
				}

				if (hours <= 2) {
					total = hours * 40000;
				} else {
					total = 2 * 40000 + (hours - 2) * 28000;
				}

				if (hours > 5) {
					total *= 0.9;  // giam 10%
				}

				printf("Tong tien karaoke: %.0f VND", total);
				break;	//Ket thuc chuc nang 3
			}case 4:{
				printf("Bạn chọn CN4\n");
				break; //Ket thuc chuc nang 4
			}case 6:{//Lai suat co dinh 5%, thoi gian tra no la 12 thang
                printf("Bạn chọn CN6\n");
				break; //Ket thuc chuc nang 6
			}case 8:{
				//add 8.2 vào đây
                printf("Bạn chọn CN8\n");
				break; //Ket thuc chuc nang 8
			}case 0:{ //Ket thuc 
				return 0;
			}default: printf("\nYou chose wrong\n"); break;  
		}

	}while(luaChon !=0 );
	// Dừng màn hình
    system("pause"); // hoặc getchar();
	return 0;
}