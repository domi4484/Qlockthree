/**
 * Events.h
 * Instanzierung jährlicher Events
 *
 * @mc       Arduino/UNO
 * @autor    Manuel Bracher / manuel.bracher@gmail.com
 * @version  1.0
 * @created  02.01.15
 *
 * Versionshistorie:
 * V 1.0:  - Erstellt.
 */

#include "Event.h"

/**************************************************************************************************************
* Instanzierung und Initialisierung jährlicher Events. Ein Event enthält eine Laufschrift, gefolgt
* von einem Bildeffekt (Herz, Feuerwerk, etc.). Diese werden am definierten Jahrestag jeweils zur vollen Stunde
* während einer definierten Dauer nonstop angezeigt. Soll nur eine Laufschrift (ohne Bildeffekt) angezeigt werden,
* ist als Effekt-Input NO_EFFECT zu wählen. Soll nur ein Bildeffekt (ohne Laufschrift) gezeigt werden, ist als
* Text-Input "" zu definieren. (Monat, Tag, Text, Effekt, Dauer [min]) Das Event-Array kann "beliebig" ergänzt
* werden.
**************************************************************************************************************/
Event events[] = {
  Event(7,29,"Happy bra-G Day",Effects::EFFECT_FIREWORK),
  Event(3,1,"GUTEN MORGEN",Effects::ANI_BITMAP_SMILEY_WINK),
  Event(1,3,"QLOCKTHREE",Effects::NO_EFFECT),
//  Event(12,25,"MERRY CHRISTMAS",Effects::EFFECT_CANDLE),
//  Event(1,1,"HAPPY NEW YEAR",Effects::EFFECT_FIREWORK),
//  Event(2,14,"",Effects::EFFECT_LOVEU),
//  Event(7,30,"HAPPY BIRTHDAY",Effects::EFFECT_HEART)
};

/**************************************************************************************************************
 * Anzahl definierter Events
 **************************************************************************************************************/
int nbrOfEvts = sizeof(events) / sizeof(Event);
