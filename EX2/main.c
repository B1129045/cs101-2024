#include <stdio.h>

int main(){
    FILE* fp;
    int a_write[3] = {0,1,2};
    int a_read[3];
    char b_write[3] = "ABC";
    char b_read[3];
    float c_write[3] = {1.1 , 1.2 , 1.3};
    float c_read[3];

    fp = fopen("a.bin" , "wb+");
    fwrite(a_write , sizeof(int) , 3 , fp);
    fseek(fp , 0 , SEEK_SET);
    fread(a_read , sizeof(int) , 3 , fp);
    for(int i = 0 ; i < 3 ; i++){
        printf("%d " , a_read[i]);
    }
    printf("\n");

    fp = fopen("a.bin" , "wb+");
    fwrite(b_write , sizeof(char) , 3 , fp);
    fseek(fp , 0 , SEEK_SET);
    fread(b_read , sizeof(char) , 3 , fp);
    for(int j = 0 ; j < 3 ; j++){
        printf("%c " , b_read[j]);
    }
    printf("\n");
    fclose(fp);

    fp = fopen("a.bin" , "wb+");
    fwrite(c_write , sizeof(float) , 3 , fp);
    fseek(fp , 0 , SEEK_SET);
    fread(c_read , sizeof(float) , 3 , fp);
    for(int k = 0 ; k < 3 ; k++){
        printf("%f " , c_read[k]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
