## What is Misi?

Misi is an lzma-based package format primarily for storing key-value pairs in a compact way, but
but also files and folders.

## What language can I use Misi from?

Misi is written in C++03. I will also implement it using C++11 features if they significantly
reduce code size. 

I also plan to reimplement Misi in Python and Java.

## Is the data verified? 

Yes, the uncompressed data is verified with a 32-bit CRC32. I use Boost for the CRC32 implementation and I'm not
sure exactly which algorithm it is because there are at least a dozen of them standardized.

## What's up with the name?

In the popular Hungarian novel "Be Faitful unto Death"[1] by Zsigmond Móricz, the protagonist Misi
Nyilas receives a package from home and his friends shout all over the place: "Misi received a package!
Misi receive a package!". 

[1]: The original title is "Légy jó mindhalálig", and I'm not exactly sure about the translation,
but I found an [excerpt](http://www.visegradliterature.net/works/hu/M%C3%B3ricz_Zsigmond/L%C3%A9gy_j%C3%B3_mindhal%C3%A1lig/en/1864-Be_faithful_unto_death) that has the title translated like this.
