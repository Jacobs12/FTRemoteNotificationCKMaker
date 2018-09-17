//
//  main.c
//  push_ck
//
//  Created by wolffy on 15/9/17.
//  Copyright (c) 2015年 灰太狼. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//sleep函数

int main(int argc, const char * argv[]) {
//    char isStart = '0';
    printf("made by 灰太狼大王\n");
//    isStart = getchar();
//    if(isStart == '0'){
//        printf("谢谢使用\n");
//        sleep(3);
//        exit(0);
//    }else if (isStart == '1'){
        printf("请输入绝对路径\n");
        char str[300] = "";
        int i=0;
    char c;
        while (1) {
            scanf("%c",&c);
            str[i] = c;
            if(c == '\n'){
                break;
            }
           i++;
        }
    char *p = str;
    printf("%s",p);
        printf("已获取路径%d\n",i);
        system("cd /Users/paibbo/Desktop/push2018/push\n\
               openssl x509 -in aps.cer -inform der -out PushChatCert.pem\n\
               openssl pkcs12 -nocerts -out PushChatKey.pem -in push.p12\n\
               cat PushChatCert.pem PushChatKey.pem > ck.pem\n\
               ");
        
        printf("证书创建完成,是否发送推送消息 1是 0 否\n");
        int isPush = 0;
        scanf("%d",&isPush);
        switch (isPush) {
            case 0:system("cd /Users/paiBo/Desktop/push\n\
                          php test_push.php\n");break;
            case 1:printf("谢谢使用\nmade by 灰太狼大王");exit(3);break;
            default:
                break;
        }
//    }else{
//        printf("指令有误");
//        sleep(3);
//        exit(0);
//    }
//    
    return 0;
}
