# RAK11310 and RAK1904 Test/Example

This is a simple example for the [RAK11310](https://docs.rakwireless.com/Product-Categories/WisBlock/RAK11310/Overview/) and the RAK1904(https://docs.rakwireless.com/Product-Categories/WisBlock/RAK1904/Overview/).

It demonstrates how to set an interrupt and how to handle it in a function.

The RP2040 does not support deep sleep, so the delay() in the loop is currently the best we can do.

I'm unable to use `Serial.print` in the interrupt function. Don't know why :)
