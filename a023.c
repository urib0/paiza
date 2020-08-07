#include <stdio.h>

int main(void){
    int n = 0,i = 0,sum = 0,max = 0,cnt = 0;
    int f[ 100000 ] = { 0 };

    scanf("%d", &n);
    for( i = 0; i < n; i++){
        scanf("%d", &f[ i ]);
    }

    for( i = 0; i < 7; i++){
        sum += f[ i ];
    }

    if( n > 7 ){
        if( sum < 6 )cnt++;
        if( max < cnt )max = cnt;

        for ( i = 7; i < n; i++)
        {
            sum -= f[ i - 7 ];
            sum += f[ i ];

            if( sum < 6 ){
                cnt++;
            }
            else{
                cnt = 0;
            }
            if( max < cnt )max = cnt;
        }
    }
    else
    {
        if( sum < 6 ){
            max++;
        }
    }

    if( max > 0 ){
        printf("%d\n", max + 6);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
