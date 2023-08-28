#include <stdio.h>
#include<math.h>

int odd(int n){
    int i = 1;
    int j = 0;
    
    while(i < n*2){
        if(i % 2 != 0)
        j = i;
        
        i++;
    }
    return j;
}

int leaf(int height){
    float x = odd(height);
    float y = x/2;
    int z = ceil(y);
    
    for(int i = 0; i < height ; i++){
        for(int j = 0; j < x; j++){
            if(j == z-1-i){
                if(i == 0){
                    printf("*");
                }
                else{
                    int a = odd(i+1);
                    for(int k = 0; k < a; k++){
                        printf("&");
                    }
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int branch(int height, int width){
    float h = odd(width);
    int x = ceil(h/2);
    for(int i = 0; i < height; i++){
        for(int j = 0; j < h; j++){
            if( j == x - 1){
                printf("||");
            }
            else if(i == height - 1){
                printf("_");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int tree(int height){
    float x = height*0.75;
    int j = ceil(x);
    leaf(j);
    branch(height-j, j);
}

int main() {
    printf("Enter the height of the christmastree : ");
    int h;
    scanf("%d", &h);
    printf("\n");
    tree(h);
}