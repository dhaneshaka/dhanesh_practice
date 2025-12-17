#include<stdio.h>
#include<unistd.h>

int main()
{
const char *led_path="/sys/class/leds/user/brightness";

FILE *fp;

for(int i=1;i>0;i++)
{
fp=fopen(led_path,"w");
if(i%2==0)
{
fputs("1",fp);
}
else 
{
fputs("0",fp);
}
fclose(fp);
sleep(1);
}
}
