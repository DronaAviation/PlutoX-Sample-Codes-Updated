/* Do not remove the include below */
#include "PlutoPilot.h"
#include "Sensor.h"
#include "Utils.h"

int16_t temp;

/* The setup function is called once at Pluto's hardware startup */
void plutoInit()
{
    /* Add your hardware initialization code here */
}

/* The function is called once before plutoLoop when you activate Developer Mode */
void onLoopStart()
{
    /* do your one time tasks here */
}

/* The loop function is called in an endless loop */
void plutoLoop()
{
    /* Add your repeated code here */
    temp = Barometer.get(TEMPERATURE) / 100; /* Get current Temperature */
    Graph.red(temp, 1);
    Monitor.println("Temperature", temp);
}

/* The function is called once after plutoLoop when you deactivate Developer Mode */
void onLoopFinish()
{
    /* do your cleanup tasks here */
}
