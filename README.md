![VSTS Build Status](https://hsgame.visualstudio.com/_apis/public/build/definitions/aeaa314b-7b56-4733-89fa-67e9bccfb809/4/badge)

----------------------------------------------  
<h2 align="center">				
			HorizonVRPlugin<br>
					4.20.0   <br>
			http://dorgon.horizon-studio.net  <br>
				dorgonman@hotmail.com  <br>
</h2>
----------------------------------------------  

The goal of this plugin is to provide a unified VR Character and MotionController functions for support different VR device at same time, ex: HTC Vive, Oculus Rift and Google Daydream.

本Plugin的目標在於提供一個通用的VR Character與MotionController以同時支援各種VR裝置，例如vive、oculus以及daydream。


-----------------------  
System Requirements
-----------------------  

Tested UnrealEngine version:  4.17, 4.18, 4.19, 4.20

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

Please Set DefaultPawnClass in GameMode to BP Class Plugins\HorizonVRPlugin\Content\Blueprints\Character\BP_HorizonVRCharacter, or set the character's Auto Possess Player to Player0 after drop to the map. This Character will detect your connected VR device and spawn the MotionControllerActor for that device. If you want to test your VR controller interaction, use [Google Controller Emulator](https://developers.google.com/vr/daydream/controller-emulator) is a good idea, if you has a daydream-ready phone, because with this app, you won't need setup HTC Vive or Oculus in order to do some quick test. If your computer didn't connect with any VR Device, default HMDDeviceType will be EHorizonVRHMDType::GoogleVRHMD.


Note1: If you can't see MotionController in packaged build, please Delay about 1 second in your Game Default Map and call OpenLevel(YourMainMap), because plugin need to wait engine full initialized VR related setting in order to work properly.(Editor didn't has such limitation)
Note2: If you connect Google Controller Emulator and other VR devices at same time, Google Controller Emulator will take over the controller.



請將Plugins\HorizonVRPlugin\Content\Blueprints\Character\BP_HorizonVRCharacter配置到GameMode中的DefaultPawnClass，或是放到map中後將該Character的Auto Possess Player設成Player0。該Character會根據目前的VR裝置動態生成不同的MotionControllerActor。

在Editor中，若是你擁有daydream ready的手機，你也可以很方便的使用 [Google Controller Emulator](https://developers.google.com/vr/daydream/controller-emulator)來測試相關的VR互動性操作，這樣在做快速測試時，就可以減少必須HTC Vive或Oculus設置的麻煩。另外，若是電腦沒有連接到任何VR裝置，預設取得的HMDDeviceType會是EHorizonVRHMDType::GoogleVRHMD。

附注1：若是您發現在packaged build中的MotionController消失不見，請在Game Default Map中加入大約1秒鐘的delay之後再呼叫OpenLevel(YourMainMap)，因為本plugin需要等待engine將VR相關的設置初始化完成後才有辦法正常的運作。(在Editor中不受此限制)  

附注2：若是在Editor中同時連接Google Controller Emulator跟其他VR裝置的話，Controller操控的優先權將會在Google Controller Emulator身上。  


-----------------------
Technical Details
-----------------------  
 
Features: 
  GoogleVRController's laser and reticle feature for HTC Vive and Oculus Rift  
  Auto detect current HMD device and spawn corresponding MotionControllerActor
  Support Laser Pointer input callbacks: OnPointerEnterActorEvent, OnPointerEnterComponentEvent, OnPointerExitActorEvent, OnPointerExitComponentEvent, OnPointerHoverActorEvent, OnPointerHoverComponentEvent, OnPointerClickActorEvent, OnPointerClickComponentEvent, OnPointerPressedEvent, OnPointerReleasedEvent

Code Modules: HorizonVR (Runtime) 

Number of Blueprints: 6  
Number of C++ Classes: 11  
Network Replicated: No  
Supported Development Platforms: Windows, Mac  
Supported Target Build Platforms: Windows, Android  
Documentation: https://github.com/dorgonman/HorizonVRDemo   
Example Project: https://github.com/dorgonman/HorizonVRDemo  

-----------------------
What does your plugin do/What is the intent of your plugin
-----------------------  

Demo Video: https://youtu.be/5qoL7fktCXk  
Demo Project: https://github.com/dorgonman/HorizonVRDemo  

This Plugin ports the functions from [GoogleVRController Plugin](https://docs.unrealengine.com/latest/INT/Platforms/GoogleVR/Daydream/) in the engine and make sure the controller features also works in HTC Vive, Oculus Rift, Google Daydream and other VR devices.  

本Plugin主要是移植了引擎中的[GoogleVRController Plugin](https://docs.unrealengine.com/latest/INT/Platforms/GoogleVR/Daydream/)，並讓其Laser與各種Pointer中的回呼機制能夠同時運行在HTC Vive、Oculus Rift、Google Daydream以及其他各種不同的VR裝置。  



-----------------------
Contact and Support
-----------------------  

email: dorgonman@hotmail.com


-----------------------
 Version History
-----------------------
* 4.20.0
	Refactor Source Folders
* 4.19.0
NEW: Update to 4.19.0.
BugFix: UMG Button Hover event continuous fire in VR

* 4.18.0
NEW: Update to 4.18.0.

* 4.17.0
NEW: First Version including core features.




