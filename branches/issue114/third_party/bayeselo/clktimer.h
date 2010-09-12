////////////////////////////////////////////////////////////////////////////
//
// clktimer.h
//
// CClockTimer
//
// Remi Coulom
//
// October, 1996
//
////////////////////////////////////////////////////////////////////////////
#ifndef CLKTIMER_H
#define CLKTIMER_H

#include "chtimer.h" // CChessTimer

class CClockTimer : public CChessTimer // clkt
{
 private: //////////////////////////////////////////////////////////////////
  long lPrevious;

 public: ///////////////////////////////////////////////////////////////////
  CClockTimer();
  virtual void Wait(long lMilliSeconds = 0);
  virtual void WaitInterval(long lMilliSeconds = 0);
  virtual CTime GetInterval();
};

#endif
