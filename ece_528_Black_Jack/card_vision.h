/*
 * card_vision.h
 *
 *  Created on: May 2, 2026
 *      Author: limac
 */

#ifndef CARD_VISION_H_
#define CARD_VISION_H_


#include <stdint.h>

#define FRAME_W  80
#define FRAME_H  60

#define ROI_X    0
#define ROI_Y    0
#define ROI_W    24
#define ROI_H    32

#define DIGIT_W  12
#define DIGIT_H  18

extern volatile uint8_t frame[FRAME_H][FRAME_W];
extern uint8_t roi_bin[ROI_H][ROI_W];
extern uint8_t digit_img[DIGIT_H][DIGIT_W];

void capture_frame_gray(void);
void threshold_roi(uint8_t threshold);
void downsample_roi_to_digit(void);
int recognize_digit(void);


#endif /* CARD_VISION_H_ */
