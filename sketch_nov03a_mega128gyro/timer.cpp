#include "timer.h"
#include "common_makros.h"
#include <avr/io.h>
#include <avr/interrupt.h>

//==============================================================================================

MySoftTimer g_timer;

//==============================================================================================

ISR (TIMER2_OVF_vect)
{
 cli();
  g_timer.touch_timer();
 sei();
}

//==============================================================================================

inline void setupTIMER2 (void)
{
  TIMSK &=~(1<<OCIE2 | 1<< TOIE2);  
  ASSR  = 1<<AS0;       
  TCNT2 = 0;
  TCCR2 = 5<<CS20; // (1<<CS20 | 1<<CS21 | 1<<CS22)
  TIMSK |= 1<< TOIE2;
  sei();
}

//==============================================================================================

void MySoftTimer::init(){
  setupTIMER2();
}

//==============================================================================================
