#include<stdio.h>

int main(int argc, char const *argv[])
{
    int column =20;
    int row = 20;
    int arr[row][column];
    int height = 10;
    int canh = height * 2 -1;
    int middle = (int)canh / 2;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < canh; j++)
        {
            if(i == 0){
                if(j == middle){
                    arr[i][j] = 1;
                    printf("%d",arr[i][j]);
                }
                else
                {
                    arr[i][j] = 0;
                    printf(".");
                }
                
            }
            else if(i == height - 1){
                if(j == 0){
                    arr[i][j] = 1;
                    printf("%d",arr[i][j]);

                }
                else if(j == canh -1){
                    arr[i][j] = 1;
                    printf("%d",arr[i][j]);

                }
                else{
                    arr[i][j] = arr[i -1][j-1] + arr[i-1][j+1];
                    if(arr[i][j] == 0)
                    printf(".");
                    else{
                        printf("%d",arr[i][j]);
                    }

                }
            }
            else
            {
                if(j<middle - i  || j > middle + i){
                    arr[i][j] = 0;
                    printf(".");
                }
                else{
                    if (j == middle - i  || j == (middle + i))
                    {
                        arr[i][j] = 1;
                        printf("%d",arr[i][j]);
                    }
                    else
                    {
                        arr[i][j] = arr[i -1][j-1] + arr[i-1][j+1];
                        if(arr[i][j] == 0){
                            printf(".");
                        }
                        else{
                        printf("%d",arr[i][j]);
                        }
                    }
                }
                
            }
        }
        printf("\n");
        
    }
    
    

    return 0;
}