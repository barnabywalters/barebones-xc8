# XC8 Skeleton

A bare-bones PIC XC8 project structure. Companion to the [Barebones PIC programming on a Mac + pickit2](http://waterpigs.co.uk/articles/barebones-pic-programming-on-mac-pickit2/) article.

You’ll need `xc8` to compile. The `burn`, `power` and `off` utilities assume a pickit2 controlled using `pk2cmd`, but could easily be changed to do whatever you wanted.

The chip is hardcoded to the PIC16F886, which is fine if you’re using a 28-pin demo board but needs changing otherwise. An environment variable or project config file should probably be used for that.

## Usage

Build:

    xc8 main.c --chip=16F886 --outdir=build

Burn to device:

    ./burn

Power:

    ./power

Power off:

    ./off

The bundled `main.c` sets up all digital pins as outputs and raises them, so you should be able to connect an LED (via current-limiting resistor, of couse) to pretty much any pin and see it light up. The four LEDs on the 28-pin demo board should be lit after running ./power.
