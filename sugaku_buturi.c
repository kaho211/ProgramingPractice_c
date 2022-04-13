#include <stdio.h>
int main(void){
    
    int i;
    int sugaku_max, sugaku_min, sugaku_sum, buturi_max, buturi_min, buturi_sum, sum_max;
    float sugaku_ave, buturi_ave;
    
    // 数学の点数
    int sugaku[5] = {72, 88, 72, 81, 68};
    sugaku_max = sugaku_min = sugaku[0];
    sugaku_sum = 0;
    
    // 物理の点数
    int buturi[5] = {48, 39, 91, 82, 78};
    buturi_max = buturi_min = buturi[0];
    buturi_sum = 0;
    
    // 数学と物理の点数の合計
    sum_max = 0;

    for(int i = 0; i < 5; i++) {
        // 数学の最高点、最低点、合計点
        if( sugaku_max < sugaku[i] )
          sugaku_max = sugaku[i];
        if( sugaku_min > sugaku[i] )
          sugaku_min = sugaku[i];
        sugaku_sum = sugaku_sum + sugaku[i];
        
        // 物理の最高点、最低点、合計点
        if( buturi_max < buturi[i])       
          buturi_max = buturi[i];
        if( buturi_min > buturi[i] )
          buturi_min = buturi[i];
        buturi_sum = buturi_sum + buturi[i];
        
        // 数学と物理の合計が最も高い生徒の点数
        if( sum_max < sugaku[i] + buturi[i] )
          sum_max = sugaku[i] + buturi[i];
    }
    
    // 数学の平均点
    sugaku_ave = (float)sugaku_sum / 5.0;
    
    // 数学の最高点、最低点、平均点の出力
    printf("[数学]\n");
    printf("最高点 = %d\n", sugaku_max);
    printf("最低点 = %d\n", sugaku_min);
    printf("平均点 = %.1f\n", sugaku_ave);
    
    // 物理の平均点
    buturi_ave = (float)buturi_sum / 5.0;
    
    // 物理の最高点、最低点、平均点の出力
    printf("[物理]\n");
    printf("最高点 = %d\n", buturi_max);
    printf("最低点 = %d\n", buturi_min);
    printf("平均点 = %.1f\n", buturi_ave);
    
    // 数学と物理の合計が最も高い生徒の点数の出力
    printf("[数学と物理の合計が最も高い生徒の点数]\n");
    printf("%d\n", sum_max);
}