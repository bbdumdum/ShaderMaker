# ShaderMaker
A source code template to create FreeframeGL plugins from GLSL Sandbox and ShaderToy shaders.

For the shaders that you find useful with "ShaderLoader" and will use a lot,
it is useful to have a dedicated FreeFrameGL plugin that does not not rely on a shader file.

##Windows
This is a Visual Studio C++ project that can make any number of them.
Download everything and unzip into in any folder, open the VS2010 solution file with
Visual Studio and change to "release", it should build OK as-is. More examples are in the source file.

##Mac
In build/osx there are both and XCode project and a makefile. if using the makefile type: 
```
make && make package
```
In both cases, the resulting bundle will be created in Binaries/osx

##Linux (experimental)
In build/linux there is a makefile for producing a .so.

This makefile has been written under a Debian 8.0 (jessie) install, and clang.
The following packages need to be installed: clang, mesa-common-dev, freeglut3, libc++-dev

```
sudo apt-get install clang mesa-common-dev freeglut3 libc++-dev
```

When those packages are installed you can type
```
make && make package
```
The resulting .so file will be copied into Binaries/linux

##How to use
To make your own shader plugin, all you do is copy/paste the shader code into the source file,
change the plugin information and rename the resulting dll. There are some things to take note of, 
but hopefully the code and documentation are clear enough.

Refer to the documentation for further details.

##Credits
Implementation by Lynn Jarvis leadedge@adam.com.au
MacOSX port by Amaury Hazan amaury@billaboop.com
The MacOSX port was supported by Coldcut/Ninja Tune as a contribution to the Visuals Community

