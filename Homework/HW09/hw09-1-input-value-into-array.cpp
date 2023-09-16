/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/
#include <stdio.h>

int main() {
    int arr[100]; // สร้างอาเรย์เพื่อเก็บข้อมูล 100 ค่า (คุณสามารถปรับขนาดตามต้องการ)
    int N = 0;

    printf("Enter elements into the array (enter -1 to stop):\n");
    int input;

    do {
        scanf("%d", &input);

        if (input == -1) {
            break;
        }

        arr[N] = input;
        N++;
    } while (N < 100);

    printf("Index = ");
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
    }

    printf("\nArray = ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
