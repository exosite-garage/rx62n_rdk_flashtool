========================================
About flash tool
========================================
This project is a simple tool for the Renesas RX62N RDK. The project functionality 
provides a menu on the LCD to:<br>
1) Clear MAC address in internal data flash<br>
2) Write MAC address to internal data flash<br>
3) Reset Exosite-meta block in internal flash<br>

License of flash_tool is BSD, Copyright 2011, Exosite LLC 
(see LICENSE file)<br>

Tested with HEW version 4.09.00.007, including:<br>
C/C++ compiler package for RX family V.1.01 Release 00 (6-14-2011 21:50:37)
Renesas Demonstration Kit (RDK) RX62N v3.00 Release 00 (6-15-2011 00:08:55)

========================================
Quick Start
========================================
1) Install HEW, the RX toolchain and the RDK demo projects<br>
* HINT: packages can be downloaded from Renesas at http://tinyurl.com/42turtk<br>

2) Open the flash_tool.hws project workspace with HEW<br>

3) Edit the "flash_tool.c" line 24:NEW_MAC[6] value to match your MAC address<br>
* HINT: RX62N RDK users can find the MAC address in the back of the board<br>

4) Compile and download -> Press 'SW1' to select function and 'SW2' to excute
* HINT: Your Rx62n RDK must be connected to the PC

========================================
Release Info
========================================

----------------------------------------
Release 2011-11-16
----------------------------------------
--) initial version<br>
