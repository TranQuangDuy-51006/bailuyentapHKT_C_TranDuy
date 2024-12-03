#include<stdio.h> 

int main(){
	int arr[100];
	int chon, n, phanTuMoi, phanTuXoa, viTri, phanTu, number; 
	int menu = 1;
	int max = 0;
	int min = arr[0]; 
	int size = 0;  
	
	while(menu){
		printf("\n1. Nhap vao mang\n"); 
		printf("2. In ra mang\n"); 
		printf("3. In ra phan tu lon nhat cua mang\n"); 
		printf("4. In ra gia tri la so nguyen to\n"); 
		printf("5. Them phan tu\n");
		printf("6. Xoa phan tu\n");
		printf("7. Sap xep mang tang dan\n");
		printf("8. Tim kiem\n");
		printf("9. Thoat\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &chon);
		int search = 0;
		switch(chon){
			case 1:
			printf("nhap so phan tu cua mang: "); 
			scanf("%d", &size); 
			for(int i =0; i < size;i++){
				printf("nhap phan tu thu %d: ", i+1);
				scanf("%d", &arr[i]); 
			}
			break;
			case 2:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("\nmang cua ban la: ");
				for (int i = 0; i < size; i++) {
             	   printf("%d ", arr[i]);
            	}
            	printf("\n"); 
            break; 
            case 3:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i =0; i < size; i++){
					if(max < arr[i]){
						max = arr[i]; 
					} 	
				}
				
				printf("gia tri lon nhat la: %d", max);
				break;
			case 4:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				} 
				for(int i = 0; i < size; i++){
					int snt =arr[i];
					int check = 1; 
					if(arr[i] < 2){
						check = 0; 
					}else{
						for(int j =2; j <= snt/2;j++){
							if(snt % j == 0){
								check =0; 
							} 
						}
						if(check){
							printf("%d ", snt);
						}
						
					}
				} 
				break;
			case 5:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
            	if(size >= 100){
					printf("mang da day!"); 
				} else{
					printf("nhap vi tri muon them phan tu: ");
					scanf("%d", &viTri);
					printf("nhap phan tu muon them: ");
					scanf("%d", &phanTuMoi);
					if(viTri < 1||viTri > size +1){
						printf("vi tri khong hop le!"); 
					}else{
						for(int i = size; i >=viTri;i--){
							arr[i] = arr[i -1]; 
						} 
						arr[viTri - 1] = phanTuMoi;
						size++;	
					}
				}
				break;
			case 6:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("nhap vi tri muon xoa phan tu: ");
				scanf("%d", &viTri);
				if(viTri < 1||viTri > size +1){
					printf("vi tri khong hop le!"); 
				}else{
					for(int i = viTri - 1; i <= size;i++){
						arr[i] = arr[i + 1]; 
					} 
					size--; 
					
					printf("mang sau khi da xoa : ");
					for (int i = 0; i < size; i++) {
			            printf("%d ", arr[i]);
			        }
			        printf("\n");
					 
				}
				break; 
			case 7:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i = size; i > 0; i--){
			 		for(int j = 0; j < i;j++){
			 			if(arr[j] > arr[j+1]){
			 				int temp = arr[j];
						 	arr[j] = arr[j+1];
							arr[j+1]=temp; 
						}
					 } 
				 }
				 break;
			case 8:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("nhap vao phan tu can tim: ");
				scanf("%d", &number); 
				for(int i = 0; i < size; i++){
					if(number == arr[i]){
						printf("vi tri cua phan tu %d la: %d\n", number, i+1);
						search = 1; 
					}
				}
				if(search == 0){
					printf("khong tim thay!"); 
				}
				break; 
			case 9: 
            	menu = 0;
				break;
			default:
				printf("sai cu phap!\n"); 
		} 
	}
	printf("\nthoat"); 
	
	return 0; 
} 
