#include "display.h"


   void display_time(int hours, int minutes, int seconds, pi_framebuffer_t*dev){
        pi_framebuffer_t *fb=getFrameBuffer();
        display_colons(fb);
        display_hours(hours,fb);
        display_minutes(minutes,fb);
        display_seconds(seconds,fb);
   }

        void display_colons(pi_framebuffer_t*dev){

                sense_fb_bitmap_t *bm=dev->bitmap;
                //Code for Semicolon

                bm->pixel[5][2]=WHITE;
                bm->pixel[4][2]=WHITE;
                bm->pixel[2][2]=WHITE;
                bm->pixel[1][2]=WHITE;

                bm->pixel[5][3]=WHITE;
                bm->pixel[4][3]=WHITE;
                bm->pixel[2][3]=WHITE;
                bm->pixel[1][3]=WHITE;

                bm->pixel[5][5]=WHITE;
                bm->pixel[4][5]=WHITE;
                bm->pixel[2][5]=WHITE;
                bm->pixel[1][5]=WHITE;

                bm->pixel[5][6]=WHITE;
                bm->pixel[4][6]=WHITE;
                bm->pixel[2][6]=WHITE;
                bm->pixel[1][6]=WHITE;
                //sleep(1);
                //clearFrameBuffer(fb,BLACK);
                //freeFrameBuffer(fb);
        }

        void display_hours(int hours, pi_framebuffer_t*dev){

                sense_fb_bitmap_t *bm = dev->bitmap;
                for (int i = 7; i>= 2; i--) {
                        if (hours & 1){
                                bm->pixel[HOURS_ROW][i]=BLUE;
               }
               else {
                       bm->pixel[HOURS_ROW][i]=BLACK;
                }
               hours = hours >> 1;
           }
}
        void display_minutes(int minutes, pi_framebuffer_t*dev){
                // Code to Display Minutes

                sense_fb_bitmap_t *bm = dev->bitmap;
                for (int i = 7; i>= 2; i--) {
                        if (minutes & 1){
                                bm->pixel[MINS_ROW][i]=GREEN;
               }
               else {
                       bm->pixel[MINS_ROW][i]=BLACK;
                }
               minutes = minutes >> 1;
           }
}


        void display_seconds(int seconds, pi_framebuffer_t*dev){
                // Code to Display Seconds

               sense_fb_bitmap_t *bm = dev->bitmap;
               for (int i = 7; i>= 2; i--) {
                        if (seconds & 1){
                                bm->pixel[SECS_ROW][i]=RED;
               }
               else {
                       bm->pixel[SECS_ROW][i]=BLACK;
                }
               seconds = seconds >> 1;
           }
}
