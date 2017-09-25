----------------------------------------------  
<h2 align="center">				
			HorizonVRPlugin<br>
					4.17.0   <br>
			http://dorgon.horizon-studio.net  <br>
				dorgonman@hotmail.com  <br>
</h2>
----------------------------------------------  

The goal of this plugin is to provide a unified VR Character and MotionController functions for support different VR device at same time, ex: HTC Vive, Oculus Rift and Google Daydream.

本Plugin的目標在於提供一個通用的VR Character與MotionController以同時支援各種VR裝置，例如vive、oculus以及daydream。


-----------------------  
System Requirements
-----------------------  

Tested UnrealEngine version:  4.17

-----------------------
Installation Guide
-----------------------  

Put HorizonVRPlugin into YOUR_PROJECT/Plugins folder, 
and then add module to your project 
YOUR_PROJECT.Build.cs:
PublicDependencyModuleNames.AddRange(new string[] { "HorizonVR"});

-----------------------
User Guide
-----------------------  

Please Set DefaultPawnClass in GameMode to BP Class Plugins\HorizonVRPlugin\Content\Blueprints\Character\BP_HorizonVRCharacter, or set the character's Auto Possess Player to Player0 after drop to the map. This Character will detect your connected VR device and spawn the MotionControllerActor for that device.  

請將Plugins\HorizonVRPlugin\Content\Blueprints\Character\BP_HorizonVRCharacter配置到GameMode中的DefaultPawnClass，或是放到map中後將該Character的Auto Possess Player設成Player0。該Character會根據目前的VR裝置動態生成不同的MotionControllerActor。  


-----------------------
Technical Details
-----------------------  
Features: 
  Features in Engine's GoogleVRController Plugin also available in HTC Vive and Oculus Rift  
  Auto detect Current HMD device and spawn corresponding MotionControllerActor  

Code Modules: HorizonVR (Runtime) 

Number of Blueprints: 6  
Number of C++ Classes: 11  
Network Replicated: No  
Supported Development Platforms: Windows, Android  
Supported Target Build Platforms: Windows, Android  
Documentation: https://github.com/dorgonman/HorizonVRDemo   
Example Project: https://github.com/dorgonman/HorizonVRDemo  

-----------------------
What does your plugin do/What is the intent of your plugin
-----------------------  

Demo Video: 

This Plugin ported the functions from [GoogleVRController Plugin](https://docs.unrealengine.com/latest/INT/Platforms/GoogleVR/Daydream/) in the engine and make sure laser feature and other Pointer callback also Support HTC Vive, Oculus Rift, Google Daydream and other VR devices.  

本Plugin主要是移植了引擎中的[GoogleVRController Plugin](https://docs.unrealengine.com/latest/INT/Platforms/GoogleVR/Daydream/)，並讓其Laser與各種Pointer中的回呼機制能夠同時運行在HTC Vive、Oculus Rift、Google Daydream以及其他各種不同的VR裝置。  



-----------------------
Contact and Support
-----------------------  

email: dorgonman@hotmail.com


-----------------------
 Version History
-----------------------  
* 4.17.0
NEW: First Version including core features.




