#include<cstdio>
#include<cstring>
using namespace std;
main(){
    int a,b,max=0,t=0,tt=0;
    char c[1000];
    freopen("lolzmaa.in","r",stdin);
    freopen("lolzmaa.out","w",stdout);
    scanf("%s",&c);
    a=strlen(c);
    if((c[0]-48)==0){
        while(1){
            if((c[t]-48)!=0){
                break;
            }
            if((c[t]-48)==0){
                tt++;
            }
            t++;
        }
    }
    for(t=tt;t<a;t++){
                if((c[t]-48)==0){
                    printf(" _ ");
                    max=max+1;
                }
                if((c[t]-48)==1){
                    printf("  ");
                }
                if((c[t]-48)==2){
                    printf(" _ ");
                    max=max+1;
                }
                if((c[t]-48)==3){
                    printf(" _ ");
                    max=max+1;
                }
                if((c[t]-48)==4){
                    printf("   ");
                }
                if((c[t]-48)==5){
                    printf(" _ ");
                    max=max+1;
                }
                if((c[t]-48)==6){
                    printf(" _ ");
                    max=max+1;
                }
                if((c[t]-48)==7){
                    printf(" _  ");
                    max=max+1;
                }
                if((c[t]-48)==8){
                    printf(" _ ");
                    max=max+1;
                }
                if((c[t]-48)==9){
                    printf(" _ ");
                    max=max+1;
                }
    }
    printf("\n");
    for(t=tt;t<a;t++){
        if((c[t]-48)==0){
            printf("| |");
            max=max+2;
        }
        if((c[t]-48)==1){
            printf(" |");
            max=max+1;
        }
        if((c[t]-48)==2){
            printf(" _|");
            max=max+2;
        }
        if((c[t]-48)==3){
            printf(" _|");
            max=max+2;
        }
        if((c[t]-48)==4){
            printf("|_|");
            max=max+3;
        }
        if((c[t]-48)==5){
            printf("|_ ");
            max=max+2;
        }
        if((c[t]-48)==6){
            printf("|_ ");
            max=max+2;
        }
        if((c[t]-48)==7){
            printf("  | ");
            max=max+1;
        }
        if((c[t]-48)==8){
            printf("|_|");
            max=max+3;
        }
        if((c[t]-48)==9){
            printf("|_|");
            max=max+3;
        }
     }
    printf("\n");
    for(t=tt;t<a;t++){
        if((c[t]-48)==0){
            printf("|_|");
            max=max+3;
        }
        if((c[t]-48)==1){
            printf(" |");
            max=max+1;
        }
        if((c[t]-48)==2){
            printf("|_ ");
            max=max+2;
        }
        if((c[t]-48)==3){
            printf(" _|");
            max=max+2;
        }
        if((c[t]-48)==4){
            printf("  |");
            max=max+1;
        }
        if((c[t]-48)==5){
            printf(" _|");
            max=max+2;
        }
        if((c[t]-48)==6){
            printf("|_|");
            max=max+3;
        }
        if((c[t]-48)==7){
            printf("  | ");
            max=max+1;
        }
        if((c[t]-48)==8){
            printf("|_|");
            max=max+3;
        }
        if((c[t]-48)==9){
            printf(" _|");
            max=max+2;
        }
    }
    printf("%d",max);
}
