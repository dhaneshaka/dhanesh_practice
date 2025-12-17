#include<stdio.h>
#include<unistd.h>
int main ()
{
	const char *led_path="/sys/class/leds/user/brightness";
	

	FILE *fp;
          for(int i = 1; i>0; i++)
	{
		fp=fopen(led_path,"w");
		if(i % 5 == 0)
		{
			fputs("0",fp);
		}
		else
		{
			fputs("1",fp);
		}
		fclose(fp);
		sleep(1);
		return 0;
	}
}


