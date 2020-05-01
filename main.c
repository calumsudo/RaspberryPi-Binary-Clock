#include "display.h"
int main(void) {
        pi_framebuffer_t *fb=getFrameBuffer();
        int hours;
        int mins;
        int secs;
        int s = 1;

        while (s == 1){
                if(scanf("%02d:%02d:%02d", &hours, &mins, &secs) < 3){
                        clearFrameBuffer(fb,BLACK);
                        freeFrameBuffer(fb);
                        return 0;
                }
                printf("%d:%d:%d\n", hours, mins, secs);

                display_time(hours,mins,secs, fb);
        }
        clearFrameBuffer(fb,BLACK);
        freeFrameBuffer(fb);
        return 0;
}

