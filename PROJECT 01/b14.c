#include <stdio.h>
#define TB "XEP LOAI TB"
#define KHA "XEP LOAI KHA"
#define GIOI "XEP LOAI GIOI"
int main()
{
    float diemtoan, diemly, diemanh, DTB;
    printf("DIEM TOAN = "); scanf("%f",&diemtoan);
    printf("DIEM LY = "); scanf("%f",&diemly);
    printf("DIEM ANH = "); scanf("%f",&diemanh);
    DTB = (diemtoan + diemly + diemanh)/3;
    printf("DIEM TRUNG BINH = %.2f\n5",DTB);
    //XEP LOAI
    if(DTB>5.0 & DTB<7.0)
    {
        printf(TB);}
        else if(DTB>=7.0 & DTB<8){
            printf(KHA);
        }
        else if(DTB>=8){
            printf(GIOI);
        }
}