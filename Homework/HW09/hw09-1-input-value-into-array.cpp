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
    int arr[100];  // สร้างอาเรย์ที่มีขนาดสูงสุด 100 ค่า
    int n = 0;      // ตัวแปร n เก็บจำนวนข้อมูลที่ถูกเพิ่มเข้าในอาเรย์
    
    // รับข้อมูลจากผู้ใช้
    while (1) {
        printf("Input [%d]: ", n);
        int num;
        scanf("%d", &num);
        
        if (num == -1) {
            break;  // หยุดการรับข้อมูลหากผู้ใช้ป้อน -1
        }
        
        arr[n] = num;
        n++;  // เพิ่ม n เพื่อบ่งชี้ไปยังตำแหน่งถัดไปในอาเรย์
    }
    
    // แสดงผลลัพธ์
    printf("Index = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    
    printf("\nArray = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}
