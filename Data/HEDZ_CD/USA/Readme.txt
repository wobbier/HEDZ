=============================
         H.E.D.Z.

Head Extreme Destruction Zone
=============================




Welcome to the H.E.D.Z. readme file.
This file contains additional information to supplement the manual.
Please take a moment and read all the sections before proceeding with the installation.





This file contains information on the following subjects:

 1. DIRECTX 5.2 and 6.0
 2. SCREEN RESOLUTION
 3. PLAYING H.E.D.Z. WITHOUT A 3D ACCELERATOR CARD
 4. PROBLEMS WITH 2D/3D VIDEO GRAPHIC CARDS
 5. KNOWN PROBLEMS WITH SPECIFIC 3D ACCELERATOR CARDS
 6. ENHANCING THE SPEED OF H.E.D.Z.
 7. PROBLEMS WITH GAME CONTROLS
 8. MANUAL ERRATA
 9. MONITOR POWER/ENERGY SAVERS
10. SCREEN SAVERS
11. MULTITASKING
12. VIRTUAL DESKTOP
13. 16 BIT COLOR
14. DRIVERS 
15. AMD MACHINES



1. DIRECTX 5.2 and 6.0


H.E.D.Z. has been tested with DirectX 5.2 and Direct X 6.0.
H.E.D.Z. requires DirectX 5.2 or later installed on the computer. 
H.E.D.Z. requires all computer hardware devices and drivers to be certified by DirectX 5.2 or later. If a device is reported as not certified with DirectX, please contact the manufacturer of the device and request the latest DirectX 5.2 or DirectX 6.0 certified drivers for that device.
The H.E.D.Z. installer will detect if the computer has a compatible version of DirectX installed. If not, a message will appear and at your prompting, the H.E.D.Z. installer will install DirectX 5.2 onto the machine. 
The H.E.D.Z. installer will not overwrite DirectX 6.0 if it is detected on the computer.

If you have a 3D-Accelerator card in your machine and have DirectX 6.0 installed you should benefit from an overall speed increase while running H.E.D.Z.

The DirectX 6.0 application has been included on the H.E.D.Z. CD. This was done to allow advanced users with 3D-Accelerator cards an opportunity to benefit from the overall speed increase while running H.E.D.Z. under the DirectX 6.0 environment. 

NOTE: DirectX 6.0 is a complex Microsoft application. During the installation of DirectX 6.0, you will be asked very specific and highly detailed questions about your system. The DirectX 6.0 application may make changes to you computer based on your answers to the questions. Providing the wrong answers may adversely affect your system's performance. We strongly recommend that only advanced computer users attempt the DirectX 6.0 installation. 

WARNING: There are known issues with H.E.D.Z. and DirectX 6.0. If H.E.D.Z. is run in software only mode I.e. without a 3D-Accelerator card and the flat-shading option is selected, graphical problems may occur. 

If you experience such an issue please contact Microsoft for the latest version of the DirectX software.  As H.E.D.Z. went to press, a fix for this problem was being worked on.

It is possible to uninstall DirectX 6.0 using the Dxsetup.exe utility. Once this is done, reinstalling H.E.D.Z. from the CD will install DirectX 5.2 onto the computer

WARNING:  This may affect other games installed on your machine.  


2. SCREEN RESOLUTION

Not all video graphic cards support the many game resolutions available in H.E.D.Z.  If you select a specific resolution in the Options Screen but find that the game runs in a lower resolution, this may be due to your video graphic card not being able to support that particular resolution.  
If this occurs, the H.E.D.Z. program will automatically select a screen resolution that is supported by your video graphic card. 

For Example: Some video graphic cards do not support 512 x 384 game resolution. If your video graphic card does not support this resolution, H.E.D.Z. will automatically default to 640 x 480 game resolution. Some 3D-accelerator cards do not support 320x240 game resolution. If your 3D-accelerator card does not support this resolution, H.E.D.Z will automatically default to 640x480 game resolution.


3.    PLAYING H.E.D.Z. WITHOUT A 3D ACCELERATOR CARD

Not all 2D video graphic cards support 320 x 240 game resolution.  320x240 is the lowest game resolution that H.E.D.Z. will run in. 
If your 2D video graphic card does not support the 320x240 game resolution, H.E.D.Z. will automatically default to 640x480 game resolution and display the game with a black border. 
Once in this mode, you can use the + and - keys on the keyboard to increase or decrease the size of the screen.  Decreasing the size of the screen should increase the speed of the game. 



4. PROBLEMS WITH 2D/3D VIDEO GRAPHIC CARDS

The H.E.D.Z. program has its own built in software rendering applications. You can disable the 2D and 3D hardware acceleration and the H.E.D.Z. rendering software will control the game. 

To disable your 2D/3D hardware acceleration please follow the instructions below very carefully. 

DirectX 5.2

From the Windows Desktop
Double left mouse click on the 'My Computer' icon. 
Double left mouse click on the 'C Drive' icon. 
Double left mouse click on the 'Program Files' folder.
Double left mouse click on the 'DirectX' folder. 
Double left mouse click on the 'Set Up' folder. 
Double left mouse click on the 'DXTOOL.exe' icon. 
The DirectX driver tool window should appear.
At the bottom of the DirectX driver tool window two option boxes should be seen. 
They are: 	Use Direct 3d hardware acceleration
Use Direct Draw hardware acceleration

In front of each should be a small check box. 
Left mouse click on the box so that it appears empty. 
Remember to click on the apply button to affect any changes made.
Close all window boxes. 
Reboot your machine. 

DirectX 6.0

From the Windows Desktop
Double left mouse click on the 'My Computer' icon. 
Double left mouse click on the 'C Drive' icon. 
Double left mouse click on the 'Program Files' folder.
Double left mouse click on the 'DirectX' folder. 
Double left mouse click on the 'Set Up' folder.
Double left mouse click on the 'Dxdiag.exe' icon.
Left mouse click on the 'Display1' tab at the top of the screen. 
The 'Display 1' information should be displayed on the screen. 
In the middle of the window, under DirectX features should be two option boxes. 
They are:	Direct Draw
Direct 3D

You should left mouse click on the 'Direct 3D' disable option box first. 
A message window should appear informing you that this will disable all hardware 3D acceleration. 
Left mouse click the 'OK' button. 
You should now left mouse click on the 'Direct Draw' disable option box. 
A message window should appear informing you that this will disable all hardware acceleration for Direct Draw and disable 3D acceleration. 
Left mouse click the 'OK' button.
Left mouse click on the 'Exit' button.
Close all window boxes.
Reboot your machine. 

If you are still experiencing graphical problems while running H.E.D.Z., please try the following items. 

A. Make sure that the computer is plugged in to a working power source. 
B. Check that all wires and plugs are firmly in place and are not loose.
C. Make sure that the graphics work in other applications/games.  
D. Check that DirectX has certified all hardware drivers. 
E. Contact the video graphic card manufacturer and request the latest DirectX certified drivers for your video graphic card. 
F. Contact Hasbro Customer Support


5. KNOWN PROBLEMS WITH SPECIFIC 3D ACCELERATOR CARDS

The following cards have known problems while running H.E.D.Z.:

Millenium 1 
This card does not support textures.  The game will run in software mode only. 


Power VR 
The current drivers for the Power VR can cause problems with H.E.D.Z. The Windows operating system incorrectly reports the amount of video memory on the card.  If you experience problems with H.E.D.Z. and have a Power VR video graphic card, please try the following. 
	
A. Reduce the size of the Windows desktop resolution before running the game.

B. Contact the hardware manufacturer and request the latest DirectX certified drivers.

C. Contact Microsoft. 


S3/Apocalypse 3D/3Dx or Captivator

If your computer has the AWARD BIOS and the S3 968 or 868 chipset, your computer may crash if you have an Apocalypse 3D /3Dx or Captivator PCI video graphics card. This problem can be solved by manually changing the memory allocation for the add-in card to a range outside the 64-MB used by the graphics card. 

For directions on how to properly perform this action please contact the hardware manufacturer. 


Matrox cards with Apocalypse 3Dx

There are known problems with the Matrox Millennium or Mystique video graphics cards and the Apocalypse 3Dx. To support these cards, the Apocalypse 3Dx Display Properties will default to Standard for 3D Acceleration. In order to utilize the Optimized setting, you will need to update your Matrox display drivers to v3.63 or later.

	
Hercules Stingray Graphics Card
	
There are known problems with Hercules Stingray in resolutions other than the default 640 x 480.  If you encounter any of these problems, first try the latest Hardware Manufacturer's drivers.  If this does not clear the problem, then please select 640 x 480 mode.



6. ENHANCING THE SPEED OF H.E.D.Z.

Once H.E.D.Z. is launched, a Windows box with a number of buttons on it should appear. One of the more important buttons is the 'Options Button'.  By clicking on the 'Options' button, you have access to and can customize the way H.E.D.Z. is displayed. 


Screen Resolution

Screen resolution allows the player to select the resolution in which H.E.D.Z. will be played in. Lower screen resolutions provide a faster frame rate while sacrificing picture quality. Higher screen resolutions provide a better quality picture while sacrificing frame rate. Some video graphic cards do not support all of the possible H.E.D.Z. screen resolutions. If you select a screen resolution that is not supported by your video graphic hardware, H.E.D.Z will default to a playable resolution. 


Level of Detail - Clipping Plane

Clipping plane allows the player to select the distance from the player that objects will be drawn. Near clipping plane will only draw and display objects that are close to the player. This provides for a faster frame rate while sacrificing distant objects. Far clipping plane will draw and display all objects in the scene. This provides for a more realistic view while sacrificing frame rate
		

Level of Detail - Models 

Models allows the player to select the amount of detail displayed in each character. The change is subtle, and so you may not notice the difference between 'low' and 'high' detail. Low detail models remove some of the finer details from the character's graphic. This provides for a faster frame rate while sacrificing some graphical details. High detail models keep all of the finer character graphic details intact. This provides for a higher graphical detailed character while sacrificing frame rate. 


Level of Detail - Lighting

Lighting allows the player to select the technique used for the light sourcing. Flat Shaded results in a brighter, more vibrant display of graphics. Game shadows and light effects are minimal. This provides a faster frame rate while sacrificing realistic graphics. Gouraud Shading smoothes out the harsh lines produced by Flat Shading. Running in Gouraud Shading is slower for computers without a 3D-acceleration card.  For machines with 3D-acceleration card there should be no visible difference.
		


7. PROBLEMS WITH GAME CONTROLS

Occasionally, after the player uses the H.E.D.Z. control setup utility in the options screen to customize input commands, the joystick/gamepad may be slow to respond to player commands. If this occurs the player should save the game, quit H.E.D.Z. and re-test the joystick/gamepad. 

NOTE: H.E.D.Z. will not allow the player to select non-standard keys for input commands. Examples of these keys are: insert, page up, page down, print screen, delete, F1, F2 etc. 

To re-test the joystick/gamepad please follow the directions below. 

Left mouse click on the Start button. 
Then move the mouse cursor to the Settings button and left mouse click. 
The Control Panel folder should now appear. 
Move the mouse cursor to the Control Panel folder and left mouse click on the Control Panel folder. 
Once in the Control Panel, Move the mouse cursor to the Game Controllers button and left mouse click twice. 
The name of the controller should appear in the window. The controller status is also listed. If the controller is different from the one currently connected, you should remove the listed device and add the proper device. This may require reinstalling the joystick/gamepad software again. 
If the status is not listed as OK, check to make sure the joystick/gamepad is properly plugged in. If this is checked and the problem still exists, you should remove then add the joystick/gamepad again. If this does not change the status of the joystick/gamepad, the controlling software may require reinstalling. 
When the joystick/gamepad controller is listed correctly and the status is listed as OK then left mouse click on the Properties button. 
Left mouse click on the Test tab.
From this screen, the player can re-test their joystick/gamepad. 
If the joystick/game pad is not responding properly, you should left mouse click on the Settings tab. 
Move the cursor to the Calibrate button and left mouse click. 
Please follow the directions carefully. 
Remember to click on the OK or Apply button to affect any changes made. 


8. MANUAL CHANGES

H.E.D.Z. Manual, Page 12, last paragraph, 3rd sentence

The manual states that the player can go back to revisit levels that they had already completed. This is not the case. 

H.E.D.Z. manual, page 15, section: "Know your own controls/In-Game":

2 Button mouse default controls
Left Mouse Button: Fire
Right Mouse Button: Change HED. 

3 Button mouse default controls
Left Mouse Button: Fire
Center Mouse Button: No default action
Right Mouse Button: Change HED.

Mouse buttons cannot be configured to emulate game movement in H.E.D.Z. If you redefine a mouse button to emulate the movement controls it will not function properly in the game. 

Mouse and Joystick side to side or lateral movements are defaulted to rotating the character in the H.E.D.Z.   These functions cannot be reconfigured. 


H.E.D.Z. manual, Page 9, third bullet under the "How to use the backpack" heading.

The manual states "If you do not have enough cash to re-charge a head, you will hear an audio warning and the exchange will not take place."  To clarify this, the exchange will not occur when the player has no cash and the head that is being traded from the backpack has no health remaining. If you have the slightest amount of cash you can still purchase a deadhead from your backpack.  Additionally, you do not need cash to obtain or trade a head from the backpack, that has any amount of health left in it.


H.E.D.Z. manual, Page 8, section: The Backpack, 4th bullet:

There is no minimum (above 0) amount of cash required to obtain a head out of the backpack. If the player has any amount of cash, that head being selected from the backpack will only be charged to an amount that is relative to the players remaining cash. 


The manual refers to LF's turning red if they pick up a deadhead.  This mode is only available with 3D Hardware Acceleration.



9.    MONITOR POWER/ENERGY SAVERS

There may be a compatibility issue when running H.E.D.Z. on monitors that have the Power/Energy Saver activated. After a prolonged period of computer inactivity, the Power/Energy Saver activates to save power and prevent monitor burn in. This may cause the current H.E.D.Z. game to no longer respond. In order to prevent such an occurrence, you may wish to turn off the Power/Energy Saver. 

To deactivate the Power/Energy Saver please follow the directions below. 
Left mouse click on the Start button. 
Then move the mouse cursor to the Settings button and left mouse click. 
The Control Panel folder should now appear. 
Move the mouse cursor to the Control Panel folder and left mouse click on the Control Panel folder. 
Once in the Control Panel, move the mouse to the Display button and left mouse click twice. 
Left mouse click on the Screen Saver tab. 
If your monitor is Power/Energy Saver compliant, at the bottom of the window will be several options for the Power/Energy Saver controls. From here, the user can uncheck the options for this utility. Remember to click on the Apply button to affect the changes made. 



10.    SCREEN SAVERS

There may be a compatibility issue when running H.E.D.Z. on monitors that have a Screen Saver activated. After a prolonged period of computer inactivity, the Screen Saver activates to prevent monitor burn in. This may cause the current H.E.D.Z. game to no longer respond. In order to prevent such an occurrence, you may wish to turn off any Screen Savers. 

To deactivate the Screen Saver please follow the directions below. 
Left mouse click on the Start button. 
Then move the mouse cursor to the Settings button and left mouse click. 
The Control Panel folder should now appear. 
Move the mouse cursor to the Control Panel folder and left mouse click on the Control Panel folder. 
Once in the Control Panel, move the mouse cursor to the Display button and left mouse click twice. 
Left mouse click on the Screen Saver button. 
To the right of the Screen Saver window, left mouse click on the carrot. 
An option box of possible Screen Savers should appear. 
Scroll to and select none. 
Remember to click on the apply button to affect any changes made. 


11.    MULTITASKING

It is not recommended for the consumer to play H.E.D.Z. with other computer applications running in the background. H.E.D.Z. is a memory intensive program, running other applications may cause unexpected errors. 



12.  VIRTUAL DESKTOP

There may be a compatibility issue when running H.E.D.Z. on monitors that have the Virtual Desktop activated. If gameplay difficulties are experienced, it is suggested that you deactivate the Virtual Desktop feature. 

To deactivate the Virtual Desktop please follow the directions below. 
Left mouse click on the Start button. 
Then move the mouse cursor to the Settings button and left mouse click. 
The Control Panel folder should now appear. 
Move the mouse cursor to the Control Panel folder and left mouse click on the Control Panel folder. 
Once in the Control Panel, move the mouse cursor to the Display button and left mouse click twice. 
Left mouse click on the Settings button. 
If your monitor and video card support Virtual Desktop, in the right hand side of the window will be a series of pictures. Each picture represents a different Virtual Desktop application. 
If you place the mouse cursor over the graphic, after a few seconds a text message should appear informing you what each graphic represents. 
You should select the graphic that reads 'No Virtual Desktop'. This is usually the first or uppermost graphic box. 
Remember to click on the apply button to affect any changes made. 


13.  16 BIT COLOR

H.E.D.Z. will only run in 16-bit or High Color. That is the computer must be in High Color or 16-bit color mode in order to play H.E.D.Z.

To check the current desktop color resolution please follow the directions below. 
Left mouse click on the Start button. 
Then move the mouse cursor to the Settings button and left mouse click. 
The Control Panel folder should now appear. 
Move the mouse cursor to the Control Panel folder and left mouse click on the Control Panel folder. 
Once in the Control Panel, move the mouse cursor to the Display button and left mouse click twice. 
Left mouse click on the Settings button. 
Listed under the Color Palette should be your desktop color resolution. 
Left mouse click on the carrot to the right of the color palette window. 
An option box of possible desktop color resolutions should appear. 
Scroll to and select 16-bit or High Color.  
Remember to click on the apply button to affect any changes made. 
NOTE: The computer may need to be rebooted for the changes to take affect. 



14. DRIVERS

The H.E.D.Z. CD contains a SUPPORT folder. Inside of this folder you may find the latest 3DFX Glide drivers as well as some current drivers for other Video Graphic cards. In order to install the drivers from the H.E.D.Z. you will need to know the manufacturer and name of your 3Dfx or video graphic card. 

WARNING: Installing the wrong 3Dfx or video graphic driver may adversely affect your system's performance. . We strongly recommend that only advanced computer users attempt the updating of drivers. 

To install the latest 3DFX Glide drivers from the H.E.D.Z. CD please follow the directions below very carefully. 

From the Windows Desktop
Right mouse click on the 'My Computer' icon. 
Left mouse click on the word 'Properties' or press the 'r' key.
Left mouse click on the 'Device Manager' tab.
Double left mouse click on the words 'Sound, video and game controllers'
The 'Sound, video and game controllers' section should expand to display more items.
If DirectX has been previously installed on your system, double left mouse click on the words '3Dfx Interactive Inc.'
If Direct X has not been installed on your system, you will need to double left mouse on the name of the cards manufacturer.' I.e. if you had a Diamond Monster 3D card, you would double left mouse click on the words 'Diamond Monster 3D'. 
The property window should appear for your selected 3Dfx card. 
Left mouse click on the 'Driver' tab.
Left mouse click on the 'Update Driver' button. 
The 'Update Device Driver Wizard' window should appear. Make sure that the 'Yes (Recommended) option box is selected and left mouse click on the 'Next' button. 
The computer should begin to check the floppy (A Drive). After a few seconds the  'Update Device Driver Wizard' will reappear with an 'Other Locations' button in the window. 
Left mouse click on the 'Other Locations' button. 
Left mouse click on the 'Browse' button. 
The 'Browse for Folder' window should appear. 
In the 'Browse for Folder' window find your CD-ROM drive icon and double left mouse click on the word 'H.E.D.Z.'.
The H.E.D.Z. section should expand to display several folders. This may take a second or two as the CD-ROM drive spins to speed.
Double left mouse click on the 'Support' folder. 
Double left mouse click on the 'Glide' folder
Find the name of your 3Dfx card in the list of folders. 
Left mouse click on your 3Dfx card's folder. Note: remember the name of this folder, you will need it later.
Left mouse click on the 'OK' button. 
The 'Select other Location' window should reappear.
Left mouse click on the 'OK' button. 
The 'Update Device Driver Wizard' window should appear. The name of the driver that you selected should appear in the window.
Left mouse click on the 'Finish' button.
A Windows Insert Disk Message should appear. This is normal. 
Left mouse click on the 'OK' button.
The 'Copying Files' window should now appear. The driver file name should appear in the upper left corner of the window. 
Left mouse click on the 'Browse' button. 
In the 'Browse' folder, find your CD-ROM drive icon.
Find the name of your 3Dfx card in the list of folders.
Left mouse click on your 3Dfx card's folder.
If you have selected the correct folder, the driver file name should appear on the left side of the screen. Note: You should see the name of the file listed in the upper left corner of the 'Copying Files' window and in the window area directly below it. 
Left mouse click on the 'OK' button.
Left mouse click on the 'OK' button.
You should now see a graphical display of the new drivers being copied onto your machine. 
The 'Systems Setting' window should appear. 
 Left mouse click on the 'Yes' button. 
If your machine does not automatically reboot, you will need to do so manually in order to affect the changes. 


15. AMD MACHINES

H.E.D.Z. has been tested on several machines that were directly shipped from AMD. It was discovered while testing H.E.D.Z. that some of the AMD machines shipped with older versions of video graphic card drivers. If you have an AMD equipped machine and experience problems, please contact the manufacturer of the device and request the latest DirectX 5.2 or DirectX 6.0 certified drivers for that device. 
 

**********  E N D   O F   R E A D M E  **********

