# Debtron — [www.debtron.xyz](http://www.debtron.xyz)

## Concept and implementation

[Konstantinos Doumpenidis](http://cargocollective.com/doumpe) and [Heracles Papatheodorou](http://heracl.es) under the supervision of Angelos Floros, for the postgraduate programme in *Digital Arts*, at the *Athens School of Fine Arts* .
Thanks to [Alfredo Pechuan](http://alfredopechuan.tumblr.com/) for the cover video.

![debtron setup](https://rawgithub.com/Arty2/debtron/master/illustrations/debtron_setup.png)


## Policy

*Debtron* is a state of the art integrated mechanism in compliance with the *OCDE Toolkit*, particularly effective in the rationalization and deflation of national debt. It is an essential apparatus aimed at all accredited, aspiring and industrious politicians and legislators.

The elegant configuration of *Debtron* is designed to be placed on a prominent —preferably expensive— bureau. A typical monitor (sold separately) is required to display seven (7) distinct, fluctuating values, including the most important one, that is the absolute debt in Euros. The latter however, cannot be manipulated directly, but is instead calculated in real-time according to the operator’s input.

The variables available to the operator are as follows:

* Minimum wage.
* Total national surface.
* Count of immigrants hosted.
* Individual pensioners alive.
* Sum of Members of Parliament.
* Minimum number of citizens allowed to be unemployed.

The afforementioned variables range between the actual minimum and maximum values in the European Union. They are subsequently linked to the national debt with our patented algorithm, thus the operator is able to obtain live feedback from their actions and accordingly inflate or deflate the debt.


## Infrastructure
![debtron circuitry](https://rawgithub.com/Arty2/debtron/master/illustrations/debtron_circuitry.png)


### Hardware parts

* 1 × Arduino UNO or equivalent
* 1 × 9 V battery or equivalent
* 6 × 1 kΩ potentionmeters and fitting knobs (actual value is quite irrelevant)
* 1 × piezo buzzer (optional)
* 1 × proto board
* 1 × 1 kΩ resistor (Brown, Black, Red)
* 1 × 220 Ω resistor (Red, Red, Brown) *
* 1 × male RCA plug or any spare RCA cord
* pin headers
* as much wire as it takes
* a classy enclosure
* a typical monitor with RCA inputs

<small>* Your mileage may vary: the [tutorial we followed](http://www.instructables.com/id/TV-Out-with-Arduino/?ALLSTEPS) suggested a 470 Ω resitor, however we couldn’t get sync to work with it on a PAL TV.</small>


### Software

* [Arduino Software](https://www.arduino.cc/en/Main/Software)
* *arduino-tvout* library (we suggest you use the one included in this project )

## Human perspective

> The people of my nation entrusted me for the first time, therefore I had to thoroughly prepare for what was to come. One day, I crave to be able to stand shoulder to shoulder to my idols in the G8 forum.
>
> <small>Yes Angela dear, I do too… I need to hang up, we’re shooting now.</small>
>
> It wasn’t until I had used *Debtron* for the first time, that I realized I held in my hands a machine of fine mathematical beauty.
> Working with absolute numbers I needn’t worry about any ethical consequences. I could at last lower wages, fence off the national borders, and see the debt plunge by liquidating the lengthy Greek shorelines.
>
> Hear me fellow politician: *Debtron* is what you’ve always needed.
> I’ve truly felt my life changing, and can already see my career in politics taking off.
> Hear me; go get *Debtron*, get it *now* and take the life of others in your hands.
>
> — a Greek politician we honestly didn’t bribe


## Abstraction

The operator can modify the following variables by turning the potentionmeter knobs appropriately: minimum wage, total national surface, count of immigrants hosted, individual pensioners alive, sum of members of parliament, minimum number of citizens allowed to be unemployed. The adjusted values are displayed on an appropriately connected monitor.

## Credits

* Jekyll theme for [debtron.xyz](http://debtron.xyz) is based on [Solo](http://chibicode.github.io/solo)
* The [arduino-tvout](https://code.google.com/p/arduino-tvout/) library, which is bundled with the Arduino source code.


## License

[Creative Commons Attribution-NonCommercial 4.0 International](https://creativecommons.org/licenses/by-nc/4.0/)

[![CC BY-SA](https://licensebuttons.net/l/by-nc/3.0/88x31.png)](https://creativecommons.org/licenses/by-nc/4.0/)


