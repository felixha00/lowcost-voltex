# lowcost-voltex
![sound voltex controller](https://i.imgur.com/nk6UyFn.jpg)
## Total Price (in CAD):  
2x Rotary Encoders: 1.80  
Arduino Pro Micro: 5.00  
7x Gateron Brown Switches: ~2.00  
2x Rotary Encoder Knobs: 1.00  
7x Keycaps: (free for me, you can just use 1u keycaps)   
Plywood: free   
M2 Standoffs: basically nothing  
### Total: CA$9.80 (US$6.90)  

## Setbacks
* Original laser cutting outline assumed using stablizers, but the wood was too thick so its still in there   
* EC11 has resolution of 20ppr, compared to the usual 600ppr from the original controllers  
* It uses normal keyboard keycaps, compared to Sanwas with a larger area to press.  
* Knobs are not as large, 3D printing the normal size can solve this (See knob_cover.stl)  


## Materials
2x pieces of plywood  
7x M2 PCB standoffs  
Wires 

## Hardware

2x EC11 Rotary Encoders (Detents removed, see below for details)  
2x Rotary Encoder knobs
7x Gateron Brown Mechanical Keyswitches  
7x 2.25u Keycaps (3D print them if needed)  
1x Arduino Pro Micro Clone
7x 1N4148 Diodes
----- Items not included in price
Soldering Iron with Solder  
Laser Cutter  

## Software
QMK Toolbox  
QMK CLI

## Video Demo
[Youtube Link](https://youtu.be/W8n6pbJeWsM)

# Build Log
### Wiring (looks bad):
![sound voltex wiring](https://cdn.discordapp.com/attachments/482050809463439391/705934792167784518/IMG_20200501_063012.jpg)
Follow a tutorial on how to wire a keyboard properly. The two pieces were sandwiched by countersinking screws and using the M2 standoffs and screws to assemble them togther. The pieces of wood was laser cut using a Trotec 3000. 

### Removing Detents: 
![removing detents from encoder](https://cdn.discordapp.com/attachments/482050809463439391/705935024838541353/IMG_20200402_183047.jpg)
To turn the detented rotation into a smooth optical-encoder like movement, take apart the encoder as shown in the image and remove the small metal ball that causes the detents. Reassemble and check to make sure the encoder still works
