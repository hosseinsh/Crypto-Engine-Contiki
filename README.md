Crypto-Engine-Contiki
============================

The OpenMote (cc2538) platform offers hardware crypto engines supporting SHA256, AES, and Public Key Crypto operations. We utilize the crypto engines for all crypto operations involved in DTLS to have a better performance. Most parts of the code have been done by Andreas Dröscher during his master's thesis project.

In this repo, we share the required drivers to access the crypto engines, and a modified DTLS implementation that can both run on softwarebased crypto libriaries, but most importantly as well supports the hardware crypto.

We would like to share:
 * the drivers for the crypto engine in cpu/cc2538/dev/
 * example code how to use the crypo engines' API in example/cc2538dk/crypto
 * the modified tinydtls-based implemention of DTLS in examples/tinydtls

Ongoing work:
 * We are evaluating our implementation thoroughly and plan to share our resutls in the near future.
 * We are trying to add these features to main Contiki: https://github.com/contiki-os/contiki/pull/1078

Main contributors to this repo are:
 * Andreas Dröscher <contiki@anticat.ch>
 * Hossein Shafagh <shafagh@inf.ethz.ch>
 * Wen Hu and Hu Luo <wen.hu@unsw.edu.au>
