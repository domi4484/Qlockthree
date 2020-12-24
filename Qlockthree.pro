TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
  Qlockthree.ino \
  Alarm.cpp \
  AnalogButton.cpp \
  Button.cpp \
  DCF77Helper.cpp \
  Effects.cpp \
  Event.cpp \
  IRTranslator.cpp \
  IRTranslatorCLT.cpp \
  IRTranslatorLunartec.cpp \
  IRTranslatorMooncandles.cpp \
  IRTranslatorSparkfun.cpp \
  LDR.cpp \
  LedDriver.cpp \
  LedDriverDefault.cpp \
  LedDriverDotStar.cpp \
  LedDriverLPD8806.cpp \
  LedDriverNeoPixel.cpp \
  LedDriverPowerShiftRegister.cpp \
  LedDriverUeberPixel.cpp \
  MyDCF77.cpp \
  MyIRremote.cpp \
  MyRTC.cpp \
  MyTempSens.cpp \
  Renderer.cpp \
  Settings.cpp \
  ShiftRegister.cpp \
  TimeStamp.cpp \
  Transitions.cpp

DISTFILES += \
  README.md

HEADERS += \
  Alarm.h \
  AnalogButton.h \
  Button.h \
  Colors.h \
  Configuration.h \
  DCF77Helper.h \
  Debug.h \
  Effects.h \
  Event.h \
  Events.h \
  IRTranslator.h \
  IRTranslatorCLT.h \
  IRTranslatorLunartec.h \
  IRTranslatorMooncandles.h \
  IRTranslatorSparkfun.h \
  LDR.h \
  LedDriver.h \
  LedDriverDefault.h \
  LedDriverDotStar.h \
  LedDriverLPD8806.h \
  LedDriverNeoPixel.h \
  LedDriverPowerShiftRegister.h \
  LedDriverUeberPixel.h \
  Modes.h \
  MyDCF77.h \
  MyIRremote.h \
  MyIRremoteInt.h \
  MyRTC.h \
  MyTempSens.h \
  Renderer.h \
  Settings.h \
  ShiftRegister.h \
  Staben.h \
  TimeStamp.h \
  Transitions.h \
  Woerter_CH.h \
  Woerter_DE.h \
  Woerter_DE_MKF.h \
  Woerter_EN.h \
  Woerter_ES.h \
  Woerter_FR.h \
  Woerter_IT.h \
  Woerter_NL.h \
  Zahlen.h
